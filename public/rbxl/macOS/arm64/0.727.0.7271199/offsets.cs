/*
 * Dumped With: roblox-dumper 2.7
 * Created by: upio (upio on Discord) & Jonah (jonahw on Discord)
 * Github: https://github.com/notpoiu/roblox-dumper (forked)
 * Roblox Version: 0.727.0.7271199
 * Architecture: arm64
 * Time Taken: 56239 ms (56.239000 seconds)
 * Total Offsets: 277
 */

using System;

namespace RobloxOffsets
{
    public static class Metadata
    {
        public const string RobloxVersion = "0.727.0.7271199";
        public const string Architecture = "arm64";
    }

    public static class Atmosphere
    {
        public const ulong Color = 0xD0;
        public const ulong Decay = 0xDC;
        public const ulong Density = 0xE8;
        public const ulong Glare = 0xEC;
        public const ulong Haze = 0xF0;
        public const ulong Offset = 0xF4;
    }

    public static class Attribute
    {
        public const ulong Key = 0x0;
        public const ulong Size = 0x58;
        public const ulong Value = 0x18;
    }

    public static class BasePart
    {
        public const ulong CastShadow = 0xED;
        public const ulong Color3 = 0x184;
        public const ulong Locked = 0xEE;
        public const ulong Massless = 0xEF;
        public const ulong Primitive = 0x138;
        public const ulong Reflectance = 0xE4;
        public const ulong Shape = 0x1A1;
        public const ulong Transparency = 0xE8;
    }

    public static class BloomEffect
    {
        public const ulong Intensity = 0xCC;
        public const ulong Size = 0xD0;
        public const ulong Threshold = 0xD4;
    }

    public static class ByteCode
    {
        public const ulong Pointer = 0x10;
        public const ulong Size = 0x18;
    }

    public static class Camera
    {
        public const ulong CFrame = 0xF0;
        public const ulong FieldOfView = 0x158;
        public const ulong Position = 0x114;
        public const ulong Rotation = 0xF0;
        public const ulong ViewportInt16 = 0x2A4;
        public const ulong ViewportSize = 0x2E0;
    }

    public static class CharacterMesh
    {
        public const ulong BaseTextureId = 0xE0;
        public const ulong BodyPart = 0x148;
        public const ulong MeshId = 0x108;
        public const ulong OverlayTextureId = 0x130;
    }

    public static class DataModel
    {
        public const ulong CreatorId = 0x188;
        public const ulong GameId = 0x190;
        public const ulong JobId = 0x138;
        public const ulong PlaceId = 0x198;
        public const ulong Workspace = 0x168;
    }

    public static class FakeDataModel
    {
        public const ulong RealDataModel = 0x1D0;
    }

    public static class GuiBase2D
    {
        public const ulong AbsolutePosition = 0x10C;
        public const ulong AbsoluteRotation = 0x168;
        public const ulong AbsoluteSize = 0x118;
    }

    public static class GuiObject
    {
        public const ulong Active = 0x598;
        public const ulong AnchorPoint = 0x548;
        public const ulong AutomaticSize = 0x550;
        public const ulong BackgroundColor3 = 0x530;
        public const ulong BackgroundTransparency = 0x554;
        public const ulong BorderColor3 = 0x53C;
        public const ulong BorderMode = 0x558;
        public const ulong BorderSizePixel = 0x55C;
        public const ulong ClipsDescendants = 0x599;
        public const ulong GuiState = 0x568;
        public const ulong Interactable = 0x59B;
        public const ulong LayoutOrder = 0x570;
        public const ulong Position = 0x500;
        public const ulong Rotation = 0x168;
        public const ulong Selectable = 0x59C;
        public const ulong SelectionOrder = 0x58C;
        public const ulong Size = 0x520;
        public const ulong SizeConstraint = 0x590;
        public const ulong Visible = 0x59D;
        public const ulong ZIndex = 0x594;
    }

    public static class Humanoid
    {
        public const ulong AutoJumpEnabled = 0x1D0;
        public const ulong AutoRotate = 0x1D1;
        public const ulong AutomaticScalingEnabled = 0x1D2;
        public const ulong BreakJointsOnDeath = 0x1D3;
        public const ulong CameraOffset = 0x130;
        public const ulong DisplayDistanceType = 0x17C;
        public const ulong EvaluateStateMachine = 0x1D4;
        public const ulong Health = 0x184;
        public const ulong HealthDisplayDistance = 0x188;
        public const ulong HealthDisplayType = 0x18C;
        public const ulong HipHeight = 0x190;
        public const ulong JumpHeight = 0x19C;
        public const ulong JumpPower = 0x1A0;
        public const ulong MaxHealth = 0x1A4;
        public const ulong MaxSlopeAngle = 0x1A8;
        public const ulong NameDisplayDistance = 0x1AC;
        public const ulong NameOcclusion = 0x1B0;
        public const ulong RequiresNeck = 0x1D9;
        public const ulong RigType = 0x1BC;
        public const ulong SeatPart = 0x110;
        public const ulong Sit = 0x1DA;
        public const ulong TargetPoint = 0x154;
        public const ulong UseJumpPower = 0x1DC;
        public const ulong WalkSpeed = 0x1CC;
        public const ulong WalkSpeedCheck = 0x3B4;
        public const ulong WalkToPoint = 0x16C;
    }

    public static class InputObject
    {
        public const ulong MousePosition = 0xEC;
    }

    public static class Instance
    {
        public const ulong ChildrenEnd = 0x8;
        public const ulong ChildrenStart = 0x78;
        public const ulong ClassDescriptor = 0x18;
        public const ulong ClassName = 0x8;
        public const ulong ComponentMap = 0x38;
        public const ulong Name = 0xB0;
        public const ulong Parent = 0x70;
    }

    public static class Lighting
    {
        public const ulong Ambient = 0xE0;
        public const ulong Atmosphere = 0x1E8;
        public const ulong Brightness = 0x128;
        public const ulong ClockTime = 0x1B8;
        public const ulong ColorShift_Bottom = 0xEC;
        public const ulong ColorShift_Top = 0xF8;
        public const ulong EnvironmentDiffuseScale = 0x12C;
        public const ulong EnvironmentSpecularScale = 0x130;
        public const ulong ExposureCompensation = 0x134;
        public const ulong FogColor = 0x104;
        public const ulong FogEnd = 0x13C;
        public const ulong FogStart = 0x140;
        public const ulong OutdoorAmbient = 0x110;
        public const ulong ShadowSoftness = 0x148;
        public const ulong Sky = 0x1D8;
    }

    public static class LightingParameters
    {
        public const ulong GeographicLatitude = 0x194;
        public const ulong LightColor = 0x160;
        public const ulong LightDirection = 0x16C;
        public const ulong SkyAmbient = 0x154;
        public const ulong SkyAmbient2 = 0x198;
        public const ulong Source = 0x178;
        public const ulong TrueMoonPosition = 0x188;
        public const ulong TrueSunPosition = 0x17C;
    }

    public static class LocalScript
    {
        public const ulong Bytecode = 0x198;
        public const ulong Hash = 0x1A8;
    }

    public static class MaterialColors
    {
        public const ulong Asphalt = 0x30;
        public const ulong Basalt = 0x27;
        public const ulong Brick = 0xF;
        public const ulong Cobblestone = 0x33;
        public const ulong Concrete = 0xC;
        public const ulong CrackedLava = 0x2D;
        public const ulong Glacier = 0x1B;
        public const ulong Grass = 0x6;
        public const ulong Ground = 0x2A;
        public const ulong Ice = 0x36;
        public const ulong LeafyGrass = 0x39;
        public const ulong Limestone = 0x3F;
        public const ulong Mud = 0x24;
        public const ulong Pavement = 0x42;
        public const ulong Rock = 0x18;
        public const ulong Salt = 0x3C;
        public const ulong Sand = 0x12;
        public const ulong Sandstone = 0x21;
        public const ulong Slate = 0x9;
        public const ulong Snow = 0x1E;
        public const ulong WoodPlanks = 0x15;
    }

    public static class MeshPart
    {
        public const ulong MeshId = 0x2E0;
        public const ulong TextureId = 0x308;
    }

    public static class Model
    {
        public const ulong PrimaryPart = 0x238;
    }

    public static class ModuleScript
    {
        public const ulong Bytecode = 0x140;
        public const ulong Hash = 0x150;
        public const ulong IsRobloxScript = 0x168;
    }

    public static class MouseService
    {
        public const ulong InputObject = 0x118;
    }

    public static class Player
    {
        public const ulong AccountAge = 0x30C;
        public const ulong DisplayName = 0x138;
        public const ulong HealthDisplayDistance = 0x340;
        public const ulong LocaleId = 0x648;
        public const ulong ModelInstance = 0x390;
        public const ulong NameDisplayDistance = 0x350;
        public const ulong Team = 0x288;
        public const ulong TeamColor = 0x35C;
        public const ulong UserId = 0x2B0;
    }

    public static class Players
    {
        public const ulong LocalPlayer = 0x138;
    }

    public static class Primitive
    {
        public const ulong AssemblyAngularVelocity = 0x104;
        public const ulong AssemblyLinearVelocity = 0xF8;
        public const ulong CFrame = 0xC8;
        public const ulong Material = 0x23E;
        public const ulong Orientation = 0xC8;
        public const ulong Position = 0xEC;
        public const ulong PrimitiveFlags = 0x1B6;
        public const ulong Rotation = 0xC8;
        public const ulong Size = 0x1B8;
    }

    public static class PrimitiveFlags
    {
        public const ulong Anchored = 0x2;
        public const ulong CanCollide = 0x8;
        public const ulong CanQuery = 0x20;
        public const ulong CanTouch = 0x10;
    }

    public static class ProximityPrompt
    {
        public const ulong ActionText = 0xC8;
        public const ulong Enabled = 0x13E;
        public const ulong HoldDuration = 0x128;
        public const ulong KeyboardKeyCode = 0x12C;
        public const ulong MaxActivationDistance = 0x130;
        public const ulong ObjectText = 0xE0;
        public const ulong RequiresLineOfSight = 0x13F;
    }

    public static class RenderView
    {
        public const ulong LightingValid = 0x220;
        public const ulong SkyboxValid = 0x28D;
    }

    public static class ScriptContext
    {
        public const ulong RequireBypass = 0x7D9;
    }

    public static class Seat
    {
        public const ulong Occupant = 0x208;
    }

    public static class Sky
    {
        public const ulong MoonAngularSize = 0x21C;
        public const ulong MoonTextureId = 0xE0;
        public const ulong SkyboxBk = 0x108;
        public const ulong SkyboxDn = 0x130;
        public const ulong SkyboxFt = 0x158;
        public const ulong SkyboxLf = 0x180;
        public const ulong SkyboxOrientation = 0x210;
        public const ulong SkyboxRt = 0x1A8;
        public const ulong SkyboxUp = 0x1D0;
        public const ulong StarCount = 0x220;
        public const ulong SunAngularSize = 0x224;
        public const ulong SunTextureId = 0x1F8;
    }

    public static class SpecialMesh
    {
        public const ulong MeshId = 0x110;
        public const ulong Offset = 0xD0;
        public const ulong Scale = 0xDC;
        public const ulong TextureId = 0x138;
    }

    public static class TaskScheduler
    {
        public const ulong JobEnd = 0xD8;
        public const ulong JobName = 0x18;
        public const ulong JobStart = 0xD0;
        public const ulong MaxFps = 0xB8;
        public const ulong Pointer = 0x64B2028;
    }

    public static class Team
    {
        public const ulong TeamColor = 0xD0;
    }

    public static class Terrain
    {
        public const ulong GrassLength = 0x1E0;
        public const ulong MaterialColors = 0x490;
        public const ulong WaterColor = 0x1D0;
        public const ulong WaterReflectance = 0x1E8;
        public const ulong WaterTransparency = 0x1EC;
        public const ulong WaterWaveSize = 0x1F0;
        public const ulong WaterWaveSpeed = 0x1F4;
    }

    public static class TextButton
    {
        public const ulong AutoButtonColor = 0x9B4;
        public const ulong ContentText = 0xDB8;
        public const ulong Font = 0x1088;
        public const ulong LineHeight = 0xE98;
        public const ulong LocalizedText = 0xDB8;
        public const ulong MaxVisibleGraphemes = 0x1094;
        public const ulong Modal = 0x9B5;
        public const ulong RichText = 0xF96;
        public const ulong Selected = 0x9B6;
        public const ulong Text = 0xDB8;
        public const ulong TextColor3 = 0x1070;
        public const ulong TextDirection = 0xF38;
        public const ulong TextScaled = 0xF8E;
        public const ulong TextSize = 0x109C;
        public const ulong TextStrokeColor3 = 0x107C;
        public const ulong TextStrokeTransparency = 0x10A0;
        public const ulong TextTransparency = 0x10A4;
        public const ulong TextTruncate = 0x10A8;
        public const ulong TextWrapped = 0xF90;
        public const ulong TextXAlignment = 0x10AC;
        public const ulong TextYAlignment = 0xEE0;
    }

    public static class TextLabel
    {
        public const ulong ContentText = 0xB30;
        public const ulong Font = 0xE00;
        public const ulong LineHeight = 0xC10;
        public const ulong LocalizedText = 0xB30;
        public const ulong MaxVisibleGraphemes = 0xE0C;
        public const ulong RichText = 0xD0E;
        public const ulong Text = 0xB30;
        public const ulong TextColor3 = 0xDE8;
        public const ulong TextDirection = 0xCB0;
        public const ulong TextScaled = 0xD06;
        public const ulong TextSize = 0xE14;
        public const ulong TextStrokeColor3 = 0xDF4;
        public const ulong TextStrokeTransparency = 0xE18;
        public const ulong TextTransparency = 0xE1C;
        public const ulong TextTruncate = 0xE20;
        public const ulong TextWrapped = 0xD08;
        public const ulong TextXAlignment = 0xE24;
        public const ulong TextYAlignment = 0xC58;
    }

    public static class Tool
    {
        public const ulong CanBeDropped = 0x468;
        public const ulong Enabled = 0x469;
        public const ulong Grip = 0x438;
        public const ulong GripForward = 0x450;
        public const ulong GripPos = 0x45C;
        public const ulong GripRight = 0x438;
        public const ulong GripUp = 0x444;
        public const ulong ManualActivationOnly = 0x46A;
        public const ulong RequiresHandle = 0x46B;
        public const ulong Tooltip = 0x420;
    }

    public static class Value
    {
        public const ulong Value = 0xD0;
    }

    public static class VehicleSeat
    {
        public const ulong MaxSpeed = 0x220;
        public const ulong Occupant = 0x200;
        public const ulong SteerFloat = 0x228;
        public const ulong ThrottleFloat = 0x230;
        public const ulong Torque = 0x234;
        public const ulong TurnSpeed = 0x238;
    }

    public static class VisualEngine
    {
        public const ulong FakeDataModel = 0xA80;
        public const ulong Pointer = 0x61BEE08;
        public const ulong RenderView = 0xBA8;
        public const ulong ViewMatrix = 0x140;
    }

    public static class Workspace
    {
        public const ulong CurrentCamera = 0x470;
        public const ulong ReadOnlyGravity = 0x940;
        public const ulong World = 0x3D0;
    }

    public static class World
    {
        public const ulong Gravity = 0x208;
        public const ulong Primitives = 0x260;
        public const ulong WorldSteps = 0x618;
    }

} // namespace RobloxOffsets
