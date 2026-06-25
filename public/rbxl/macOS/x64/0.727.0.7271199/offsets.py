# Dumped With: roblox-dumper 2.7
# Created by: upio (upio on Discord) & Jonah (jonahw on Discord)
# Github: https://github.com/notpoiu/roblox-dumper (forked)
# Roblox Version: 0.727.0.7271199
# Architecture: x64
# Time Taken: 7681 ms (7.681000 seconds)
# Total Offsets: 276

class Offsets:
    ROBLOX_VERSION = "0.727.0.7271199"
    ARCHITECTURE = "x64"

    class Atmosphere:
        Color = 208
        Decay = 220
        Density = 232
        Glare = 236
        Haze = 240
        Offset = 244

    class Attribute:
        Key = 0
        Size = 88
        Value = 24

    class BasePart:
        CastShadow = 237
        Color3 = 388
        Locked = 238
        Massless = 239
        Primitive = 312
        Reflectance = 228
        Shape = 417
        Transparency = 232

    class BloomEffect:
        Intensity = 204
        Size = 208
        Threshold = 212

    class ByteCode:
        Pointer = 16
        Size = 24

    class Camera:
        CFrame = 240
        FieldOfView = 344
        Position = 276
        Rotation = 240
        ViewportInt16 = 676
        ViewportSize = 736

    class CharacterMesh:
        BaseTextureId = 224
        BodyPart = 328
        MeshId = 264
        OverlayTextureId = 304

    class DataModel:
        CreatorId = 392
        GameId = 400
        GameLoaded = 2624
        JobId = 328
        PlaceId = 408
        Workspace = 360

    class FakeDataModel:
        RealDataModel = 464

    class GuiBase2D:
        AbsolutePosition = 268
        AbsoluteRotation = 384
        AbsoluteSize = 280

    class GuiObject:
        Active = 1456
        AnchorPoint = 1376
        AutomaticSize = 1384
        BackgroundColor3 = 1352
        BackgroundTransparency = 1388
        BorderColor3 = 1364
        BorderMode = 1392
        BorderSizePixel = 1396
        ClipsDescendants = 1457
        GuiState = 1408
        Interactable = 1459
        LayoutOrder = 1416
        Position = 1304
        Rotation = 384
        Selectable = 1460
        SelectionOrder = 1444
        Size = 1336
        SizeConstraint = 1448
        Visible = 1461
        ZIndex = 1452

    class Humanoid:
        AutoJumpEnabled = 464
        AutoRotate = 465
        AutomaticScalingEnabled = 466
        BreakJointsOnDeath = 467
        CameraOffset = 304
        DisplayDistanceType = 380
        EvaluateStateMachine = 468
        Health = 388
        HealthDisplayDistance = 392
        HealthDisplayType = 396
        HipHeight = 400
        JumpHeight = 412
        JumpPower = 416
        MaxHealth = 420
        MaxSlopeAngle = 424
        NameDisplayDistance = 428
        NameOcclusion = 432
        RequiresNeck = 473
        RigType = 444
        SeatPart = 272
        Sit = 474
        TargetPoint = 340
        UseJumpPower = 476
        WalkSpeed = 460
        WalkSpeedCheck = 948
        WalkToPoint = 364

    class InputObject:
        MousePosition = 236

    class Instance:
        ChildrenEnd = 8
        ChildrenStart = 120
        ClassDescriptor = 24
        ClassName = 8
        ComponentMap = 56
        Name = 176
        Parent = 112

    class Lighting:
        Ambient = 224
        Atmosphere = 488
        Brightness = 296
        ClockTime = 440
        ColorShift_Bottom = 236
        ColorShift_Top = 248
        EnvironmentDiffuseScale = 300
        EnvironmentSpecularScale = 304
        ExposureCompensation = 308
        FogColor = 260
        FogEnd = 316
        FogStart = 320
        OutdoorAmbient = 272
        ShadowSoftness = 328
        Sky = 472

    class LightingParameters:
        GeographicLatitude = 404
        LightColor = 352
        LightDirection = 364
        SkyAmbient = 340
        SkyAmbient2 = 408
        Source = 376
        TrueMoonPosition = 392
        TrueSunPosition = 380

    class LocalScript:
        Bytecode = 408
        Hash = 16

    class MaterialColors:
        Asphalt = 48
        Basalt = 39
        Brick = 15
        Cobblestone = 51
        Concrete = 12
        CrackedLava = 45
        Glacier = 27
        Grass = 6
        Ground = 42
        Ice = 54
        LeafyGrass = 57
        Limestone = 63
        Mud = 36
        Pavement = 66
        Rock = 24
        Salt = 60
        Sand = 18
        Sandstone = 33
        Slate = 9
        Snow = 30
        WoodPlanks = 21

    class MeshPart:
        MeshId = 736
        TextureId = 776

    class Model:
        PrimaryPart = 568

    class ModuleScript:
        Bytecode = 320
        Hash = 16

    class MouseService:
        InputObject = 280

    class Player:
        AccountAge = 780
        DisplayName = 312
        HealthDisplayDistance = 832
        LocaleId = 1632
        ModelInstance = 912
        NameDisplayDistance = 848
        Team = 648
        TeamColor = 860
        UserId = 688

    class Players:
        LocalPlayer = 312

    class Primitive:
        AssemblyAngularVelocity = 260
        AssemblyLinearVelocity = 248
        CFrame = 200
        Material = 574
        Orientation = 200
        Position = 236
        PrimitiveFlags = 438
        Rotation = 200
        Size = 440

    class PrimitiveFlags:
        Anchored = 2
        CanCollide = 8
        CanQuery = 32
        CanTouch = 16

    class ProximityPrompt:
        ActionText = 200
        Enabled = 318
        HoldDuration = 296
        KeyboardKeyCode = 300
        MaxActivationDistance = 304
        ObjectText = 224
        RequiresLineOfSight = 319

    class RenderView:
        LightingValid = 544
        SkyboxValid = 653

    class Seat:
        Occupant = 520

    class Sky:
        MoonAngularSize = 540
        MoonTextureId = 224
        SkyboxBk = 264
        SkyboxDn = 304
        SkyboxFt = 344
        SkyboxLf = 384
        SkyboxOrientation = 528
        SkyboxRt = 424
        SkyboxUp = 464
        StarCount = 544
        SunAngularSize = 548
        SunTextureId = 504

    class SpecialMesh:
        MeshId = 272
        Offset = 208
        Scale = 220
        TextureId = 312

    class TaskScheduler:
        JobEnd = 216
        JobName = 1304
        JobStart = 208
        MaxFps = 184
        Pointer = 109380848

    class Team:
        TeamColor = 208

    class Terrain:
        GrassLength = 480
        MaterialColors = 1168
        WaterColor = 464
        WaterReflectance = 488
        WaterTransparency = 492
        WaterWaveSize = 496
        WaterWaveSpeed = 500

    class TextButton:
        AutoButtonColor = 2508
        ContentText = 3536
        Font = 4256
        LineHeight = 3760
        LocalizedText = 3536
        MaxVisibleGraphemes = 4268
        Modal = 2509
        RichText = 4014
        Selected = 2510
        Text = 3536
        TextColor3 = 4232
        TextDirection = 3920
        TextScaled = 4006
        TextSize = 4276
        TextStrokeColor3 = 4244
        TextStrokeTransparency = 4280
        TextTransparency = 4284
        TextTruncate = 4288
        TextWrapped = 4008
        TextXAlignment = 4292
        TextYAlignment = 3832

    class TextLabel:
        ContentText = 2888
        Font = 3608
        LineHeight = 3112
        LocalizedText = 2888
        MaxVisibleGraphemes = 3620
        RichText = 3366
        Text = 2888
        TextColor3 = 3584
        TextDirection = 3272
        TextScaled = 3358
        TextSize = 3628
        TextStrokeColor3 = 3596
        TextStrokeTransparency = 3632
        TextTransparency = 3636
        TextTruncate = 3640
        TextWrapped = 3360
        TextXAlignment = 3644
        TextYAlignment = 3184

    class Tool:
        CanBeDropped = 1128
        Enabled = 1129
        Grip = 1080
        GripForward = 1104
        GripPos = 1116
        GripRight = 1080
        GripUp = 1092
        ManualActivationOnly = 1130
        RequiresHandle = 1131
        Tooltip = 1056

    class Value:
        Value = 208

    class VehicleSeat:
        MaxSpeed = 544
        Occupant = 512
        SteerFloat = 552
        ThrottleFloat = 560
        Torque = 564
        TurnSpeed = 568

    class VisualEngine:
        FakeDataModel = 2688
        Pointer = 106286320
        RenderView = 2984
        ViewMatrix = 320

    class Workspace:
        CurrentCamera = 1136
        ReadOnlyGravity = 2368
        World = 976

    class World:
        Gravity = 520
        Primitives = 608
        WorldSteps = 1560

