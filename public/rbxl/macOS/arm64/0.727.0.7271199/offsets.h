/*
 * Dumped With: roblox-dumper 2.7
 * Created by: upio (upio on Discord) & Jonah (jonahw on Discord)
 * Github: https://github.com/notpoiu/roblox-dumper (forked)
 * Roblox Version: 0.727.0.7271199
 * Architecture: arm64
 * Time Taken: 56239 ms (56.239000 seconds)
 * Total Offsets: 277
 */

#pragma once
#include <cstdint>

// clang-format off
namespace offsets {
    inline constexpr const char* roblox_version = "0.727.0.7271199";
    inline constexpr const char* architecture = "arm64";

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xD0;
        inline constexpr uintptr_t Decay = 0xDC;
        inline constexpr uintptr_t Density = 0xE8;
        inline constexpr uintptr_t Glare = 0xEC;
        inline constexpr uintptr_t Haze = 0xF0;
        inline constexpr uintptr_t Offset = 0xF4;
    }

    namespace Attribute {
        inline constexpr uintptr_t Key = 0x0;
        inline constexpr uintptr_t Size = 0x58;
        inline constexpr uintptr_t Value = 0x18;
    }

    namespace BasePart {
        inline constexpr uintptr_t CastShadow = 0xED;
        inline constexpr uintptr_t Color3 = 0x184;
        inline constexpr uintptr_t Locked = 0xEE;
        inline constexpr uintptr_t Massless = 0xEF;
        inline constexpr uintptr_t Primitive = 0x138;
        inline constexpr uintptr_t Reflectance = 0xE4;
        inline constexpr uintptr_t Shape = 0x1A1;
        inline constexpr uintptr_t Transparency = 0xE8;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Intensity = 0xCC;
        inline constexpr uintptr_t Size = 0xD0;
        inline constexpr uintptr_t Threshold = 0xD4;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x18;
    }

    namespace Camera {
        inline constexpr uintptr_t CFrame = 0xF0;
        inline constexpr uintptr_t FieldOfView = 0x158;
        inline constexpr uintptr_t Position = 0x114;
        inline constexpr uintptr_t Rotation = 0xF0;
        inline constexpr uintptr_t ViewportInt16 = 0x2A4;
        inline constexpr uintptr_t ViewportSize = 0x2E0;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureId = 0xE0;
        inline constexpr uintptr_t BodyPart = 0x148;
        inline constexpr uintptr_t MeshId = 0x108;
        inline constexpr uintptr_t OverlayTextureId = 0x130;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x188;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t Workspace = 0x168;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t RealDataModel = 0x1D0;
    }

    namespace GuiBase2D {
        inline constexpr uintptr_t AbsolutePosition = 0x10C;
        inline constexpr uintptr_t AbsoluteRotation = 0x168;
        inline constexpr uintptr_t AbsoluteSize = 0x118;
    }

    namespace GuiObject {
        inline constexpr uintptr_t Active = 0x598;
        inline constexpr uintptr_t AnchorPoint = 0x548;
        inline constexpr uintptr_t AutomaticSize = 0x550;
        inline constexpr uintptr_t BackgroundColor3 = 0x530;
        inline constexpr uintptr_t BackgroundTransparency = 0x554;
        inline constexpr uintptr_t BorderColor3 = 0x53C;
        inline constexpr uintptr_t BorderMode = 0x558;
        inline constexpr uintptr_t BorderSizePixel = 0x55C;
        inline constexpr uintptr_t ClipsDescendants = 0x599;
        inline constexpr uintptr_t GuiState = 0x568;
        inline constexpr uintptr_t Interactable = 0x59B;
        inline constexpr uintptr_t LayoutOrder = 0x570;
        inline constexpr uintptr_t Position = 0x500;
        inline constexpr uintptr_t Rotation = 0x168;
        inline constexpr uintptr_t Selectable = 0x59C;
        inline constexpr uintptr_t SelectionOrder = 0x58C;
        inline constexpr uintptr_t Size = 0x520;
        inline constexpr uintptr_t SizeConstraint = 0x590;
        inline constexpr uintptr_t Visible = 0x59D;
        inline constexpr uintptr_t ZIndex = 0x594;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1D0;
        inline constexpr uintptr_t AutoRotate = 0x1D1;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1D2;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1D3;
        inline constexpr uintptr_t CameraOffset = 0x130;
        inline constexpr uintptr_t DisplayDistanceType = 0x17C;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1D4;
        inline constexpr uintptr_t Health = 0x184;
        inline constexpr uintptr_t HealthDisplayDistance = 0x188;
        inline constexpr uintptr_t HealthDisplayType = 0x18C;
        inline constexpr uintptr_t HipHeight = 0x190;
        inline constexpr uintptr_t JumpHeight = 0x19C;
        inline constexpr uintptr_t JumpPower = 0x1A0;
        inline constexpr uintptr_t MaxHealth = 0x1A4;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1A8;
        inline constexpr uintptr_t NameDisplayDistance = 0x1AC;
        inline constexpr uintptr_t NameOcclusion = 0x1B0;
        inline constexpr uintptr_t RequiresNeck = 0x1D9;
        inline constexpr uintptr_t RigType = 0x1BC;
        inline constexpr uintptr_t SeatPart = 0x110;
        inline constexpr uintptr_t Sit = 0x1DA;
        inline constexpr uintptr_t TargetPoint = 0x154;
        inline constexpr uintptr_t UseJumpPower = 0x1DC;
        inline constexpr uintptr_t WalkSpeed = 0x1CC;
        inline constexpr uintptr_t WalkSpeedCheck = 0x3B4;
        inline constexpr uintptr_t WalkToPoint = 0x16C;
    }

    namespace InputObject {
        inline constexpr uintptr_t MousePosition = 0xEC;
    }

    namespace Instance {
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x78;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t ComponentMap = 0x38;
        inline constexpr uintptr_t Name = 0xB0;
        inline constexpr uintptr_t Parent = 0x70;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xE0;
        inline constexpr uintptr_t Atmosphere = 0x1E8;
        inline constexpr uintptr_t Brightness = 0x128;
        inline constexpr uintptr_t ClockTime = 0x1B8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xEC;
        inline constexpr uintptr_t ColorShift_Top = 0xF8;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x12C;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x130;
        inline constexpr uintptr_t ExposureCompensation = 0x134;
        inline constexpr uintptr_t FogColor = 0x104;
        inline constexpr uintptr_t FogEnd = 0x13C;
        inline constexpr uintptr_t FogStart = 0x140;
        inline constexpr uintptr_t OutdoorAmbient = 0x110;
        inline constexpr uintptr_t ShadowSoftness = 0x148;
        inline constexpr uintptr_t Sky = 0x1D8;
    }

    namespace LightingParameters {
        inline constexpr uintptr_t GeographicLatitude = 0x194;
        inline constexpr uintptr_t LightColor = 0x160;
        inline constexpr uintptr_t LightDirection = 0x16C;
        inline constexpr uintptr_t SkyAmbient = 0x154;
        inline constexpr uintptr_t SkyAmbient2 = 0x198;
        inline constexpr uintptr_t Source = 0x178;
        inline constexpr uintptr_t TrueMoonPosition = 0x188;
        inline constexpr uintptr_t TrueSunPosition = 0x17C;
    }

    namespace LocalScript {
        inline constexpr uintptr_t Bytecode = 0x198;
        inline constexpr uintptr_t Hash = 0x1A8;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xF;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xC;
        inline constexpr uintptr_t CrackedLava = 0x2D;
        inline constexpr uintptr_t Glacier = 0x1B;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2A;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3F;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3C;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1E;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MeshPart {
        inline constexpr uintptr_t MeshId = 0x2E0;
        inline constexpr uintptr_t TextureId = 0x308;
    }

    namespace Model {
        inline constexpr uintptr_t PrimaryPart = 0x238;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t Bytecode = 0x140;
        inline constexpr uintptr_t Hash = 0x150;
        inline constexpr uintptr_t IsRobloxScript = 0x168;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0x118;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x30C;
        inline constexpr uintptr_t DisplayName = 0x138;
        inline constexpr uintptr_t HealthDisplayDistance = 0x340;
        inline constexpr uintptr_t LocaleId = 0x648;
        inline constexpr uintptr_t ModelInstance = 0x390;
        inline constexpr uintptr_t NameDisplayDistance = 0x350;
        inline constexpr uintptr_t Team = 0x288;
        inline constexpr uintptr_t TeamColor = 0x35C;
        inline constexpr uintptr_t UserId = 0x2B0;
    }

    namespace Players {
        inline constexpr uintptr_t LocalPlayer = 0x138;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0x104;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xF8;
        inline constexpr uintptr_t CFrame = 0xC8;
        inline constexpr uintptr_t Material = 0x23E;
        inline constexpr uintptr_t Orientation = 0xC8;
        inline constexpr uintptr_t Position = 0xEC;
        inline constexpr uintptr_t PrimitiveFlags = 0x1B6;
        inline constexpr uintptr_t Rotation = 0xC8;
        inline constexpr uintptr_t Size = 0x1B8;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
        inline constexpr uintptr_t CanQuery = 0x20;
        inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xC8;
        inline constexpr uintptr_t Enabled = 0x13E;
        inline constexpr uintptr_t HoldDuration = 0x128;
        inline constexpr uintptr_t KeyboardKeyCode = 0x12C;
        inline constexpr uintptr_t MaxActivationDistance = 0x130;
        inline constexpr uintptr_t ObjectText = 0xE0;
        inline constexpr uintptr_t RequiresLineOfSight = 0x13F;
    }

    namespace RenderView {
        inline constexpr uintptr_t LightingValid = 0x220;
        inline constexpr uintptr_t SkyboxValid = 0x28D;
    }

    namespace ScriptContext {
        inline constexpr uintptr_t RequireBypass = 0x7D9;
    }

    namespace Seat {
        inline constexpr uintptr_t Occupant = 0x208;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x21C;
        inline constexpr uintptr_t MoonTextureId = 0xE0;
        inline constexpr uintptr_t SkyboxBk = 0x108;
        inline constexpr uintptr_t SkyboxDn = 0x130;
        inline constexpr uintptr_t SkyboxFt = 0x158;
        inline constexpr uintptr_t SkyboxLf = 0x180;
        inline constexpr uintptr_t SkyboxOrientation = 0x210;
        inline constexpr uintptr_t SkyboxRt = 0x1A8;
        inline constexpr uintptr_t SkyboxUp = 0x1D0;
        inline constexpr uintptr_t StarCount = 0x220;
        inline constexpr uintptr_t SunAngularSize = 0x224;
        inline constexpr uintptr_t SunTextureId = 0x1F8;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0x110;
        inline constexpr uintptr_t Offset = 0xD0;
        inline constexpr uintptr_t Scale = 0xDC;
        inline constexpr uintptr_t TextureId = 0x138;
    }

    namespace TaskScheduler {
        inline constexpr uintptr_t JobEnd = 0xD8;
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobStart = 0xD0;
        inline constexpr uintptr_t MaxFps = 0xB8;
        inline constexpr uintptr_t Pointer = 0x64B2028;
    }

    namespace Team {
        inline constexpr uintptr_t TeamColor = 0xD0;
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1E0;
        inline constexpr uintptr_t MaterialColors = 0x490;
        inline constexpr uintptr_t WaterColor = 0x1D0;
        inline constexpr uintptr_t WaterReflectance = 0x1E8;
        inline constexpr uintptr_t WaterTransparency = 0x1EC;
        inline constexpr uintptr_t WaterWaveSize = 0x1F0;
        inline constexpr uintptr_t WaterWaveSpeed = 0x1F4;
    }

    namespace TextButton {
        inline constexpr uintptr_t AutoButtonColor = 0x9B4;
        inline constexpr uintptr_t ContentText = 0xDB8;
        inline constexpr uintptr_t Font = 0x1088;
        inline constexpr uintptr_t LineHeight = 0xE98;
        inline constexpr uintptr_t LocalizedText = 0xDB8;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0x1094;
        inline constexpr uintptr_t Modal = 0x9B5;
        inline constexpr uintptr_t RichText = 0xF96;
        inline constexpr uintptr_t Selected = 0x9B6;
        inline constexpr uintptr_t Text = 0xDB8;
        inline constexpr uintptr_t TextColor3 = 0x1070;
        inline constexpr uintptr_t TextDirection = 0xF38;
        inline constexpr uintptr_t TextScaled = 0xF8E;
        inline constexpr uintptr_t TextSize = 0x109C;
        inline constexpr uintptr_t TextStrokeColor3 = 0x107C;
        inline constexpr uintptr_t TextStrokeTransparency = 0x10A0;
        inline constexpr uintptr_t TextTransparency = 0x10A4;
        inline constexpr uintptr_t TextTruncate = 0x10A8;
        inline constexpr uintptr_t TextWrapped = 0xF90;
        inline constexpr uintptr_t TextXAlignment = 0x10AC;
        inline constexpr uintptr_t TextYAlignment = 0xEE0;
    }

    namespace TextLabel {
        inline constexpr uintptr_t ContentText = 0xB30;
        inline constexpr uintptr_t Font = 0xE00;
        inline constexpr uintptr_t LineHeight = 0xC10;
        inline constexpr uintptr_t LocalizedText = 0xB30;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0xE0C;
        inline constexpr uintptr_t RichText = 0xD0E;
        inline constexpr uintptr_t Text = 0xB30;
        inline constexpr uintptr_t TextColor3 = 0xDE8;
        inline constexpr uintptr_t TextDirection = 0xCB0;
        inline constexpr uintptr_t TextScaled = 0xD06;
        inline constexpr uintptr_t TextSize = 0xE14;
        inline constexpr uintptr_t TextStrokeColor3 = 0xDF4;
        inline constexpr uintptr_t TextStrokeTransparency = 0xE18;
        inline constexpr uintptr_t TextTransparency = 0xE1C;
        inline constexpr uintptr_t TextTruncate = 0xE20;
        inline constexpr uintptr_t TextWrapped = 0xD08;
        inline constexpr uintptr_t TextXAlignment = 0xE24;
        inline constexpr uintptr_t TextYAlignment = 0xC58;
    }

    namespace Tool {
        inline constexpr uintptr_t CanBeDropped = 0x468;
        inline constexpr uintptr_t Enabled = 0x469;
        inline constexpr uintptr_t Grip = 0x438;
        inline constexpr uintptr_t GripForward = 0x450;
        inline constexpr uintptr_t GripPos = 0x45C;
        inline constexpr uintptr_t GripRight = 0x438;
        inline constexpr uintptr_t GripUp = 0x444;
        inline constexpr uintptr_t ManualActivationOnly = 0x46A;
        inline constexpr uintptr_t RequiresHandle = 0x46B;
        inline constexpr uintptr_t Tooltip = 0x420;
    }

    namespace Value {
        inline constexpr uintptr_t Value = 0xD0;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t MaxSpeed = 0x220;
        inline constexpr uintptr_t Occupant = 0x200;
        inline constexpr uintptr_t SteerFloat = 0x228;
        inline constexpr uintptr_t ThrottleFloat = 0x230;
        inline constexpr uintptr_t Torque = 0x234;
        inline constexpr uintptr_t TurnSpeed = 0x238;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t FakeDataModel = 0xA80;
        inline constexpr uintptr_t Pointer = 0x61BEE08;
        inline constexpr uintptr_t RenderView = 0xBA8;
        inline constexpr uintptr_t ViewMatrix = 0x140;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x470;
        inline constexpr uintptr_t ReadOnlyGravity = 0x940;
        inline constexpr uintptr_t World = 0x3D0;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x208;
        inline constexpr uintptr_t Primitives = 0x260;
        inline constexpr uintptr_t WorldSteps = 0x618;
    }

} // namespace offsets
