# Dumped With: roblox-dumper 2.7
# Created by: upio (upio on Discord) & Jonah (jonahw on Discord)
# Github: https://github.com/notpoiu/roblox-dumper (forked)
# Roblox Version: 0.725.0.7251138
# Architecture: x64
# Time Taken: 6435 ms (6.435000 seconds)
# Total Offsets: 276

class Offsets:
    ROBLOX_VERSION = "0.725.0.7251138"
    ARCHITECTURE = "x64"

    class Atmosphere:
        Color = 208
        Decay = 220
        Density = 232
        Glare = 236
        Haze = 240
        Offset = 244

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
        CreatorId = 384
        GameId = 392
        GameLoaded = 2616
        JobId = 328
        PlaceId = 400
        Workspace = 360

    class FakeDataModel:
        RealDataModel = 472

    class GuiBase2D:
        AbsolutePosition = 268
        AbsoluteRotation = 384
        AbsoluteSize = 280

    class GuiObject:
        Active = 1448
        AnchorPoint = 1368
        AutomaticSize = 1376
        BackgroundColor3 = 1344
        BackgroundTransparency = 1380
        BorderColor3 = 1356
        BorderMode = 1384
        BorderSizePixel = 1388
        ClipsDescendants = 1449
        GuiState = 1400
        Interactable = 1451
        LayoutOrder = 1408
        Position = 1296
        Rotation = 384
        Selectable = 1452
        SelectionOrder = 1436
        Size = 1328
        SizeConstraint = 1440
        Visible = 1453
        ZIndex = 1444

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
        AttributeContainer = 72
        AttributeList = 24
        AttributeToNext = 88
        AttributeToValue = 24
        ChildrenEnd = 8
        ChildrenStart = 120
        ClassDescriptor = 24
        ClassName = 8
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
        Hash = 248

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
        Hash = 248

    class MouseService:
        InputObject = 280

    class Player:
        AccountAge = 772
        DisplayName = 312
        HealthDisplayDistance = 816
        LocaleId = 1616
        ModelInstance = 896
        NameDisplayDistance = 832
        Team = 648
        TeamColor = 844
        UserId = 688

    class Players:
        LocalPlayer = 296

    class Primitive:
        AssemblyAngularVelocity = 260
        AssemblyLinearVelocity = 248
        CFrame = 200
        Material = 566
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
        LightingValid = 368
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
        JobName = 24
        JobStart = 208
        MaxFps = 184
        Pointer = 108321008

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
        AutoButtonColor = 2500
        ContentText = 3528
        Font = 4248
        LineHeight = 3752
        LocalizedText = 3528
        MaxVisibleGraphemes = 4260
        Modal = 2501
        RichText = 4006
        Selected = 2502
        Text = 3528
        TextColor3 = 4224
        TextDirection = 3912
        TextScaled = 3998
        TextSize = 4268
        TextStrokeColor3 = 4236
        TextStrokeTransparency = 4272
        TextTransparency = 4276
        TextTruncate = 4280
        TextWrapped = 4000
        TextXAlignment = 4284
        TextYAlignment = 3824

    class TextLabel:
        ContentText = 2880
        Font = 3600
        LineHeight = 3104
        LocalizedText = 2880
        MaxVisibleGraphemes = 3612
        RichText = 3358
        Text = 2880
        TextColor3 = 3576
        TextDirection = 3264
        TextScaled = 3350
        TextSize = 3620
        TextStrokeColor3 = 3588
        TextStrokeTransparency = 3624
        TextTransparency = 3628
        TextTruncate = 3632
        TextWrapped = 3352
        TextXAlignment = 3636
        TextYAlignment = 3176

    class Tool:
        CanBeDropped = 1112
        Enabled = 1113
        Grip = 1064
        GripForward = 1088
        GripPos = 1100
        GripRight = 1064
        GripUp = 1076
        ManualActivationOnly = 1114
        RequiresHandle = 1115
        Tooltip = 1040

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
        Pointer = 105255624
        RenderView = 2976
        ViewMatrix = 320

    class Workspace:
        CurrentCamera = 1120
        ReadOnlyGravity = 2400
        World = 960

    class World:
        Gravity = 520
        Primitives = 600
        WorldSteps = 1552

