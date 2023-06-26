#pragma once
#include "includes.h"

FString Distancetext(const FString& str, float distance)
{
    std::wstringstream wss;
    wss << std::fixed;
    wss << str.ToStringW() << L" [" << static_cast<int>(distance) << L" m]";
    FString nameAndDistance(wss.str().c_str());
    return nameAndDistance;
}

void drawRect(UCanvas* canvas, FVector2D initial_pos, float w, float h, FLinearColor color, float thickness)
{

    canvas->K2_DrawLine(FVector2D(initial_pos.X, initial_pos.Y), FVector2D(initial_pos.X + w, initial_pos.Y), thickness, color);
    canvas->K2_DrawLine(FVector2D(initial_pos.X, initial_pos.Y), FVector2D(initial_pos.X, initial_pos.Y + h), thickness, color);
    canvas->K2_DrawLine(FVector2D(initial_pos.X + w, initial_pos.Y), FVector2D(initial_pos.X + w, initial_pos.Y + h), thickness, color);
    canvas->K2_DrawLine(FVector2D(initial_pos.X, initial_pos.Y + h), FVector2D(initial_pos.X + w, initial_pos.Y + h), thickness, color);

}

inline UFont* get_font()
{
    static UFont* font;
    if (!font)
        font = UObject::FindObject<UFont>("Font RobotoDistanceField.RobotoDistanceField");

    return font;
}

inline UFunction* Speed()
{
    static UFunction* function;
    if (!function)
        function = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerExecRPC");

    return function;
}

float DistanceTo(FVector main, FVector other)
{
    float dx = main.X - other.X;
    float dy = main.Y - other.Y;
    float dz = main.Z - other.Z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

FLinearColor rgb2rgbfl(float r, float g, float b) {
    r = r / 255;
    g = g / 255;
    b = b / 255;
    return FLinearColor(r, g, b, 1.f);
}

//Normal Model Bones

static int prightarm[5]{
    55, //r_hand
    70, //r lowerarm
    45, //r upperarm
    44, //should be r shoulder
    10, //neck
};

static int pleftarm[5]{
    25, //l_hand
    41, //l_lowerarm
    15, //l_upperarm
    14, //should be l shoulder
    10, //neck
};

static int pspine[6]{

    1, //pelvis
    7, //spine1
    8, //spine2
    73, //spine3
    10, //neck
    11, //head
};

static int pleftleg[4]{

    5, //l_foot
    4, //l_ball
    3, //l_calf
    1, //pelvis
};

static int prightleg[4]{

    79, //r_foot
    78, //r_ball
    77, //r_calf
    1, //pelvis
};

//Big Guy Bones

static int pbigguysrightarm[5]{
    12, //r_hand
    30, //r lowerarm
    10, //r upperarm
    9, //should be r shoulder
    5, //neck
};

static int pbigguysleftarm[5]{
    39, //l_hand
    57, //l_lowerarm
    37, //l_upperarm
    36, //should be l shoulder
    5, //neck
};

static int pbigguysspine[6]{

    1, //pelvis
    2, //spine1
    3, //spine2
    62, //spine3
    5, //Neck
    6, //head
};

static int pbigguysleftleg[4]{

    73, //l_foot
    80, //l_ball
    71, //l_calf
    1, //pelvis
};

static int pbigguysrightleg[4]{

    68, //r_foot
    81, //r_ball
    66, //r_calf
    1, //pelvis
};

struct FInputKeyEventArgs
{
    void* Viewport;
    int32_t ControllerId;
    int32_t InputDevice;
    FKey Key;
    EInputEvent Event;
    float AmountDepressed;
    bool bIsTouchEvent;
};

std::string_view to_string_view(const FName& name) {
    auto cmp_idx = name.ComparisonIndex;
    const auto& name_entry = FName::GetGlobalNames()[cmp_idx];
    const std::string_view func_name{ name_entry->AnsiName, static_cast<std::size_t>(name_entry->Header.Len) };

    return func_name;
}

bool IsInQuadrant(float NeedleRatio, int32_t TotalQuadrants, int32_t TargetQuadrant)
{
    float StartTarget = static_cast<float>(TargetQuadrant - 1) / TotalQuadrants;
    float EndTarget = static_cast<float>(TargetQuadrant) / TotalQuadrants;
    return NeedleRatio >= StartTarget && NeedleRatio < EndTarget;
}

typedef void(__thiscall* post_render_type)(UGameViewportClient*, UCanvas*);
post_render_type original_post_render = nullptr;
void PostRenderHook(UGameViewportClient* vp_client, UCanvas* canvas)
{
    canvas->K2_DrawText(get_font(), FString(L"IceCubes"), FVector2D(10, 15), FVector2D(0.5f, 0.5f), rgb2rgbfl(252, 232, 3), 1.0f, CG::FLinearColor(0, 0, 0, 1), FVector2D(), false, true, true, CG::FLinearColor(0, 0, 0, 1));

    UWorld* world = UWorld::GWorld[0];
    Nullcheck(world);

    UGameInstance* OwningGameInstance = world->OwningGameInstance;
    Nullcheck(OwningGameInstance);

    AGameStateBase* GameState = world->GameState;
    Nullcheck(GameState);

    ULevel* PersistentLevel = world->PersistentLevel;
    Nullcheck(PersistentLevel);

    ULocalPlayer* LocalPlayer = OwningGameInstance->LocalPlayers[0];
    Nullcheck(LocalPlayer);

    APlayerController* PlayerController = LocalPlayer->PlayerController;

    APawn* GetCharacter = PlayerController->K2_GetPawn();
    Nullcheck(GetCharacter);

    auto GameViewportClient = LocalPlayer->ViewportClient;

    const auto GameplayStats = (UGameplayStatics*)UGameplayStatics::StaticClass();
    Nullcheck(GameplayStats);

    auto& Time = GetCharacter->CustomTimeDilation;
    float max = 5.f;
    if (GetKeyState(VK_XBUTTON2) & 0x8000)
    {
        Time = max;
    }
    else
    {
        Time = 1.f;
    }

    for (int i = 0; i < world->Levels.Count(); i++) {
        if (!world->Levels.IsValidIndex(i)) continue;

        auto level = world->Levels[i];
        if (!level) continue;

        for (int j = 0; j < level->ActorList.Count(); j++) {
            if (!level->ActorList.IsValidIndex(j)) continue;

            auto actor = level->ActorList[j];
            if (!actor) continue;

            if (actor->IsA(ARBPickup::StaticClass()))
            {
                const auto pawn = static_cast<ARBPickup*>(actor);

                const FString name = pawn->PickupSwitchName;

                const FVector location = pawn->K2_GetActorLocation();

                const FVector localLocation = GetCharacter->K2_GetActorLocation();

                float distance = DistanceTo(localLocation, location) / 100.f;

                if (distance > 25.f)
                    continue;

                EItemType category = pawn->ItemDefinition.ItemType;
                FLinearColor Color = rgb2rgbfl(0, 0, 0);
                FString ModifiedName = name;

                if (wcscmp(ModifiedName.wc_str(), L"SW_Pickup_None") == 0)
                    continue;

                switch (category)
                {
                case EItemType::ReviveSyringe:
                    ModifiedName = L"Syringe";
                    Color = rgb2rgbfl(0, 0, 255);    // Bright blue
                    break;

                case EItemType::LockPick:
                    ModifiedName = L"Lock Pick";
                    Color = rgb2rgbfl(255, 0, 255);  // Bright magenta
                    break;

                case EItemType::SmallBattery:
                    ModifiedName = L"Small Battery";
                    Color = rgb2rgbfl(0, 255, 255);  // Bright cyan
                    break;

                case EItemType::SuperBattery:
                    ModifiedName = L"Super Battery";
                    Color = rgb2rgbfl(255, 128, 0);  // Bright orange
                    break;

                case EItemType::Battery:
                    ModifiedName = L"Normal Battery";
                    Color = rgb2rgbfl(128, 0, 255);  // Bright purple
                    break;

                case EItemType::Bottle:
                    ModifiedName = L"Glass Bottle";
                    Color = rgb2rgbfl(255, 0, 128);  // Bright pink
                    break;

                case EItemType::CollectibleDocument:
                    ModifiedName = L"Document";
                    Color = rgb2rgbfl(255, 128, 192);  // Bright pinkish purple
                    break;

                case EItemType::SkillCharge:
                    ModifiedName = L"Skill Charge";
                    Color = rgb2rgbfl(255, 128, 128);  // Bright salmon
                    break;

                case EItemType::HealthGain:
                    ModifiedName = L"Large Medicine";
                    Color = rgb2rgbfl(128, 255, 255);  // Bright sky blue
                    break;

                case EItemType::TempHealthGain:
                    ModifiedName = L"Small Medicine";
                    Color = rgb2rgbfl(0, 128, 128);  // Bright teal
                    break;

                case EItemType::StaminaRegen:
                    ModifiedName = L"Adrenaline";
                    Color = rgb2rgbfl(255, 128, 0);  // Bright amber
                    break;

                case EItemType::MaxStaminaBoost:
                    ModifiedName = L"Stamina Regen";
                    Color = rgb2rgbfl(128, 0, 128);  // Bright purple
                    break;

                case EItemType::MasterKey:
                    ModifiedName = L"Master Key";
                    Color = rgb2rgbfl(255, 128, 255);  // Bright lavender
                    break;

                case EItemType::PsychosisAntidote:
                    ModifiedName = L"Antidote";
                    Color = rgb2rgbfl(255, 0, 128);    // Bright rose
                    break;

                case EItemType::Brick:
                    ModifiedName = L"Brick";
                    Color = rgb2rgbfl(128, 128, 128);  // Bright gray
                    break;

                case EItemType::Quest:
                    ModifiedName = L"Quest things";
                    Color = rgb2rgbfl(128, 255, 128);  // Bright lime
                    break;

                case EItemType::GoreThrowable:
                    ModifiedName = L"Gore";
                    Color = rgb2rgbfl(255, 128, 0);  // Bright amber
                    break;

                case EItemType::MolotovCocktail:
                    ModifiedName = L"Molotov";
                    Color = rgb2rgbfl(128, 0, 0);  // Bright maroon
                    break;

                case EItemType::HealthBoost:
                    ModifiedName = L"Health Boost";
                    Color = rgb2rgbfl(255, 128, 128);  // Bright coral
                    break;
                }

                FVector2D scale = FVector2D(0.5f, 0.5f);
                FLinearColor shadowColor = FLinearColor(0, 0, 0, 1);
                FVector2D shadowOffset = FVector2D(1, 1);

                FString nameAndDistance = Distancetext(ModifiedName, distance);

                FVector2D screen;
                if (!PlayerController->ProjectWorldLocationToScreen(location, &screen, false))
                    continue;

                canvas->K2_DrawText(
                    get_font(),
                    nameAndDistance,
                    screen,
                    scale,
                    Color,
                    1.0f,
                    shadowColor,
                    shadowOffset,
                    true,
                    true,
                    true,
                    shadowColor
                );
            }

            if (actor->IsA(ARBPlayer::StaticClass()))
            {

                const auto pawn = static_cast<ARBPlayer*>(actor);

                if (pawn == GetCharacter)
                    continue;

                const auto name = pawn->GetGamePlayerName();

                auto item = pawn->GetItemHeld();

                const auto location = pawn->K2_GetActorLocation();

                const auto localLocation = GetCharacter->K2_GetActorLocation();

                float distance = DistanceTo(localLocation, location) / 100.0f;

                FString nameAndDistance = Distancetext(name, distance);

                FVector2D scale = FVector2D(0.7f, 0.7f);
                FLinearColor Color = rgb2rgbfl(0, 255, 0);
                FLinearColor shadowColor = FLinearColor(0, 0, 0, 1);
                FVector2D shadowOffset = FVector2D(1, 1);

                FVector2D screen;
                if (!PlayerController->ProjectWorldLocationToScreen(location, &screen, false))
                    continue;

                auto FeetW2S = canvas->K2_Project(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(0)));
                auto HeadW2S = canvas->K2_Project(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(12)));

                int x = FeetW2S.X;
                int y = FeetW2S.Y;
                int h = (HeadW2S.Y - FeetW2S.Y);
                int w = h / 2.25;

                const float adjust = h * -1.10f;
                FVector2D pos = { FeetW2S.X, FeetW2S.Y - adjust };

                if (globals::PlayerESPVisual)
                {
                    if (globals::PlayerNames)
                    {
                        canvas->K2_DrawText(
                            get_font(),
                            nameAndDistance,
                            pos,
                            scale,
                            Color,
                            1.0f,
                            shadowColor,
                            shadowOffset,
                            true,
                            true,
                            true,
                            shadowColor
                        );
                    }

                    if (globals::PlayerBoxes)
                    {
                        drawRect(canvas, FVector2D((x - (w / 2)), y), w, h, Color, 1.f);
                    }
                        
                    if (globals::PlayerBones)
                    {
                        //Draw Right Arm
                        {
                            FVector2D previousBone{};
                            FVector2D bonePos;

                            for (int i = 0; i < 5; i++) //draw right arm
                            {

                                PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(prightarm[i])), &bonePos, false);

                                if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                    break;

                                if (previousBone.X == 0.0f) // first bone no draw happens
                                {
                                    previousBone = bonePos;
                                    continue;
                                }

                                canvas->K2_DrawLine(
                                    previousBone,
                                    bonePos,
                                    1.5f,
                                    Color);
                                previousBone = bonePos;
                            }
                        }

                        //Draw Left Arm
                        {
                            FVector2D previousBone{};
                            FVector2D bonePos;

                            for (int i = 0; i < 5; i++) //draw right arm
                            {

                                PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pleftarm[i])), &bonePos, false);

                                if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                    break;

                                if (previousBone.X == 0.0f) // first bone no draw happens
                                {
                                    previousBone = bonePos;
                                    continue;
                                }

                                canvas->K2_DrawLine(
                                    previousBone,
                                    bonePos,
                                    1.5f,
                                    Color);
                                previousBone = bonePos;
                            }
                        }

                        //Draw Spine
                        {
                            FVector2D previousBone{};
                            FVector2D bonePos;

                            for (int i = 0; i < 6; i++) //draw right arm
                            {

                                PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pspine[i])), &bonePos, false);

                                if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                    break;

                                if (previousBone.X == 0.0f) // first bone no draw happens
                                {
                                    previousBone = bonePos;
                                    continue;
                                }

                                canvas->K2_DrawLine(
                                    previousBone,
                                    bonePos,
                                    1.5f,
                                    Color);
                                previousBone = bonePos;
                            }
                        }

                        //Draw Left Leg
                        {
                            FVector2D previousBone{};
                            FVector2D bonePos;

                            for (int i = 0; i < 4; i++) //draw right arm
                            {

                                PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pleftleg[i])), &bonePos, false);

                                if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                    break;

                                if (previousBone.X == 0.0f) // first bone no draw happens
                                {
                                    previousBone = bonePos;
                                    continue;
                                }

                                canvas->K2_DrawLine(
                                    previousBone,
                                    bonePos,
                                    1.5f,
                                    Color);
                                previousBone = bonePos;
                            }
                        }

                        //Draw Right Leg
                        {
                            FVector2D previousBone{};
                            FVector2D bonePos;

                            for (int i = 0; i < 4; i++) //draw right arm
                            {

                                PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(prightleg[i])), &bonePos, false);

                                if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                    break;

                                if (previousBone.X == 0.0f) // first bone no draw happens
                                {
                                    previousBone = bonePos;
                                    continue;
                                }

                                canvas->K2_DrawLine(
                                    previousBone,
                                    bonePos,
                                    1.5f,
                                    Color);
                                previousBone = bonePos;
                            }
                        }
                    }
                }
            }

            if (actor->IsA(ARBNPC::StaticClass()))
            {
                const auto pawn = static_cast<ARBNPC*>(actor);

                auto name = pawn->NPCName;

                const auto location = pawn->K2_GetActorLocation();

                const auto localLocation = GetCharacter->K2_GetActorLocation();

                float distance = DistanceTo(localLocation, location) / 100.0f;

                FVector2D scale = FVector2D(0.7f, 0.7f);
                FLinearColor Color = rgb2rgbfl(255, 0, 0);
                FLinearColor shadowColor = FLinearColor(0, 0, 0, 1);
                FVector2D shadowOffset = FVector2D(1, 1);

                ENPCType category = pawn->NPCType;
                FString ModifiedName = name;

                switch (category)
                {
                case ENPCType::Grunt:
                    ModifiedName = L"Grunt";
                    break;

                case ENPCType::Ambient:
                    ModifiedName = L"Ambient";
                    break;

                case ENPCType::PitcherSniper:
                    ModifiedName = L"Pitcher Sniper";
                    break;

                case ENPCType::BigGrunt:
                    ModifiedName = L"Big Grunt";
                    break;

                case ENPCType::SleeperScreamer:
                    ModifiedName = L"Sleeper";
                    break;

                case ENPCType::Pusher:
                    ModifiedName = L"Pusher";
                    break;

                case ENPCType::Pouncer:
                    ModifiedName = L"Pouncer";
                    break;

                case ENPCType::GroundPitcher:
                    ModifiedName = L"Ground Pitcher";
                    break;

                case ENPCType::Berserker:
                    ModifiedName = L"Berserker";
                    break;

                case ENPCType::Imposter:
                    ModifiedName = L"Imposter";
                    break;

                case ENPCType::NightHunter:
                    ModifiedName = L"Night Hunter";
                    break;

                case ENPCType::Spectre:
                    ModifiedName = L"Spectre";
                    break;

                case ENPCType::StalkerTarget:
                    ModifiedName = L"Stalker";
                    break;

                case ENPCType::Gooseberry:
                    ModifiedName = L"Goose berry";
                    break;

                case ENPCType::Coyle:
                    ModifiedName = L"Coyle";
                    break;

                case ENPCType::Scientist:
                    continue;

                case ENPCType::Guard:
                    continue;
                }

                FString nameAndDistance = Distancetext(ModifiedName, distance);;

                FVector2D screen;
                if (!PlayerController->ProjectWorldLocationToScreen(location, &screen, false))
                    continue;

                auto FeetW2S = canvas->K2_Project(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(0)));
                auto HeadW2S = canvas->K2_Project(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(12)));

                int x = FeetW2S.X;
                int y = FeetW2S.Y;
                int h = (HeadW2S.Y - FeetW2S.Y);
                int w = h / 2.25;

                const float adjust = h * 0.10f;
                FVector2D pos = { HeadW2S.X, HeadW2S.Y - adjust };

                canvas->K2_DrawText(
                    get_font(),
                    nameAndDistance,
                    pos,
                    scale,
                    Color,
                    1.0f,
                    shadowColor,
                    shadowOffset,
                    true,
                    true,
                    true,
                    shadowColor
                );

                if (!(category == ENPCType::BigGrunt)) {

                    drawRect(canvas, FVector2D((x - (w / 2)), y), w, h, Color, 1.f);


                    //Draw Left Arm
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 5; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pleftarm[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Right Arm
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 5; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(prightarm[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Spine
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 6; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pspine[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Left Leg
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 4; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pleftleg[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Right Leg
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 4; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(prightleg[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }
                }

                if (category == ENPCType::BigGrunt) {

                    auto FeetW2S = canvas->K2_Project(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(0)));
                    auto HeadW2S = canvas->K2_Project(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(7)));

                    int x = FeetW2S.X;
                    int y = FeetW2S.Y;
                    int h = (HeadW2S.Y - FeetW2S.Y);
                    int w = h / 2.25;

                    drawRect(canvas, FVector2D((x - (w / 2)), y), w, h, Color, 1.f);

                    //Draw Left Arm
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 5; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pbigguysleftarm[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Right Arm
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 5; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pbigguysrightarm[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Spine
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 6; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pbigguysspine[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Left Leg
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 4; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pbigguysleftleg[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                    //Draw Right Leg
                    {
                        FVector2D previousBone{};
                        FVector2D bonePos;

                        for (int i = 0; i < 4; i++) //draw right arm
                        {

                            PlayerController->ProjectWorldLocationToScreen(pawn->Mesh->GetSocketLocation(pawn->Mesh->GetBoneName(pbigguysrightleg[i])), &bonePos, false);

                            if (bonePos.X == 0.0f && bonePos.Y == 0.0f)
                                break;

                            if (previousBone.X == 0.0f) // first bone no draw happens
                            {
                                previousBone = bonePos;
                                continue;
                            }

                            canvas->K2_DrawLine(
                                previousBone,
                                bonePos,
                                1.5f,
                                Color);
                            previousBone = bonePos;
                        }
                    }

                }

            }

            if (actor->IsA(ARBSplinePushable::StaticClass()))
            {
                const auto pawn = static_cast<ARBSplinePushable*>(actor);

                const auto actorlocation = pawn->K2_GetActorLocation();

                const auto localLocation = GetCharacter->K2_GetActorLocation();

                float distance = DistanceTo(localLocation, actorlocation) / 100.0f;

                if (!distance > 25.f)
                    continue;

                auto& PitchUpPushActionAnchorOffset = pawn->PitchUpPushActionAnchorOffset;
                auto& PitchDownPushActionAnchorOffset = pawn->PitchDownPushActionAnchorOffset;
                auto& Server_DistanceAlongSpline = pawn->Server_DistanceAlongSpline;

                PitchUpPushActionAnchorOffset = 10000.f;
                PitchDownPushActionAnchorOffset = 10000.f;

                float defaultfloat = Server_DistanceAlongSpline;
                if (GetKeyState(VK_XBUTTON1) & 0x8000)
                {
                    Server_DistanceAlongSpline = 800.f;
                }

                FString nameAndDistance = Distancetext(L"The Snitch", distance);

                FVector2D screen;
                if (!PlayerController->ProjectWorldLocationToScreen(actorlocation, &screen, false))
                    continue;

                FVector2D scale = FVector2D(0.5f, 0.5f);
                FLinearColor Color = rgb2rgbfl(255, 105, 180);
                FLinearColor shadowColor = FLinearColor(0, 0, 0, 1);
                FVector2D shadowOffset = FVector2D(1, 1);

                canvas->K2_DrawText(
                    get_font(),
                    nameAndDistance,
                    screen,
                    scale,
                    Color,
                    1.0f,
                    shadowColor,
                    shadowOffset,
                    true,
                    true,
                    true,
                    shadowColor
                );
            }

            if (actor->IsA(ARBArmWreslingTable::StaticClass()))
            {
                const auto pawn = static_cast<ARBArmWreslingTable*>(actor);

                URBArmWreslingPanelComponent* current_wresling_panel = pawn->GetLocallyWatchedPanel();

                if (current_wresling_panel
                    && current_wresling_panel->IsArmWreslingRoundInProgress())
                {
                    const auto cursor_position = current_wresling_panel->GetCursorPosition();

                    if (cursor_position > 0.1f)
                    {
                        const auto zone_end = 1.f - current_wresling_panel->SuccessZoneOffset;

                        if (zone_end >= cursor_position
                            && zone_end - cursor_position <= 0.03f)
                        {
                            static auto StartTime = std::chrono::high_resolution_clock::now();

                            auto CurrentTime = std::chrono::high_resolution_clock::now();
                            auto Duration = std::chrono::duration_cast<std::chrono::milliseconds>(CurrentTime - StartTime);

                            int x = 0;
                            int y = 0;

                            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

                            if (Duration.count() >= 25)
                            {
                                StartTime = std::chrono::high_resolution_clock::now();

                                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                            }
                        }
                    }
                }
            }

            if (actor->IsA(ARBGeneratorMultiObjectiveActor::StaticClass()))
            {
                const auto pawn = static_cast<ARBGeneratorMultiObjectiveActor*>(actor);

                if (!pawn->bIsInteractible)
                    continue;

                if (pawn->IsCrankCompleted())
                    continue;

                const auto location = pawn->K2_GetActorLocation();

                const auto localLocation = GetCharacter->K2_GetActorLocation();

                float distance = DistanceTo(localLocation, location) / 100.0f;

                if (distance > 25.f)
                    continue;

                FString nameAndDistance = Distancetext(L"Generator", distance);

                FVector2D screen;
                if (!PlayerController->ProjectWorldLocationToScreen(location, &screen, false))
                    continue;

                FVector2D scale = FVector2D(0.5f, 0.5f);
                FLinearColor Color = rgb2rgbfl(255, 105, 180);
                FLinearColor shadowColor = FLinearColor(0, 0, 0, 1);
                FVector2D shadowOffset = FVector2D(1, 1);

                canvas->K2_DrawText(
                    get_font(),
                    nameAndDistance,
                    screen,
                    scale,
                    Color,
                    1.0f,
                    shadowColor,
                    shadowOffset,
                    true,
                    true,
                    true,
                    shadowColor
                );

                URBZoneTimingPanelComponent* CrankPanel = pawn->CrankPanel;

                if (CrankPanel)
                {
                    int32_t FirstSuccessQuadrant = 0;

                    auto TargetInfo = CrankPanel->TargetInfo;

                    TArray<ETimingInputResultType> NeedleStates = TargetInfo.NeedleResults;

                    for (int32_t z = 0; z < NeedleStates.Count(); z++)
                    {
                        if (NeedleStates[z] == ETimingInputResultType::Success)
                        {
                            FirstSuccessQuadrant = z;
                            break;
                        }
                    }

                    float CurrentMeter = CrankPanel->CurrentMeter;

                    int32_t TotalRangeIncrements = CrankPanel->TotalRangeIncrements;

                    if (IsInQuadrant(CurrentMeter, TotalRangeIncrements, FirstSuccessQuadrant)) {
                        static auto StartTime = std::chrono::high_resolution_clock::now();

                        auto CurrentTime = std::chrono::high_resolution_clock::now();
                        auto Duration = std::chrono::duration_cast<std::chrono::milliseconds>(CurrentTime - StartTime);

                        int x = 0;
                        int y = 0;

                        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

                        if (Duration.count() >= 25)
                        {
                            StartTime = std::chrono::high_resolution_clock::now();

                            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                        }
                    }
                }
            }

            if (actor->IsA(ARBThrowableWeapon::StaticClass()))
            {
                const auto pawn = static_cast<ARBThrowableWeapon*>(actor);
                
                auto checker = pawn->thrower;

                if (checker == GetCharacter)
                {
                    auto& throwspeed = pawn->ThrownSpeed;
                    auto& throwgravity = pawn->Gravity;
                    auto& throwdamage = pawn->Damage;
                    auto& throwdamageobject = pawn->DamageOnObjects;

                    throwdamage = 1000000.f;
                    throwdamageobject = 1000000.f;
                    throwspeed = 9000.f;
                    throwgravity = 10000.f;
                }
            }

            if (actor->IsA(ARBWireTriggerTrap::StaticClass()))
            {
                const auto pawn = static_cast<ARBWireTriggerTrap*>(actor);

                if (!pawn->bCurrentlyEnabled)
                    continue;

                const auto location = pawn->K2_GetActorLocation();

                const auto localLocation = GetCharacter->K2_GetActorLocation();

                float distance = DistanceTo(localLocation, location) / 100.0f;

                if (distance > 25.f)
                    continue;

                FString nameAndDistance = Distancetext(L"Trapped Door", distance);

                FVector2D screen;
                if (!PlayerController->ProjectWorldLocationToScreen(location, &screen, false))
                    continue;

                FVector2D scale = FVector2D(0.5f, 0.5f);
                FLinearColor Color = rgb2rgbfl(2, 7, 111);
                FLinearColor shadowColor = FLinearColor(0, 0, 0, 1);
                FVector2D shadowOffset = FVector2D(1, 1);

                canvas->K2_DrawText(
                    get_font(),
                    nameAndDistance,
                    screen,
                    scale,
                    Color,
                    1.0f,
                    shadowColor,
                    shadowOffset,
                    true,
                    true,
                    true,
                    shadowColor
                );
            }

        }
    }

    return original_post_render(vp_client, canvas);
}

typedef void(__thiscall* post_process_type)(UObject*, UFunction*, void*);
post_process_type original_process_event = nullptr;
void ProcessEventHook(UObject* caller, UFunction* fn, void* parms)
{

    return original_process_event(caller, fn, parms);
}

HCURSOR WINAPI hkSetCursor(HCURSOR hCursor)
{
    if (globals::show)
    {
        return NULL;
    }
    return oSetCursor(hCursor);
}

BOOL WINAPI hkSetCursorPos(int x, int y)
{
    if (globals::show)
    {
        return false;
    }
    return oSetCursorPos(x, y);
}

void InitializeCheeze() {
    AllocConsole();
    freopen("conin$", "r+t", stdin);
    freopen("conout$", "w+t", stdout);
    freopen("conout$", "w+t", stderr);

    InitSdk();
    printf("SDK initialized.\n");

    HMODULE moduleHandle = GetModuleHandleW(L"TOTClient-Win64-Shipping.exe");
    printf("Module handle: %p\n", moduleHandle);

    UWorld** world = reinterpret_cast<UWorld**>(UWorld::GWorld);
    Nullcheck(world);

    auto GameInstance = (*world)->OwningGameInstance;
    Nullcheck(GameInstance);

    auto LocalPlayer = GameInstance->LocalPlayers[0];
    Nullcheck(LocalPlayer);

    auto ViewportClient = LocalPlayer->ViewportClient;
    void** VTable = *reinterpret_cast<void***>(ViewportClient);

    DWORD OldProtection;

    auto process_event_addr = (*world)->GetProcessEventAddr();

    if (MH_Initialize() == MH_OK)
    {
        printf("[HOOK] Starting hook\n");
    }

    if (MH_CreateHook(VTable[POST_RENDER_INDEX], &PostRenderHook, reinterpret_cast<void**>(&original_post_render)) == MH_OK)
    {
        printf("[HOOK] Post Render hook Adresses | [0x%llx], [0x%llx]\n", VTable[POST_RENDER_INDEX], &VTable[POST_RENDER_INDEX]);
    }
    else
    {
        printf("[HOOK] Post Render hook Failed\n");
    }

    if (MH_CreateHook((LPVOID)process_event_addr, &ProcessEventHook, reinterpret_cast<void**>(&original_process_event)) == MH_OK)
    {
        printf("[HOOK] Process Event hook Adresses | [0x%llx], [0x%llx]\n", VTable[PROCESS_EVENTS_INDEX], &VTable[PROCESS_EVENTS_INDEX]);
    }
    else
    {
        printf("[HOOK] Process Event hook Failed\n");
    }

    oSetCursor = (fnSetCursor)hook(SetCursor, hkSetCursor);
    oSetCursorPos = (fnSetCursorPos)hook(SetCursorPos, hkSetCursorPos);

    if (MH_EnableHook(MH_ALL_HOOKS) == MH_OK)
    {
        printf("[HOOK] All hooks have been enabled\n");
    }
    else
    {
        printf("[HOOK] Failed to enable all hooks\n");
    }

    printf("Cheeze initialized.\n");

    return;
}