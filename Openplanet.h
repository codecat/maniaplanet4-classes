// Maniaplanet engine classes documentation
// Generated with Openplanet 1.13.2 (v4, Public)
// https://openplanet.nl/

using namespace MwFoundations;
using namespace Game;
using namespace Graphic;
using namespace Function;
using namespace Hms;
using namespace Control;
using namespace Motion;
using namespace Plug;
using namespace Scene;
using namespace System;
using namespace Vision;
using namespace Audio;
using namespace Script;
using namespace Net;
using namespace Input;
using namespace Xml;
using namespace TrackMania;
using namespace ShootMania;
using namespace GameData;
using namespace Meta;

namespace MwFoundations {

struct CMwNod {
  CMwNod();

  string IdName;
  const MwId Id; // Maniascript
};

struct CMwEngine : public CMwNod {
  CMwEngine();

};

struct CMwCmd : public CMwNod {
};

struct CMwParam : public CMwNod {
  CMwParam();

};

struct CMwParamClass : public CMwParam {
  CMwParamClass();

};

struct CMwParamStruct : public CMwParam {
  CMwParamStruct();

};

struct CMwParamAction : public CMwParam {
  CMwParamAction();

};

struct CMwParamBool : public CMwParam {
  CMwParamBool();

};

struct CMwParamEnum : public CMwParam {
  CMwParamEnum();

};

struct CMwParamInteger : public CMwParam {
  CMwParamInteger();

};

struct CMwParamIntegerRange : public CMwParamInteger {
  CMwParamIntegerRange();

};

struct CMwParamNatural : public CMwParam {
  CMwParamNatural();

};

struct CMwParamNaturalRange : public CMwParamNatural {
  CMwParamNaturalRange();

};

struct CMwCmdFastCall : public CMwCmd {
};

struct CMwParamReal : public CMwParam {
  CMwParamReal();

};

struct CMwParamRealRange : public CMwParamReal {
  CMwParamRealRange();

};

struct CMwParamString : public CMwParam {
  CMwParamString();

};

struct CMwParamVec3 : public CMwParamStruct {
  CMwParamVec3();

  float x;
  float y;
  float z;
};

struct CMwParamIso3 : public CMwParamStruct {
  CMwParamIso3();

  const float AxeXx;
  const float AxeXy;
  const float AxeYx;
  const float AxeYy;
  float tx;
  float ty;
};

struct CMwParamColor : public CMwParamStruct {
  CMwParamColor();

  float r;
  float g;
  float b;
};

struct CMwParamVec2 : public CMwParamStruct {
  CMwParamVec2();

  float x;
  float y;
};

struct CMwParamIso4 : public CMwParamStruct {
  CMwParamIso4();

  const float AxeXx;
  const float AxeXy;
  const float AxeXz;
  const float AxeYx;
  const float AxeYy;
  const float AxeYz;
  const float AxeZx;
  const float AxeZy;
  const float AxeZz;
  float tx;
  float ty;
  float tz;
};

struct CMwCmdBuffer : public CMwNod {
  CMwCmdBuffer();

  const MwBufferCat<CMwCmd*> Cmds;
  const uint CmdCount;
};

struct CMwCmdFiber : public CMwCmd {
};

struct CMwParamVec4 : public CMwParamStruct {
  CMwParamVec4();

  float x;
  float y;
  float z;
  float w;
};

struct CMwCmdBufferCore : public CMwNod {
  CMwCmdBufferCore();

  const bool IsEnabled;
  const uint ComputerTime;
  const uint HumanTime;
  const uint GameTime;
  const uint SimulationTime;
  const float SimulationRelativeSpeed;
  float PeriodEstimated;
  float DeltaSmoothed;
  float PeriodSmoothing; // Range: 0 - 1
  float DeltaSmoothing; // Range: 0 - 1
  const bool IsLagForbidden;
};

struct CMwParamDataRef : public CMwParam {
  CMwParamDataRef();

};

struct CMwClassInfoViewer : public CMwNod {
  CMwClassInfoViewer();

  const uint ClassId;
};

struct CMwParamProc : public CMwParam {
  CMwParamProc();

};

struct CMwParamPtr : public CMwParam {
  CMwParamPtr();

};

// File extension: 'RefBuffer.Gbx'
struct CMwRefBuffer : public CMwNod {
  CMwRefBuffer();

  const uint Count;
  const MwBuffer<CMwNod*> Nods;
  const bool UseAddRefRelease;
  uint NodClassId;
};

struct CMwParamAggreg : public CMwParam {
  CMwParamAggreg();

};

struct CMwParamStringInt : public CMwParam {
  CMwParamStringInt();

};

struct CMwStatsValue : public CMwNod {
  uint NbMaxSamples;
  bool ComputeDeviatedMean;
  float StdDevRatio;
  bool ComputeMedian;
  uint ReductionRatio;
  bool ComputeBuckets;
  bool AutoBuckets;
  MwArray<float> BucketsRanges;
  void Log();
  const uint NbSamples;
  const string Summary;
  const float MeanInv;
  const float Mean;
  const float StdDev;
  const float Min;
  const float Max;
  const float Latest;
  const float Median;
  const float MedianStdDev;
  const float DeviatedMean;
  MwArray<float> BucketsRatio;
};

struct CMwCmdBlock : public CMwNod {
  CMwCmdBlock();

};

struct CMwParamNat8 : public CMwParam {
  CMwParamNat8();

};

struct CMwParamNat16 : public CMwParam {
  CMwParamNat16();

};

struct CMwParamInt8 : public CMwParam {
  CMwParamInt8();

};

struct CMwParamInt16 : public CMwParam {
  CMwParamInt16();

};

struct CMwParamEnum8 : public CMwParam {
  CMwParamEnum8();

};

struct CMwParamEnum16 : public CMwParam {
  CMwParamEnum16();

};

struct Bool {
};

struct Real {
};

struct GmVec2 {
};

struct GmVec3 {
};

struct GmVec4 {
};

struct GmInt2 {
};

struct GmInt3 {
};

struct GmNat2 {
};

struct GmNat3 {
};

struct GmQuat {
};

struct GmIso4 {
};

struct Nat {
};

struct Nat8 {
};

struct Nat16 {
};

struct Int {
};

struct Int8 {
};

struct Int16 {
};

struct CMwId {
};

struct CFastString {
};

struct CFastStringInt {
};

struct Enum8 {
};

struct Enum16 {
};

struct Enum32 {
};

struct Vec3Color {
};

struct GmIso3 {
};

struct NatRange {
};

struct IntRange {
};

struct RealRange {
};

struct GxRGBAColor {
};

struct GmSimi2 {
  vec2 Pos;
  float Rot;
  vec2 Scale;
};

struct GmMat3 {
  vec3 m_column_0_;
  vec3 m_column_1_;
  vec3 m_column_2_;
};

struct MwTimeNs {
  bool Ns1;
  bool Ns2;
};

struct NatAdr {
};

// File extension: 'Script.Gbx'
struct CMwCmdBlockMain : public CMwCmdBlock {
  CMwCmdBlockMain();

  const string ScriptText;
  CMwNod* const ThisClass;
};

struct CMwCmdContainer : public CMwNod {
  CMwCmdContainer();

};

struct CMwParamQuat : public CMwParamStruct {
  CMwParamQuat();

  float w;
  float x;
  float y;
  float z;
};

struct CMwCmdFastCallUser : public CMwCmd {
};

struct CMwParamInt3 : public CMwParamStruct {
  CMwParamInt3();

  int x;
  int y;
  int z;
};

struct CMwParamNat3 : public CMwParamStruct {
  CMwParamNat3();

  uint x;
  uint y;
  uint z;
};

struct CMwCmdFastCallStatic : public CMwCmd {
};

struct CMwCmdFastCallStaticParam : public CMwCmd {
};

struct CMwParamMwId : public CMwParam {
  CMwParamMwId();

};

struct CMwParamInt2 : public CMwParamStruct {
  CMwParamInt2();

  float x;
  float y;
};

struct CMwGlobalParamList : public CMwNod {
  CMwGlobalParamList();

  bool ValidateForceSlowAndVisible;
  bool Reserved;
  bool PadInputWithoutBackButtons;
  bool SkinChooser_AllCatalogArticles;
  bool MapEditor_StartAroundItems;
  bool MapEditor_NoScroll;
  bool MenuHMD;
  bool ForceOffline;
  bool Profiler;
};

struct CMwParamNat2 : public CMwParamStruct {
  CMwParamNat2();

  uint x;
  uint y;
};

struct CMwParamRGBAColor : public CMwParam {
  CMwParamRGBAColor();

};

} // namespace MwFoundations

namespace Game {

struct CGameEngine : public CMwEngine {
  CGameEngine();

};

// File extension: 'Title.Gbx'
struct CGameManiaTitle : public CGameNod {
  CGameManiaTitle();

  const string TitleId; // Maniascript
  const string AuthorLogin; // Maniascript
  const wstring AuthorName; // Maniascript
  const wstring Name; // Maniascript
  const wstring Desc; // Maniascript
  const string InfoUrl; // Maniascript
  const string DownloadUrl; // Maniascript
  const string TitleVersion; // Maniascript
  const string MakerTitleId; // Maniascript
  const string BaseTitleId; // Maniascript
  CPlugFileImg* LogosFid;
  string CollectionGroup;
  int SortIndex;
  CGameSkinnedNod* SkinnedBoxCase;
  CGameSkinnedNod* SkinnedLogosStyle;
  string StationManialinkUrl;
  string BoxCaseManialinkUrl;
  bool DisableStationQuickEnter;
  bool ScriptCloud_Enabled;
  CGameManiaTitleCore* TitleCoreFid;
  uint SmGameplayVersion;
  bool InternalAllowLegacyNonScriptModes;
  bool UnlockAdvancedCollectors;
  const MwBuffer<CGameCtnCollection*> CollectionFids;
  MwId VehicleIdentId;
  MwId VehicleIdentAuthor;
  MwId VehicleIdentCollection;
  const MwBuffer<CPlugFileSnd*> MusicFids;
  const MwBuffer<CGameCtnChallenge*> EditorSimpleChallengeFids;
  CPlugFileFidContainer* ModFid;
  string MenuMainManialinkUrl;
  CPlugFileImg* MenuBgFid;
  CSystemFidsFolder* MenuBgFolder;
  CGameCtnReplayRecord* MenuBgReplayFid;
  CPlugFileImg* MenuHeaderFid;
  CPlugFileSnd* MenuMusicFid;
  CGameManialink3dStyle* MenuStyle3dFid;
  CPlugFileImg* MenuSkyGradFid;
  CPlugFont* Hud3dFontFid;
  CGameModulePlaygroundHudModel* HudDefaultModuleFid;
  CPlugFileText* SoloModeFid;
  CPlugFileZip* SoloDataPackFid;
  CGameCtnCampaign* SoloCampaignFid;
  CPlugFileText* SoloPlaylistFid;
  CPlugFileText* NetModeFid;
  CPlugFileText* NetPlaylistFid;
  CPlugFileText* SplitScreenModeFid;
  CPlugFileText* SplitScreenPlaylistFid;
  CPlugFileText* EditorMapTypeFid;
  CGameCtnChallenge* AnimEditor_DefaultChallengeFid;
  uint ModelSkinInit;
};

struct CGamePlayer : public CMwNod {
  CGamePlayerInfo* const User;
};

struct CGameTerminal : public CMwNod {
  enum class SpectatorCameraType {
    _SpectatorCam_Replay = 0,
    _SpectatorCam_Follow = 1,
    _SpectatorCam_Free = 2,
  };
  enum class SpectatorCameraTarget {
    _SpectatorCam_Manual = 0,
    _SpectatorCam_Auto = 1,
  };
  CGamePlayer* ControlledPlayer;
  CGamePlayer* GUIPlayer;
  CGameCameraSystem* const CameraSet;
  CGameCtnMediaClipPlayer* const MediaClipPlayer;
  CGameCtnMediaClipPlayer* const MediaAmbianceClipPlayer;
  void GetNextWantedCameraType();
  void GetNextWantedCameraTarget();
  ESpectatorCameraType SpectatorCameraType;
  ESpectatorCameraTarget SpectatorCameraTarget;
};

struct CGameApp : public CMwNod {
  CGameApp();

  void Start();
  void TerminateGame();
  CHmsViewport* const Viewport;
  CAudioPort* const AudioPort;
  CInputPort* const InputPort;
  CGameDialogs* const BasicDialogs;
  CGameSystemOverlay* const SystemOverlay;
  const MwBuffer<CGameMenu*> ActiveMenus;
  void ShowMenu(CGameMenu* Menu);
  void HideMenu(CGameMenu* Menu);
  void HeavyUpdate();
  const string OSUTCDate;
  const string OSLocalDate;
  const string OSUTCTime;
  const string OSLocalTime;
  CGameLoadProgress* const LoadProgress;
  string CmdLineUrlMptp;
  wstring BenchLoadingFolderName;
  CGameAchievementScriptManager* const AchievementsScriptManager;
  CGameScriptNotificationsConsumer* const NotificationsConsumer;
  CGameScriptNotificationsProducer* const NotificationsProducer;
};

struct CGameMasterServer : public CNetMasterServer {
  const wstring SubscribeNickName;
  const wstring SubscribeNickNameNew;
  MwBuffer<uint> FilesToSubmit;
  MwBuffer<uint> FilesToConfirm;
  const uint ReturnedError;
  const string ReturnedIP;
  const uint InboxMessagesCount;
  const uint OutboxMessagesCount;
  const MwBuffer<CGameRemoteBufferPool*> Pools;
  const MwBuffer<CGameRemoteBufferDataInfo*> RemoteDataInfos;
  void CheckDownloadToLaunch();
  const MwBuffer<CMwNod*> Downloads;
  const MwBuffer<CMwNod*> CurrentDownloads;
  uint Search_TimeToWait;
  const uint Search_Last;
  CGameLeagueManager* const LeaguesManager;
  CGameLeagueManager* const SubscribedGroupsManager;
};

// File extension: ''
struct CGameNod : public CMwNod {
};

// File extension: 'Menu.Gbx'
struct CGameMenu : public CMwNod {
  CGameMenu();

  enum class EMenuOrder {
    Menu = 2,
    InGameMenu = 3,
    GameDialog = 5,
    SystemDialog = 8,
    BasicDialog = 11,
  };
  MwArray<CGameMenuFrame*> Frames;
  CGameMenuFrame* MainFrame;
  CGameMenuFrame* const CurrentFrame;
  CControlBase* const CurrentFocusedControl;
  CControlStyle* const CurrentFocusedControlStyle;
  CPlugSound* SoundDisplayed;
  CPlugSound* SoundHidden;
  CPlugSound* SoundPageChanged;
  CControlStyleSheet* StyleSheet;
  CPlugBitmap* BackgroundBitmapUnderlay;
  CScene3d* BackgroundScene;
  CSceneCamera* const BackgroundCamera;
  float BackgroundCameraFov;
  float BackgroundCameraNearZ;
  float BackgroundCameraFarZ;
  bool EnableFrameStack;
  void Back();
  void RedrawAll();
  vec3 FrustumCenter;
  vec3 FurstrumHfDiag;
  CScene2d* const Overlay;
  EMenuOrder MenuOrder;
  vec2 GridStep;
};

struct CGameNetFormPlaygroundSync : public CNetNod {
  CGameNetFormPlaygroundSync();

};

// File extension: 'Frame.Gbx'
struct CGameMenuFrame : public CControlFrame {
  CGameMenuFrame();

  MwId AutoBackButtonId;
  CPlugSound* UpDownSound;
  CPlugSound* ShowSound;
  CMwCmdBlockMain* OnHideScript;
  CMwCmdBlockMain* OnBeforeShowScript;
  CMwCmdBlockMain* OnShowScript;
  CGameMenu* const Menu;
  CScene3d* FrameScene;
  void RunOnShowScripts();
  bool AllowBgCamera;
  uint NavigationDepth_Manialink3d_Unused;
};

struct CGameSystemOverlay : public CMwNod {
  CScene2d* const Overlay;
  CScene2d* const PluginsMenuOverlayOverlay;
  uint HideDelay;
  void SwitchFullscreen();
  void MinimizeApp();
  void CloseApp();
  void OpenGraphicSettings();
  void OpenStereoscopySettings();
  void OpenInputSettings();
  void OpenInterfaceSettings();
  void OpenMessenger();
  void ThrobberOnAction();
  bool IconManiaPlanet_ShowHome;
  const bool ToolBarIsActive;
  wstring ToolTip;
  CGameManiaPlanetMenuStations* const MenuStations;
  CGameManialinkBrowser* const ManialinkBrowser;
  CGameScriptDebugger* const ScriptDebugger;
};

struct CGamePlayground : public CGameSwitcherModule {
  CGamePlaygroundInterface* const Interface; // Maniascript
  const MwBuffer<CGamePlayer*> Players;
  const MwBuffer<CGameTerminal*> GameTerminals;
  const MwBuffer<CGamePlaygroundUIConfig*> UIConfigs;
  CGameCtnReplayRecord* const ReplayRecord;
  CGameCtnReplayRecord* PrevReplayRecord;
  bool GameTerminals_IsBlackOut;
  bool GameTerminals_BlackOut_Auto2dVr;
  CGameAnalyzer* Analyzer;
};

struct CGameNetPlayerInfo : public CMwNod {
  enum class PlayerType {
    Human = 0,
    Fake = 1,
    Net = 2,
    Replay = 3,
  };
  enum class SpectatorMode {
    Void = 0,
    Watcher = 1,
    LocalWatcher = 2,
    Target = 3,
  };
  const uint DbgClientUId;
  bool Live_IsRegisteredToMasterServer;
  bool Live_HasRetrieveTimeLeft;
  const bool Live_Updating;
  const bool Live_RetrievingTimeLeft;
  const uint Live_UpdateLastTime;
  const uint LiveUpdate_Counter;
  const EPlayerType PlayerType;
  const uint State;
  const uint ChallengeSequenceNumber;
  const uint LatestNetUpdate;
  const uint DownloadRate;
  const uint UploadRate;
  bool CustomDataDeactivated;
  const uint NbSpectators;
  ESpectatorMode SpectatorMode;
};

struct CGameNetwork : public CMwNod {
  CGameNetServerInfo* ServerInfo;
  CNetMasterServer* const MasterServer;
  CNetFileTransfer* const FileTransfer;
  const MwBuffer<CSystemPackDesc*> PackDescs;
  CSystemFidsFolder* const LocationPacksContent;
  const bool IsMultiInternet;
  const bool IsEnabled;
  const bool IsServer;
  CNetServer* const Server;
  CNetClient* const Client;
  const MwBuffer<CGameNetServerInfo*> OnlineServers;
  const MwBuffer<CGameNetServerInfo*> OnlinePlayers;
  MwBuffer<CGameNetPlayerInfo*> PlayerInfos;
  void FindServers();
  CGamePlaygroundUIConfigMgrScript* const UIConfigMgr_Rules;
  CGamePlaygroundUIConfigMgrScript* const UIConfigMgr_ServerPlugin;
  float VoteDefaultRatio;
  uint CallVoteTimeOut;
  uint CallVotePercent;
  const bool InCallvote;
  const uint VoteNbYes;
  const uint VoteNbNo;
  const MwBuffer<wstring> ChatHistoryText;
  const MwBuffer<uint> ChatHistoryUid;
  const MwBuffer<uint> ChatHistoryTimestamp;
  const MwBuffer<wstring> ChatHistoryLines;
  const MwBuffer<CSystemData*> ManialinkDataCache;
  const uint RecvNetRate;
  const uint SendNetRate;
  const float PacketLossRate;
  const string RecvNetRatePretty;
  const string SendNetRatePretty;
  const uint CanDoUDP;
  const int LatestGamePing;
  const int LatestHumanPing;
  const float LatestEpsilon;
  const float SmoothedEpsilon;
  const uint TotalSendingSize;
  const uint TotalReceivingSize;
  const uint TotalHttpReceivingSize;
  const uint TotalTcpUdpReceivingSize;
  const uint TcpReceivingSize;
  const uint UdpReceivingSize;
  const uint TcpSendingSize;
  const uint UdpSendingSize;
  const uint NbrTotalConnection;
  const uint NbrConnectionsDone;
  const uint NbrConnectionsDisconnecting;
  const uint NbrConnectionsInProgress;
  const uint NbrConnectionsPending;
  const uint NbrAcceptPerSecond;
  const uint NbrNewConnectionPerSecond;
};

struct CGameNetFormTunnel : public CGameNetForm {
  CGameNetFormTunnel();

};

struct CGameManiaPlanetNetwork : public CGameCtnNetwork {
};

struct CGameManiaTitleCore : public CGameNod {
  const wstring DisplayName;
  CGameManiaPlanet* const ManiaPlanet;
  CGameCtnCollection* CollectionCommonFid;
  wstring ModeScriptFolderName;
  bool WithLocalMultiplayer;
};

// File extension: 'ManiaPlanet.Gbx'
struct CGameManiaPlanet : public CGameCtnApp {
  CGameManiaPlanet();

  CSystemFidsFolder* ManiaTitlesFolder;
  CGameCoverFlowDesc* CoverFlowDesc;
  CPlugFileImg* TitleMainDefaultBgFid;
  void ScanDiskForManiaTitles();
  const MwBuffer<CGameManiaTitle*> ManiaTitles;
  const MwBuffer<CGameStation*> Stations;
  CGameManiaTitle* const LoadedManiaTitle;
  CGameManiaTitleCore* const LoadedCore;
  CGameManiaPlanetScriptAPI* const ManiaPlanetScriptAPI;
  CGameManiaTitleControlScriptAPI* const ManiaTitleControlScriptAPI;
  CGameManiaTitleEditionScriptAPI* const ManiaTitleEditionScriptAPI;
  string StartupManiaTitle;
  string StartupManiaTitle_SingleTitleMode;
  string StartupManiaTitle_TestMode;
  void Operation_Abort();
  const bool Operation_InProgress;
  CGameCtnMenusManiaPlanet* MenuManager;
  void BackToMainMenu();
};

// Description: "Station info & manipulation."
struct CGameStation : public CGameNod {
  enum class EEchelon {
    None = 0,
    Bronze1 = 1,
    Bronze2 = 2,
    Bronze3 = 3,
    Silver1 = 4,
    Silver2 = 5,
    Silver3 = 6,
    Gold1 = 7,
    Gold2 = 8,
    Gold3 = 9,
  };
  CGameManiaTitle* const Title; // Maniascript
  const uint AudienceRegisteredUsers; // Maniascript
  const uint AudienceInstalls;
  const uint AudienceOnlineUsers;
  const uint CampaignMedalsMax; // Maniascript
  const uint CampaignMedalsCurrent; // Maniascript
  const uint CampaignMedalsRanking; // Maniascript
  const float LadderPoints; // Maniascript
  const uint LadderRank; // Maniascript
  const EEchelon Echelon; // Maniascript
  const uint NextEchelonPercent; // Maniascript
  bool DisableQuickEnter; // Maniascript
  bool IsLogoVisible; // Maniascript
  float GhostAlpha; // Maniascript
  vec3 FocusLightColor; // Maniascript
  vec3 NormalLightColor; // Maniascript
  const bool IsEditable; // Maniascript
  const string ManiaApp_Url;
  CGameManialinkPage* const ManialinkViewer_Page;
  CGameManiaApp* const ManiaApp;
};

// Description: "Manialink entry."
struct CGameManialinkEntry : public CGameManialinkControl {
  enum class ETextFormat {
    Basic = 0,
    Script = 1,
    Password = 2,
    Newpassword = 3,
  };
  wstring Value; // Maniascript
  wstring HackValueWithEvent;
  void StartEdition(); // Maniascript
  void SetText(wstring NewText, bool SendSubmitEvent); // Maniascript
  ETextFormat TextFormat; // Maniascript
  float Opacity; // Maniascript
  vec3 TextColor; // Maniascript
  float TextSizeReal; // Maniascript
  uint TextSize; // Maniascript
  int MaxLine; // Maniascript
  bool AutoNewLine; // Maniascript
};

struct CGameScene : public CScene3d {
  CGamePlaygroundResources* Resources;
  CGameEnvironmentManager* const EnvironmentManager;
  CGameHud3d* const Hud3d;
  CGameMgrActionFxVis* const MgrActionFxVis;
  CGameMgrCamera* const MgrCamera;
  CSceneMobil* MarksMobil;
  const MwBuffer<CPlugDecalModel*> ChallengeDecals_Models;
  CHmsVisMiniMap* MiniMap;
  bool ShowBlockNormalHelpers;
  bool ShowBlockFacultativeHelpers;
};

// File extension: 'ColorEffect.Gbx'
struct CGameMenuColorEffect : public CControlEffect {
  CGameMenuColorEffect();

  MwArray<CFuncFullColorGradient*> ColorsBeam;
  MwArray<float> ColorPeriods;
  MwArray<float> BeamWidths;
  MwArray<float> InterWidths;
  float Period;
  bool IsBeamColorEvolving;
  bool IsBeamMoving;
  bool IsMoveHalf;
  bool IsMoveInverse;
  bool IsColorEvolveHalf;
  bool IsColorEvolveInverse;
  bool ForceFirstColorWord;
  bool ForceNoMove;
};

struct CGameCtnCollectorList : public CMwNod {
  CGameCtnCollectorList();

  const uint Bob;
  const MwBuffer<MwId> BlockStockIds;
  MwBuffer<uint> BlockStockNbAvailables;
};

struct CGameCtnChapter : public CMwNod {
  CGameCtnChapter();

  CSystemFidFile* const CollectionFid;
  const wstring LongDesc;
  const MwBuffer<CGameCtnArticle*> Articles;
  CSystemFidFile* const Icon;
  const bool Unlocked;
};

struct CGameCtnCatalog : public CMwNod {
  CGameCtnCatalog();

  const MwBuffer<CGameCtnChapter*> Chapters;
};

struct CGameCtnArticle : public CMwNod {
  CGameCtnArticle();

  const wstring Name;
  CSystemFidFile* const CollectorFid;
  const bool IsLoaded;
  void Preload();
  void Purge();
  const MwId IdentId;
  UnnamedEnum CollectionId;
  const MwId IdentAuthor;
  CPlugBitmap* const BitmapIcon;
  CPlugGameSkin* const GameSkin;
  uint NbAvailableCurrent;
  uint NbAvailableMax;
  UnnamedEnum ArticleDataLocation;
  const string PageName;
  const string AmountString;
  CGameCtnArticle* const BlockItem_ItemModelArticle;
};

struct CGameCtnPlayground : public CGamePlayground {
  CGameScene* const GameScene;
  CGameCtnGhost* const PlayerRecordedGhost;
  CGameCtnGhost* const PlayerBestGhost;
};

struct CGameCamera : public CMwNod {
  CGameCamera();

  CSceneCamera* SceneCamera;
  const uint GroupIndex;
};

// File extension: 'GameCtnMediaBlock3dStereo.gbx'
struct CGameCtnMediaBlock3dStereo : public CGameCtnMediaBlock {
  CGameCtnMediaBlock3dStereo();

  float Separation;
  float ScreenDist;
};

struct CGameMasterServerRequest : public CNetMasterServerRequest {
};

struct CGameAvatar : public CMwNod {
  CSystemPackDesc* const PackDesc;
};

struct CGameNetOnlineMessage : public CMwNod {
  CGameNetOnlineMessage();

  string ReceiverLogin;
  string SenderLogin;
  wstring Subject;
  wstring Message;
  uint Donation;
};

// File extension: 'GameCtnMediaBlockTriangles.gbx'
struct CGameCtnMediaBlockTriangles : public CGameCtnMediaBlock {
  CSceneMobil* const Mobil;
};

struct CGameRemoteBuffer : public CMwNod {
  CMwNod* const LocalData;
  const string LastServerUpdate;
  const bool UseRefs;
  enum class EMode {
    None = 0,
    Get = 1,
    Set = 2,
    Get_Set = 3,
  };
  const EMode Mode;
  const uint TotalCount;
  const uint SpecificCount;
  const uint PerPageCount;
  const uint CacheDuration;
  const uint RegisteredUsersCount;
  MwBuffer<CMwNod*> Datas;
};

struct CGameRemoteBufferPool : public CMwNod {
  CGameRemoteBufferDataInfo* const DataInfo;
  const uint BuffersCount;
};

struct CGameRemoteBufferDataInfo : public CMwNod {
  uint Default_CacheDuration;
  uint Default_PerPageCount;
};

// File extension: 'GameResources.Gbx'
struct CGameResources : public CMwNod {
  CGameResources();

  MwArray<CPlugSound*> Sounds;
  const MwArray<CAudioSource*> AudioSources;
  CSystemFidsFolder* HymnsFolder;
  CSystemFidsFolder* MenuBackgroundsFolder;
  CSystemFidsFolder* FolderGlobalEnvBanners;
  CMwNod* EditorSpawnHelper;
  CPlugBitmap* BitmapCubeMenuManiaPlanet3d;
  CPlugMaterial* MaterialSkyDomeMenu;
  CPlugShader* InterfaceBg;
  CControlStyleSheet* StyleSheetFid;
  CControlStyle* StyleUrlLink;
  CControlStyle* StyleDefaultTitleLogos;
  CPlugFont* InterfaceFont;
  CScene2d* ReplayInterfaceFid;
  CScene2d* InterfaceEditorFid;
  CScene2d* InterfacePuzzleFid;
  CScene2d* InterfaceEditorSimpleFid;
  CScene2d* InterfaceBlockEditorFid;
  CControlFrame* InterfaceEditorInventoryModelFid;
  CScene2d* RaceInterfaceFid;
  CScene2d* RaceNetInterfaceFid;
  CScene2d* StoryInterfaceFid;
  CScene2d* MediaTrackerInterfaceFid;
  CControlFrame* EditorAnimInterfaceFid;
  CControlFrame* EditorAnimCharInterfaceFid;
  CControlFrame* EditorItemInterfaceFid;
  CControlFrame* EditorVehicleInterfaceFid;
  CControlFrame* EditorClassInterfaceFid;
  CControlFrame* EditorManialinkInterfaceFid;
  CControlFrame* EditorModuleInterfaceFid;
  CControlFrame* EditorAnimSetInterfaceFid;
  CPlugFileTextScript* ModuleMenuBaseScriptFid;
  CPlugFileTextScript* ModuleMenuServerBrowserScriptFid;
  CPlugFileTextScript* ModulePlaygroundStoreScriptFid;
  CPlugFileTextScript* ModulePlaygroundInventoryScriptFid;
  CPlugFileTextScript* ModulePlaygroundSpeedMeterScriptFid;
  CGameModulePlaygroundHudModel* ModulePlaygroundDefaultHudFid;
  CGameModulePlaygroundInventoryModel* ModulePlaygroundDefaultInventoryFid;
  CGameModulePlaygroundStoreModel* ModulePlaygroundDefaultStoreFid;
  CGameModulePlaygroundChronoModel* ModulePlaygroundDefaultChronoFid;
  CGameModulePlaygroundScoresTableModel* ModulePlaygroundDefaultScoresTableFid;
  CGameModulePlaygroundSpeedMeterModel* ModulePlaygroundDefaultSpeedMeterFid;
  CGameModulePlaygroundPlayerStateModel* ModulePlaygroundDefaultPlayerStateFid;
  CGameModulePlaygroundTeamStateModel* ModulePlaygroundDefaultTeamStateFid;
  CGameModulePlaygroundPlayerStateModel* ModulePlaygroundFullPlayerStateFid;
  CPlugFileText* MaterialsLibrariesFid;
  CGameMenu* MenusFid;
  CGameMenu* InGameDialogsFid;
  CGameMenu* DialogsFid;
  CGameMenu* SystemDialogsFid;
  CGameMenu* BasicDialogsFid;
  CScene2d* ProgressOverlayFid;
  CScene2d* SystemOverlayFid;
  CScene2d* SystemMenuFid;
  CScene2d* ManialinkBrowserOverlayFid;
  CScene2d* PluginsMenuOverlayFid;
  CPlugSolid* StationGoldFid;
  CPlugSolid* StationSilverFid;
  CPlugSolid* StationBronzeFid;
  CPlugSolid* StationServerFid;
  CPlugGameSkin* StationGameSkin;
  CPlugSolid* PlanetSolidFid;
  CPlugSound* ManiaPlanetMenuMusic;
  CControlFrame* CardStationMainFid;
  CControlFrame* CardStationSummaryFid;
  CControlFrame* CardPlanetMenu1Fid;
  CControlFrame* CardPlanetMenu2Fid;
  CControlFrame* CardPlanetServerMainFid;
  CControlFrame* CardPlanetServerSummaryFid;
  CControlFrame* CardPlanetServerRackSummaryFid;
  CGameManialink3dWorld* MenuManialink3dFid;
  CGameManialink3dStyle* MenuManialink3d_BaseStyleFid;
  CGameManialink3dStyle* MenuManialink3d_StationsStyleFid;
  CPlugSolid2Model* MenuManialink3dBox_Box;
  CPlugSolid2Model* MenuManialink3dBox_Title;
  CPlugSolid2Model* MenuManialink3dBox_Button;
  CPlugSolid2Model* MenuManialink3dBox_Window;
  CPlugSolid2Model* MenuManialink3dBox_WindowH;
  CPlugSolid2Model* MenuManialink3dBox_BoxCase;
  CPlugSolid2Model* MenuManialink3dBox_Station1x1;
  CPlugSolid2Model* MenuManialink3dBox_Station2x2;
  CPlugSolid2Model* MenuManialink3dBox_Station3x3;
  CSystemFidsFolder* TitleTemplateFolder;
  CPlugBitmap* DefaultAvatarBitmapFid;
  CPlugFileImg* DefaultMTColorGradingImageFid;
  CPlugBitmap* DefaultMTDecal2dBitmapFid;
  CPlugBitmap* DefaultMTBlockBitmapFid;
  CPlugSound* DefaultMTBlockSoundFid;
  CPlugBitmap* DefaultLeagueLogoBitmapFid;
  CPlugBitmap* DefaultOnlineNewsIconBitmapFid;
  CPlugBitmap* DefaultTeamLogoBitmapFid;
  CPlugBitmap* DefaultTagBitmapFid;
  CPlugMusic* DefaultMusicFid;
  CPlugBitmap* BitmapTeamEmblems;
  CPlugFileSnd* EmptyChallengeCustomMusicFid;
  CGameCtnPainterSetting* PainterSetting;
  CGameControlCardManager* GeneralCardManager;
  CSceneFxNod* SceneFxNodRoot;
  CScene3d* PodiumScene;
  CPlugFileTextScript* DefaultSkillScoreComputerFid;
  CPlugFileImg* ImageTurboRoulette;
  CPlugBitmap* EditorModelSpritesBitmapFid;
  CPlugMaterial* EditorModelDefaultMaterialFid;
  CPlugFileImg* EditorPixelCheckerImageFid;
  CGameCtnMediaClip* DefaultTransitionInClipFid;
  CGameCtnMediaClip* DefaultTransitionOutClipFid;
  CPlugAudioBalance* AudioBalance_Base;
  CPlugAudioBalance* AudioBalance_Menus;
  CPlugAudioBalance* AudioBalance_Editor;
  CPlugShaderApply* OffZoneSurfaceShaderFid;
  CPlugShaderApply* OffZoneLayerShaderFid;
  CGameEditorModel* DefaultEditorMeshFid;
  CGameEditorModel* DefaultEditorEditorFid;
  CGameEditorModel* DefaultEditorVehicleFid;
  CGameEditorModel* DefaultEditorModuleFid;
};

struct CGameNetServerInfo : public CNetMasterHost {
  const bool IsIdle_ForMasterServer;
  const bool IsOnline;
  const bool IsServer;
  const bool IsPrivate;
  const bool IsPrivateForSpectator;
  const bool AcceptReferees;
  uint RefereesCount;
  const uint LadderMatchId;
  const uint DownloadRate;
  const uint UploadRate;
  enum class EPingEnum {
    ____ = 0,
    A___ = 1,
    AA__ = 2,
    AAA_ = 3,
    AAAA = 4,
  };
  const EPingEnum PingEnum;
  const uint Ping;
  string ServerHostName;
  const uint State;
  const uint ChallengeSequenceNumber;
  const bool DetailedPingInfoReceived;
  const uint RoundTrip;
  bool CallVoteEnabled;
  string AdvertisingSuffix;
};

struct CGameNetForm : public CNetNod {
  CGameNetForm();

};

struct CGameDialogs : public CMwNod {
  enum class EDialog {
    None = 0,
    Message = 1,
    WaitMessage = 2,
  };
  bool EnableCustomSystemDialogs; // Maniascript
  const EDialog Dialog; // Maniascript
  const wstring Message_LabelText; // Maniascript
  const wstring Message_ButtonText; // Maniascript
  const bool Message_FocusOnButton; // Maniascript
  void Message_Ok(); // Maniascript
  const wstring WaitMessage_LabelText; // Maniascript
  const wstring WaitMessage_ButtonText; // Maniascript
  const float WaitMessage_Progress; // Range: 0 - 1 // Maniascript
  const bool WaitMessage_ShowProgressBar; // Maniascript
  const bool WaitMessage_ShowAbortButton; // Maniascript
  void WaitMessage_Ok(); // Maniascript
  CGameMenu* Dialogs;
  void HideDialogs();
  void DoMessage_Ok();
  void AskYesNo_No();
  void AskYesNo_Yes();
  void AskYesNo_Cancel();
  wstring String;
  void DialogSaveAs_HierarchyUp();
  const wstring DialogSaveAs_Path;
  const wstring DialogSaveAs_PathToDisplay;
  void DialogSaveAs_OnRefresh();
  void DialogSaveAs_OnValidate();
  void DialogSaveAs_OnCancel();
  const MwBuffer<CGameFid*> DialogSaveAs_Files;
  void DbgTestDoMessage();
};

// File extension: 'ScaleEffect.Gbx'
struct CGameMenuScaleEffect : public CControlEffect {
  CGameMenuScaleEffect();

  float LeftBorderScale;
  float RightBorderScale;
  float UpBorderScale;
  float DownBorderScale;
  float Shift;
  uint Period;
  uint MaxLetterScaling;
  bool AllowDecalage;
  bool AllowHideBeforeEffect;
  bool IsHalf;
  bool IsInverse;
  bool ReCenter;
};

// File extension: 'Collection.Gbx'
struct CGameCtnCollection : public CMwNod {
  CGameCtnCollection();

  UnnamedEnum CollectionId;
  MwBuffer<CGameCtnZone*> CompleteZoneList;
  wstring DisplayName;
  uint CollectionPackMask;
  CGameCtnZone* DefaultZone;
  float SquareSize;
  float SquareHeight;
  float BoardSquareHeight;
  float BoardSquareBorder;
  float TerrainHeightOffset;
  const string WaterG;
  CPlugBitmap* WaterG_BitmapNormal;
  float WaterG_BumpSpeedUV;
  float WaterG_BumpScaleUV;
  float WaterG_BumpScale;
  float WaterG_RefracPertub;
  MwId Water0_Id;
  float Water0_OffsetTop;
  float Water0_OffsetBottom;
  float Water0_FogMaxDepth;
  CPlugFileImg* Water0_FidFogImage;
  MwId Water1_Id;
  float Water1_OffsetTop;
  float Water1_OffsetBottom;
  float Water1_FogMaxDepth;
  CPlugFileImg* Water1_FidFogImage;
  MwId Water2_Id;
  float Water2_OffsetTop;
  float Water2_OffsetBottom;
  float Water2_FogMaxDepth;
  CPlugFileImg* Water2_FidFogImage;
  MwId Water3_Id;
  float Water3_OffsetTop;
  float Water3_OffsetBottom;
  float Water3_FogMaxDepth;
  CPlugFileImg* Water3_FidFogImage;
  bool IsWaterMultiHeight;
  float WaterFogClampAboveDist;
  float CameraMinHeight;
  bool NeedUnlock;
  UnnamedEnum BackgroundShadow;
  float ShadowSoftSizeInWorld;
  UnnamedEnum VertexLighting;
  float ColorVertexMin; // Range: 0 - 1
  float ColorVertexMax; // Range: 0 - 1
  UnnamedEnum LightMapMapper;
  float VisMeshLodDistScale;
  vec3 Tech3TunnelSpecularExpScaleMax;
  CGameCtnDecoration* DefaultDecoration;
  MwId VehicleName;
  MwId VehicleAuthor;
  UnnamedEnum VehicleCollection;
  bool IsEditable;
  CPlugBitmap* IconFid;
  CPlugBitmap* LoadScreenFid;
  int SortIndex;
  CSystemFidsFolder* FolderBlockInfo;
  CSystemFidsFolder* FolderItem;
  CSystemFidsFolder* FolderDecoration;
  CSystemFidsFolder* FolderMenusIcons;
  CSystemFidsFolder* FolderCardEventInfo;
  CSystemFidsFolder* FolderMacroBlockInfo;
  CSystemFidsFolder* FolderDecalModels;
  CSystemFidsFolder* FolderMacroDecals;
  MwBuffer<wstring> BaseZoneStrings;
  MwBuffer<wstring> ReplacementZoneStrings;
  MwBuffer<CGameCtnDecorationTerrainModifier*> ReplacementTerrainModifiers;
  void AddReplacementZone();
  void RemoveReplacementZone();
  const MwBuffer<CPlugParticleEmitterModel*> ParticleEmitterModelsFids;
  MwBuffer<MwId> DecalsTypesId;
  CSceneVehicleCarMarksModel* MarksModel;
  CFuncShaderLayerUV* FidFuncShaderCloudsX2;
  CPlugBitmap* FidPlugBitmapCloudsX2;
  CPlugFogMatter* OffZone_FogMatter;
  const MwBuffer<CGameCtnZone*> ZoneList;
  CPlugVehicleVisStyles* VehicleStyles;
};

struct CGameCtnMediaBlockEditor : public CMwNod {
};

// File extension: 'ObjInfo.Gbx'
struct CGameVskObjectInfo : public CGameCtnCollector {
  CGameVskObjectInfo();

  CMwNod* Helper;
  CMwNod* Mobil;
  CMwNod* AltMobil;
  MwBuffer<CMwNod*> Properties;
};

// Description: "A 1-square-sized part of a block model."
struct CGameCtnBlockUnitInfo : public CMwNod {
  CGameCtnBlockUnitInfo();

  enum class CardinalDirEnum {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  nat3 OffsetE;
  MwArray<CGameCtnBlockInfoClip*> ClipsE;
  CGameCtnBlockInfoClip* TopClip;
  CGameCtnBlockInfoClip* BottomClip;
  MwArray<CGameCtnBlockInfoPylon*> Pylons;
  uint AcceptPylons;
  uint PlacePylons;
  bool Underground;
  MwId TerrainModifierId;
  CGameCtnBlockUnitInfo* OriginalBlockUnitInfoCopy;
  const uint PlacedPillarIndex;
  const uint ReplacedPillarIndex;
  ECardinalDirEnum TopClipDir;
  ECardinalDirEnum BottomClipDir;
  const nat3 Offset; // Maniascript
  const nat3 RelativeOffset; // Maniascript
  const MwArray<CGameCtnBlockInfoClip*> Clips; // Maniascript
};

struct CGameFid : public CMwNod {
  const wstring Name; // Maniascript
  const wstring Path; // Maniascript
  const wstring FileName; // Maniascript
  CSystemFidFile* const Fid;
  CSystemFidsFolder* const Fids;
  const bool Selected;
};

// File extension: 'Decoration.Gbx'
struct CGameCtnDecoration : public CGameCtnCollector {
  CGameCtnDecoration();

  CPlugFileFidContainer* DefaultSkinFid;
  DataRef DefaultSkinFileRef;
  CGameCtnDecorationSize* DecoSize;
  CGameCtnDecorationAudio* DecoAudio;
  CGameCtnDecorationMood* DecoMood;
  CGameCtnDecorationMaterialModifiers* DecoMaterialModifiers;
  CGameCtnDecorationTerrainModifier* TerrainModifierBase;
  CGameCtnDecorationTerrainModifier* TerrainModifierCovered;
  bool IsWaterOutsidePlayField;
  CPlugGameSkin* VehicleFxSkin;
  CSystemFidsFolder* VehicleFxFolder;
  CPlugSound* DecoAudio_Ambient;
  MwId DecorationZoneFrontierId;
  void InitWithNoSkin();
  void ClearWithNoSkin();
  CPlugDecoratorSolid* DecoratorSolidWarp;
};

// File extension: 'DecorationAudio.Gbx'
struct CGameCtnDecorationAudio : public CMwNod {
  CGameCtnDecorationAudio();

  MwArray<CPlugSound*> Sounds;
  MwArray<CPlugSound*> Musics;
  float CameraWooshVolumedB; // Range: -60 - 0
  float CameraWooshMinSpeedKmh;
  CPlugAudioEnvironment* AudioEnvOutsideOpen;
  CPlugAudioEnvironment* AudioEnvOutsideEnclosed;
  CPlugAudioEnvironment* AudioEnvUndergroundOpen;
  CPlugAudioEnvironment* AudioEnvUndergroundEnclosed;
  CPlugAudioBalance* AudioBalance_Podium;
  CPlugAudioBalance* AudioBalance_ReplaySoft;
  CPlugAudioBalance* AudioBalance_ReplayLoud;
  CPlugAudioBalance* AudioBalance_PlaygroundSoft;
  CPlugAudioBalance* AudioBalance_PlaygroundLoud;
  CPlugAudioBalance* AudioBalance_Overlay_Underground;
  CPlugAudioBalance* AudioBalance_Overlay_Far;
  CPlugAudioBalance* AudioBalance_TM_EvtStartLine;
  CPlugAudioBalance* AudioBalance_TM_EvtCheckpoint;
  CPlugAudioBalance* AudioBalance_TM_EvtRespawn;
  CPlugAudioBalance* AudioBalance_TM_EvtCrash;
  CPlugAudioBalance* AudioBalance_TM_EvtFlying;
  CPlugAudioBalance* m_AudioBalance_TM_EvtSwimming;
  CPlugAudioBalance* AudioBalance_SM_EvtSpawn;
  CPlugAudioBalance* AudioBalance_SM_EvtUnspawn;
  CPlugAudioBalance* AudioBalance_SM_EvtHit;
  CPlugAudioBalance* AudioBalance_SM_EvtHitEliminated;
  CPlugAudioBalance* AudioBalance_SM_EvtFire;
  float ReverbMinBlockDist;
  float ReverbMaxBlockDist;
  MwBuffer<float> ReverbMaterialGains;
  CPlugFileText* ModifierXmlFile;
};

// File extension: 'DecorationMood.Gbx'
struct CGameCtnDecorationMood : public CMwNod {
  CGameCtnDecorationMood();

  uint ShadowCountCarHuman;
  uint ShadowCountCarOpponent;
  float ShadowCarIntensity; // Range: 0 - 1
  bool ShadowScene;
  bool BackgroundIsLocallyLighted;
  bool SolidLightAreSkinned;
  float Latitude;
  float Longitude;
  float DeltaGMT;
  float SunMoonIntensity;
  float LocalLightScale;
  float EditorHelperHdrScale;
  string TimeSunRise;
  string TimeSunFall;
  bool EnableStars;
  bool WaterReflectFakeCube;
  CFuncCloudsSolids* CloudsSolids;
  const string ToneMapping;
  float ToneMapExposureStaticBase;
  UnnamedEnum ToneMapFilmCurve;
  vec3 Tech3Bloom;
  vec4 Tech3ToneMapAutoExp;
  vec2 Tech3SpecularLocal;
  vec3 Tech3SpecularFake_ExpScaleMax;
  CFuncKeysReal* ToneMapAutoExp_FidAvgLumiToKeyValue;
  CFuncKeysReal* FxBloom_FidFuncIntensAtHdrNorm;
  CPlugFxLightning* FxLightning;
  CPlugFxWindOnDecal* FxWindOnDecal;
  CPlugFxWindOnTreeSprite* FxWindOnTreeSprite;
  CPlugFxHdrScales_Tech3* FxHdrScalesT3;
  CPlugMoodBlender* MoodBlender;
  float RemappedStartDayTime; // Range: 0 - 1
  bool IsNight;
  CPlugGameSkin* Remapping;
  CSystemFidsFolder* RemapFolder;
  CHmsLightMap* HmsLightMap;
  CHmsAmbientOcc* HmsAmbientOcc;
};

// File extension: 'DecorationSize.Gbx'
struct CGameCtnDecorationSize : public CMwNod {
  CGameCtnDecorationSize();

  CSceneLayout* Scene;
  uint SizeX;
  uint SizeY;
  uint SizeZ;
  uint BaseHeightBase;
  uint BaseHeightOffset;
  bool OffsetBlockY;
  vec2 EditionZoneMin;
  vec2 EditionZoneMax;
  uint VertexCount;
};

// File extension: 'TMTerrainModifier.Gbx'
struct CGameCtnDecorationTerrainModifier : public CMwNod {
  CGameCtnDecorationTerrainModifier();

  MwId IdName;
  CPlugGameSkin* Remapping;
  CSystemFidsFolder* RemapFolder;
};

// File extension: 'GameAdvertisement.Gbx'
struct CGameAdvertising : public CGameNod {
  CGameAdvertising();

  UnnamedEnum Mode;
  bool ImpressionHelpers_Enable;
  bool DisableOcclusion;
  bool EditionDummies;
  const MwBuffer<CMwNod*> Files;
  CPlugFileImg* EditonDummyImage;
  const string Identifier;
  const string PublicKey;
  string Radial_Config;
  uint Impression_Time;
  float Impression_Size;
  float Impression_CosAngle;
  string DefaultAdvertisingSuffix;
  void Init();
  void Destroy();
  void Flush();
  void ImpressionHelpers_Update();
  string ZoneName;
  string ZoneAuthor;
  string ZoneHost;
  string Nation;
  string Login;
  const MwBuffer<CGameAdvertisingElement*> ZoneElements;
  CSceneMobil* const ImpressionHelpers_Mobil;
};

struct CGameAdvertisingElement : public CGameNod {
  const string Name;
  const uint ContentDisplayed;
  const MwBuffer<CMwNod*> OwnerNods;
  CSystemFidFile* const File;
  void DisplayOrig();
  const float Nadeo_MaxImpression;
  const uint Nadeo_ContentId;
};

// File extension: 'Ghost.Gbx'
struct CGameGhost : public CMwNod {
  CGameGhost();

  const uint Duration;
  const uint Size;
};

struct CGameControlCameraFirstPerson : public CGameControlCamera {
  CGameControlCameraFirstPerson();

};

struct CGameControlCameraThirdPerson : public CGameControlCamera {
  CGameControlCameraThirdPerson();

};

// File extension: 'Map.Gbx'
struct CGameCtnChallenge : public CMwNod {
  CGameCtnChallenge();

  enum class ETrafficDensity {
    Null = 0,
    Low = 1,
    Normal = 2,
    High = 3,
    Very_High = 4,
  };
  enum class BotPathTypeEnum {
    Recast = 0,
    Recorded = 1,
  };
  const string EdChallengeId;
  CGameCtnChallengeInfo* const MapInfo; // Maniascript
  wstring MapName; // Maniascript
  wstring Comments; // Maniascript
  const string AuthorZoneIconUrl; // Maniascript
  const string CollectionName; // Maniascript
  const string DecorationName; // Maniascript
  const string AuthorLogin; // Maniascript
  const wstring AuthorNickName; // Maniascript
  const wstring AuthorZonePath; // Maniascript
  const wstring MapType; // Maniascript
  const wstring MapStyle; // Maniascript
  const MwId TitleId;
  uint TMObjective_AuthorTime; // Maniascript
  uint TMObjective_GoldTime; // Maniascript
  uint TMObjective_SilverTime; // Maniascript
  uint TMObjective_BronzeTime; // Maniascript
  const uint TMObjective_NbLaps; // Maniascript
  const bool TMObjective_IsLapRace; // Maniascript
  wstring ObjectiveTextAuthor; // Maniascript
  wstring ObjectiveTextGold; // Maniascript
  wstring ObjectiveTextSilver; // Maniascript
  wstring ObjectiveTextBronze; // Maniascript
  const uint CopperPrice; // Maniascript
  const nat3 Size; // Maniascript
  const bool HasCustomIntro; // Maniascript
  const bool HasCustomMusic; // Maniascript
  CGameCtnChallengeParameters* ChallengeParameters;
  CGameCtnCollectorList* BlockStock;
  CPlugBitmap* const AuthorZoneIcon;
  const wstring MapTypeOrLegacyMode;
  string HashedPassword;
  MwId VehicleName;
  MwId VehicleAuthor;
  UnnamedEnum VehicleCollection;
  bool NeedUnlock;
  UnnamedEnum Kind;
  UnnamedEnum Difficulty;
  CGameCtnDecoration* Decoration;
  CSystemPackDesc* ModPackDesc;
  CSystemPackDesc* CustomMusicPackDesc;
  CPlugSound* CustomMusic;
  CGameCtnCollection* Collection;
  const MwBuffer<CGameCtnBlock*> Blocks;
  const MwBuffer<CGameCtnBlock*> BakedBlocks;
  const MwBuffer<EBotPathTypeEnum> BotPathTypes;
  void CheckPlayField();
  const uint VertexCount;
  uint TargetTime;
  void ComputeCrc32(CMwNod* Nod, uint Crc32);
  CGameCtnMediaClip* ClipIntro;
  CGameCtnMediaClipGroup* ClipGroupInGame;
  CGameCtnMediaClipGroup* ClipGroupEndRace;
  CGameCtnMediaClip* ClipAmbiance;
  vec2 MapCoordTarget;
  vec2 MapCoordOrigin;
  MwBuffer<CSceneVehicleCarMarksSamples*> CarMarksBuffer;
  void TmpBlockOffsetMoulinette();
  uint TmpBlockOffsetMoulinetteY;
  const uint LightMapCacheSmallByteSize;
  MwBuffer<CGameCtnAnchoredObject*> AnchoredObjects;
  CPlugAnimFile* AnimLibrary;
  CScriptTraitsMetadata* ScriptMetadata;
  float ThumbnailCam_TransX;
  float ThumbnailCam_TransY;
  float ThumbnailCam_TransZ;
  float ThumbnailCam_Yaw;
  float ThumbnailCam_Pitch;
  float ThumbnailCam_Roll;
  float ThumbnailCam_FovY;
  string ThumbnailCam_XmlStr;
  void UpdateBases();
  const uint DecoBaseHeightOffset;
  CPlugBitmap* WorldDistortXYZ;
  vec3 WorldDistortScales;
};

struct CGameCtnChallengeInfo : public CGameFid {
  const string MapUid; // Maniascript
  const wstring Comments; // Maniascript
  const uint CopperPrice; // Maniascript
  const string CollectionName; // Maniascript
  const string AuthorLogin; // Maniascript
  const wstring AuthorNickName; // Maniascript
  const wstring AuthorZonePath; // Maniascript
  const wstring AuthorZoneFlagUrl; // Maniascript
  const wstring AuthorCountryFlagUrl; // Maniascript
  const wstring MapType; // Maniascript
  const wstring MapStyle; // Maniascript
  const bool Unlocked; // Maniascript
  const bool IsPlayable; // Maniascript
  const bool CreatedWithSimpleEditor; // Maniascript
  const bool CreatedWithPartyEditor; // Maniascript
  const uint TMObjective_AuthorTime; // Maniascript
  const uint TMObjective_GoldTime; // Maniascript
  const uint TMObjective_SilverTime; // Maniascript
  const uint TMObjective_BronzeTime; // Maniascript
  const uint TMObjective_NbLaps; // Maniascript
  const bool TMObjective_IsLapRace; // Maniascript
  const wstring NameForUi;
  const string CopperString;
  const vec2 MapCoordOrigin;
  const vec2 MapCoordTarget;
  const UnnamedEnum Kind;
  const bool LapRace;
  const uint DbgPackMask;
  enum class EMedal {
    None = 0,
    Finished = 1,
    Bronze = 2,
    Silver = 3,
    Gold = 4,
    Author = 5,
  };
  const EMedal Medal;
  const uint BestScore;
  const uint BestTime;
  const uint MinRespawnCount;
  const EMedal OfficialMedal;
  const uint OfficialBestScore;
  const uint OfficialBestTime;
  const uint OfficialMinRespawnCount;
  const uint GoldTime;
  const MwBuffer<CGameHighScore*> SoloScores;
};

struct CGameOutlineBox : public CMwNod {
  CGameOutlineBox();

  CSceneMobil* const Mobil;
  bool AdditiveElseBlendSrcA;
  bool IsShowQuads;
  bool IsShowLines;
  bool IsShowPrisms;
  float HardLinesColorCoef;
  float SoftLinesColorCoef;
  void Show();
  void Hide();
};

// File extension: 'ParticleParam.Gbx'
struct CGameCtnParticleParam : public CMwNod {
  CGameCtnParticleParam();

  MwId ParticleModelId;
};

struct CGameHighScore : public CMwNod {
  CGameHighScore();

  enum class EMedal {
    None = 0,
    Finished = 1,
    Bronze = 2,
    Silver = 3,
    Gold = 4,
    Author = 5,
  };
  const wstring Name; // Maniascript
  const uint Time; // Maniascript
  const wstring Score; // Maniascript
  const uint Rank; // Maniascript
  const uint Count; // Maniascript
  const string GhostUrl; // Maniascript
  const EMedal Medal; // Maniascript
  const string GhostName; // Maniascript
};

// File extension: 'PainterSetting.Gbx'
struct CGameCtnPainterSetting : public CMwNod {
  CGameCtnPainterSetting();

  vec2 MinMaxScaleFill;
  vec2 MinMaxScaleSticker;
  vec2 MinMaxScaleStickerText;
  vec2 MinMaxScaleBrush;
  vec2 MinMaxScaleBrushText;
  CGameControlCameraOrbital3d* const Camera;
  void SetDefaultCameraSettings();
  CPlugMaterial* MaterialPaint;
  CPlugMaterial* MaterialFillColor;
  CPlugMaterial* MaterialLayerBlend;
  CPlugMaterial* MaterialLayerModulate;
  CPlugShader* ShaderRasterRgbMask;
  CPlugShader* ShaderRasterAlphaMask;
  CPlugBitmap* BitmapBrushFade;
  CPlugBitmap* BitmapStickerFade;
  CPlugFileImg* ImageSubObjectAllIcon;
  const MwBuffer<CScene3d*> ScenesFids;
  float MouseZDeltaRot;
  float MouseZDeltaScale;
  float MouseZDeltaTransparency;
  float MouseZDeltaShininess;
  float BrushDtRefSc;
  bool BrushUseDt;
  bool CameraBottomClipGeometry;
  float CameraBottomIn_m1p1;
  CPlugGameSkin* Remapping;
  CSystemFidsFolder* RemapFolder;
  CFuncKeysReal* FxBloom_FidFuncIntensAtHdrNorm;
};

struct CGameLeagueManager : public CMwNod {
  CGameLeagueManager();

  uint CacheDuration;
  MwBuffer<CGameLeague*> Leagues;
};

struct CGameCtnMediaBlockEditorTriangles : public CGameCtnMediaBlockEditor {
  CGameCtnMediaBlockEditorTriangles();

  void ModeMoveVertexs();
  void ModeCreateTriangles();
  void ModeDeleteVertexs();
  void ActionImportSvg();
  vec3 VertRGB;
  float VertAlpha; // Range: 0 - 1
  float VertPosX;
  float VertPosY;
  float VertPosZ;
  CControlFrame* Frame;
};

// File extension: 'GameCtnMediaBlockTriangles2D.gbx'
struct CGameCtnMediaBlockTriangles2D : public CGameCtnMediaBlockTriangles {
  CGameCtnMediaBlockTriangles2D();

};

// File extension: 'GameCtnMediaBlockTriangles3D.gbx'
struct CGameCtnMediaBlockTriangles3D : public CGameCtnMediaBlockTriangles {
  CGameCtnMediaBlockTriangles3D();

};

// Description: "Script API for graphic settings"
struct CGameDisplaySettingsWrapper : public CMwNod {
  enum class EDisplayMode {
    FullscreenExclusive = 0,
    Windowed = 1,
    WindowedFull = 2,
  };
  enum class EGpuSync {
    None = 0,
    _3Frames = 1,
    _2Frames = 2,
    _1Frames = 3,
    Immediate = 4,
  };
  enum class EDisplaySync {
    None = 0,
    VBlank1 = 1,
    VBlank2 = 2,
    VBlank3 = 3,
  };
  enum class ETripleBuffer {
    Off = 0,
    On = 1,
  };
  enum class EForwardAA {
    None = 0,
    _2x = 1,
    _4x = 2,
    _6x = 3,
    _8x = 4,
    _16x = 5,
  };
  enum class EDeferredAA {
    None = 0,
    FXAA = 1,
  };
  enum class ETextureFilter {
    Bilinear = 0,
    Trilinear = 1,
    Aniso_2x = 2,
    Aniso_4x = 3,
    Aniso_8x = 4,
    Aniso_16x = 5,
    Aniso_16x_Everywhere = 6,
  };
  enum class EFxBloomHdr {
    None = 0,
    Medium = 1,
    High = 2,
  };
  enum class EFxMotionBlur {
    None = 0,
    Enabled = 1,
  };
  enum class EWaterReflect {
    Low = 0,
    Med = 1,
    High = 2,
  };
  enum class EVehicleReflect {
    Low = 0,
    HighInReplay = 1,
    High = 2,
  };
  enum class EScreenshotExt {
    JPEG = 0,
    WebP = 1,
    TGA = 2,
  };
  enum class ERealtimeSSAA {
    Disabled = 0,
    _2Renders = 1,
    _3Renders = 2,
    _4Renders = 3,
    _5Renders = 4,
    _6Renders = 5,
    _7Renders = 6,
    _8Renders = 7,
    _9Renders = 8,
  };
  enum class ERealtimeSSAA_Motion {
    Disabled = 0,
    _1Frame = 1,
    _2Frames = 2,
    _3Frames = 3,
    _4Frames = 4,
  };
  const uint DirtyCounter; // Maniascript
  string DeviceInfo; // Maniascript
  EDisplayMode DisplayMode; // Maniascript
  int2 WindowSize; // Maniascript
  bool WindowBorderless; // Maniascript
  const int2 WindowFullSize; // Maniascript
  int2 FullscreenSize; // Maniascript
  const MwBuffer<nat2> FullscreenSizes; // Maniascript
  const bool IsDeferred; // Maniascript
  EForwardAA Antialias_Forward; // Maniascript
  EDeferredAA Antialias_Deferred; // Maniascript
  ETextureFilter TextureFiltering; // Maniascript
  uint MaxFps; // Maniascript
  EGpuSync GpuSync; // Maniascript
  EDisplaySync DisplaySync; // Maniascript
  ETripleBuffer TripleBuffer; // Maniascript
  EWaterReflect WaterReflect; // Maniascript
  EVehicleReflect VehicleReflect; // Maniascript
  EFxBloomHdr FxBloomHdr; // Maniascript
  EFxMotionBlur FxMotionBlur; // Maniascript
  float FxMotionBlurIntens; // Range: 0 - 1 // Maniascript
  EScreenshotExt ScreenshotExt; // Maniascript
  ERealtimeSSAA RealtimeSSAA; // Maniascript
  ERealtimeSSAA_Motion RealtimeSSAA_Motion; // Maniascript
  uint RealtimeSSAA_MinimumFps; // Maniascript
};

// Description: "The model of a map block"
struct CGameCtnBlockInfo : public CGameCtnCollector {
  enum class EBaseType {
    None = 0,
    Conductor = 1,
    Generator = 2,
    Collector = 3,
  };
  enum class EWayPointType {
    Start = 0,
    Finish = 1,
    Checkpoint = 2,
    None = 3,
    StartFinish = 4,
    Dispenser = 5,
  };
  enum class MultiDirEnum {
    SameDir = 0,
    SymmetricalDirs = 1,
    AllDir = 2,
    OpposedDirOnly = 3,
    PerpendicularDirsOnly = 4,
    NextDirOnly = 5,
    PreviousDirOnly = 6,
  };
  CGameCtnBlockInfoVariantGround* VariantBaseGround;
  CGameCtnBlockInfoVariantAir* VariantBaseAir;
  const MwBuffer<CGameCtnBlockInfoVariantGround*> AdditionalVariantsGround;
  const MwBuffer<CGameCtnBlockInfoVariantAir*> AdditionalVariantsAir;
  bool IsPillar;
  EWayPointType EdWaypointType;
  EBaseType BaseType;
  MwId SymmetricalBlockInfoId;
  UnnamedEnum Dir;
  CGameCtnBlockInfo* SymmetricalBlockInfoConnected;
  EMultiDirEnum PillarShapeMultiDir;
  bool EdNoRespawn;
  bool IconAutoUseGround;
  CMwNod* IconMacroBlockInfo;
  bool CharPhySpecialPropertyCustomizable;
  CPlugCharPhySpecialProperty* CharPhySpecialProperty;
  CGamePodiumInfo* PodiumInfo;
  CGamePodiumInfo* IntroInfo;
  CPlugFogVolumeBox* FogVolumeBox;
  CPlugSound* Sound1;
  iso4 Sound1Loc;
  CPlugSound* Sound2;
  iso4 Sound2Loc;
  const wstring Name; // Maniascript
  const bool IsRoad; // Maniascript
  const bool IsTerrain; // Maniascript
  const bool IsPodium; // Maniascript
  const EWayPointType WaypointType; // Maniascript
  const EWayPointType WayPointType; // Maniascript
  const bool NoRespawn; // Maniascript
  const bool IsClip; // Maniascript
  CGameCtnBlockInfoVariantGround* const VariantGround; // Maniascript
  CGameCtnBlockInfoVariantAir* const VariantAir; // Maniascript
};

// File extension: 'EDFlat.Gbx'
struct CGameCtnBlockInfoFlat : public CGameCtnBlockInfo {
  CGameCtnBlockInfoFlat();

};

// File extension: 'EDFrontier.Gbx'
struct CGameCtnBlockInfoFrontier : public CGameCtnBlockInfo {
  CGameCtnBlockInfoFrontier();

};

// File extension: 'EDClassic.Gbx'
struct CGameCtnBlockInfoClassic : public CGameCtnBlockInfo {
  CGameCtnBlockInfoClassic();

};

// File extension: 'EDRoad.Gbx'
struct CGameCtnBlockInfoRoad : public CGameCtnBlockInfo {
  CGameCtnBlockInfoRoad();

  CGameCtnBlockInfoSlope* Slope;
};

// File extension: 'EDClip.Gbx'
struct CGameCtnBlockInfoClip : public CGameCtnBlockInfo {
  CGameCtnBlockInfoClip();

  enum class EnumClipType {
    ClassicClip = 0,
    FreeClipSide = 1,
    FreeClipTop = 2,
    FreeClipBottom = 3,
  };
  enum class MultiDirEnum {
    SameDir = 0,
    SymmetricalDirs = 1,
    AllDir = 2,
    OpposedDirOnly = 3,
    PerpendicularDirsOnly = 4,
    NextDirOnly = 5,
    PreviousDirOnly = 6,
  };
  bool HasPassingPoint;
  float PassingPointPosX;
  float PassingPointPosY;
  float PassingPointRoll;
  float PassingPointPitch;
  MwId ASymmetricalClipId;
  MwId ClipGroupId;
  MwId SymmetricalClipGroupId;
  EnumClipType ClipType;
  bool IsFullFreeClip;
  bool IsExclusiveFreeClip;
  bool CanBeDeletedByFullFreeClip;
  EMultiDirEnum TopBottomMultiDir;
};

// File extension: 'EDSlope.Gbx'
struct CGameCtnBlockInfoSlope : public CGameCtnBlockInfo {
  CGameCtnBlockInfoSlope();

};

// File extension: 'EDPylon.Gbx'
struct CGameCtnBlockInfoPylon : public CGameCtnBlockInfo {
  CGameCtnBlockInfoPylon();

  float PylonOffset;
  UnnamedEnum PylonAmount;
  UnnamedEnum PylonPlacement;
  int BlockHeightOffset;
};

// File extension: 'EDRectAsym.Gbx'
struct CGameCtnBlockInfoRectAsym : public CGameCtnBlockInfo {
  CGameCtnBlockInfoRectAsym();

};

struct CGameCtnBlock : public CMwNod {
  CGameCtnBlock();

  enum class CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  const MwId DescId;
  const UnnamedEnum CollectionId;
  const MwId DescAuthor;
  uint CoordX;
  uint CoordY;
  uint CoordZ;
  ECardinalDirections BlockDir;
  const bool IsGround;
  const uint BlockInfoVariantIndex;
  const uint MobilIndex;
  const uint MobilVariantIndex;
  CSceneMobil* const Mobil;
  MwArray<CGameCtnBlockUnit*> BlockUnitsE;
  CGameCtnBlockSkin* const Skin;
  void ApplySkin();
  bool Editable;
  CGameCtnBlockInfo* const BlockInfo;
  CPlugCharPhySpecialProperty* CharPhySpecialProperty;
  CGameWaypointSpecialProperty* WaypointSpecialProperty;
  const uint BlockScriptId; // Maniascript
  const bool CanHaveAnchor; // Maniascript
  void UseDefaultAnchor(); // Maniascript
  void UseCustomAnchor(); // Maniascript
  const nat3 Coord; // Maniascript
  const ECardinalDirections Dir; // Maniascript
  const ECardinalDirections Direction; // Maniascript
  const MwArray<CGameCtnBlockUnit*> BlockUnits; // Maniascript
  CGameCtnBlockInfo* const BlockModel; // Maniascript
  wstring SubMapDataRefForEditor;
  CGameCtnChallenge* const SubMapNod;
};

// Description: "A 1-square-sized part of a block instance."
struct CGameCtnBlockUnit : public CMwNod {
  CGameCtnBlockUnit();

  uint PlacePylons;
  uint AcceptPylons;
  const nat3 Offset; // Maniascript
  const nat3 AbsoluteOffset; // Maniascript
  CGameCtnBlockUnitInfo* const BlockUnitModel; // Maniascript
  CGameCtnBlock* const Block; // Maniascript
};

struct CGameCtnBlockSkin : public CMwNod {
  CGameCtnBlockSkin();

  bool IsDirty;
  CSystemPackDesc* PackDesc;
  CSystemPackDesc* ParentPackDesc;
  wstring Text;
};

struct CGameCtnPylonColumn : public CMwNod {
  CGameCtnPylonColumn();

};

struct CGameCtnChallengeParameters : public CMwNod {
  CGameCtnChallengeParameters();

  uint AuthorScore;
  uint AuthorTime;
  uint GoldTime;
  uint SilverTime;
  uint BronzeTime;
  void ResetGoldSilverBronzeStunts();
  wstring MapType;
  wstring MapStyle;
  const wstring Type;
  const wstring Style;
  string Tip;
  CGameCtnGhost* RaceValidateGhost;
  const bool IsValidatedForScriptModes;
};

// File extension: 'TMZone.Gbx'
struct CGameCtnZone : public CMwNod {
  CGameCtnZone();

  MwId ZoneId;
  MwId SurfaceId;
  MwId WaterId;
  bool IsLargeZone;
  float VisualTopGroundHeight;
  MwId ForcedParentZoneFrontierId;
  const uint Height;
};

// File extension: 'ZoneFlat.Gbx'
struct CGameCtnZoneFlat : public CGameCtnZone {
  CGameCtnZoneFlat();

  bool GroundOnly;
  bool AutoSimplifyGenealogy;
  CGameCtnBlockInfoFlat* BlockInfoFlat;
  CGameCtnBlockInfoClip* BlockInfoClip;
  CGameCtnBlockInfoRoad* BlockInfoRoad;
  CGameCtnBlockInfoPylon* BlockInfoPylon;
};

// File extension: 'ZoneFrontier.Gbx'
struct CGameCtnZoneFrontier : public CGameCtnZone {
  CGameCtnZoneFrontier();

  int ParentToChildHeightChange;
  const int BlockYOffsetFromParent;
  MwId ParentZoneId;
  MwId ChildZoneId;
  CGameCtnBlockInfoFrontier* BlockInfoFrontier;
  bool FrontierParentBorder_AcceptPylons;
  bool FrontierChildBorder_AcceptPylons;
  bool FrontierTransitionMiddle_AcceptPylons;
  bool FrontierStraightMiddle_AcceptPylons;
  MwBuffer<CGameCtnZoneFusionInfo*> CompatibleZones;
};

// File extension: 'GameSkinnedNod.gbx'
struct CGameSkinnedNod : public CGameNod {
  CGameSkinnedNod();

  CMwNod* BaseNodFid;
  CPlugGameSkin* GameSkin;
  MwArray<CMwNod*> RemapFids;
};

struct CGameCtnMediaShootParams : public CMwNod {
  CGameCtnMediaShootParams();

  uint VideoFps;
  float Duration;
  uint SizeX;
  uint SizeY;
  bool Hq;
  uint HqSampleCountPerAxe;
  bool HqSoftShadows;
  bool HqAmbientOcc;
  UnnamedEnum Stereo3d;
  bool IsAudioStream;
};

struct CGameCampaignsScoresManager : public CMwNod {
  CGameCampaignsScoresManager();

};

// userName: 'ActionFxPhy'
struct CGameActionFxPhy : public CMwNod {
};

struct CGameCampaignScores : public CMwNod {
  CGameCampaignScores();

};

struct CGameChallengeScores : public CMwNod {
  CGameChallengeScores();

};

struct CGameGeneralScores : public CMwNod {
  CGameGeneralScores();

};

// Description: "Internal API to the manilink browser."
struct CGameManialinkBrowser : public CMwNod {
  CControlFrame* const FramePage;
  CControlFrame* const FrameHeader;
  CGameManialinkPage* const CurrentPage;
  CGameManiaApp* const CurrentManiaApp;
  bool Manialink_Enabled;
  bool Manialink_Active; // Maniascript
  wstring ManialinkBrowser_Link; // Maniascript
  MwId ManialinkBrowser_Frame3dFocused; // Maniascript
  void ManialinkBrowser_OnHome(); // Maniascript
  void ManialinkBrowser_OnQuit(); // Maniascript
  void ManialinkBrowser_OnBack(); // Maniascript
  void ManialinkBrowser_OnForward(); // Maniascript
  void GoToHomeAndResetHistory(); // Maniascript
  void GoToCurUrl(); // Maniascript
};

struct CGameNetFormAdmin : public CNetNod {
  CGameNetFormAdmin();

};

struct CGameNetFileTransfer : public CNetFileTransfer {
};

struct CGameNetFormTimeSync : public CNetFormTimed {
  CGameNetFormTimeSync();

};

struct CGameNetFormCallVote : public CGameNetForm {
  CGameNetFormCallVote();

};

struct CGameControlCamera : public CMwNod {
  CGameControlCamera();

};

struct CGameControlCameraFree : public CGameControlCamera {
  CGameControlCameraFree();

  float m_Fov;
  vec3 m_FreeVal_m_LocVal_m_Translation;
  float m_Pitch;
  float m_Yaw;
  float m_Roll;
  float m_Radius;
  vec3 m_RelativeFollowedPos;
  vec3 m_TargetPos;
  bool m_TargetIsEnabled;
  float m_Fov;
  float m_FreeVal_m_LensVal_m_DofFocusZ;
  float m_FreeVal_m_LensVal_m_DofLensSize;
  bool m_ClampPitch;
  float m_ClampPitchMin;
  float m_ClampPitchMax;
  float m_Acceleration;
  float m_StartMoveSpeed;
  uint m_MoveSpeedCoef;
  float m_MoveSpeed;
  float m_MoveInertia;
  float m_RotateSpeed;
  float m_RotateInertia;
  bool m_UseForcedRoll;
  float m_ForcedRoll;
  bool m_DisableMouseZ;
  bool m_DebugUseOculus;
};

struct CGameControlCameraOrbital3d : public CGameControlCameraTarget {
  CGameControlCameraOrbital3d();

  bool m_CanUseRelativeTargetLocation;
  iso4 m_RelativeTargetLocation;
  float m_Fov;
  float m_MinFov;
  float m_MaxFov;
  bool m_CanCameraMove;
  bool m_UseAutoRadiusFromTargets;
  vec2 m_OrbitalParams_m_RotateSpeed;
  vec3 m_OrbitalParams_m_RadiusScale;
  bool m_OcclusionIsEnable;
  bool m_UsingBorderToRotate;
  float m_MouseBorderMoveSize;
  float m_OcclusionTargetRadius;
  float m_OcclusionDistFromHit;
  float m_Radius;
  float m_Latitude;
  float m_Longitude;
  float m_OrbitalParams_m_WheelSensitivity;
  float m_OrbitalParams_m_FovKeySensitivity;
  float m_OrbitalParams_m_ZoomKeySensitivity;
  float m_OrbitalParams_m_DefaultRadius;
  float m_OrbitalParams_m_RadiusMin;
  float m_OrbitalParams_m_RadiusMax;
  float m_OrbitalParams_m_LatitudeMin;
  float m_OrbitalParams_m_LatitudeMax;
  bool m_FixedTargetLocation;
  bool m_UseNonLinearZoom;
};

struct CGameControlCameraEffect : public CMwNod {
  CGameControlCameraEffect();

  void Reset();
  void Install();
  void Uninstall();
  const bool IsInstalled;
};

struct CGameControlCameraEffectShake : public CGameControlCameraEffect {
  CGameControlCameraEffectShake();

  const vec3 OffsetPos;
  float Yaw;
  float Pitch;
  float Roll;
  float Speed;
  float Intensity;
};

struct CGameControlCameraTarget : public CGameControlCamera {
  CGameControlCameraTarget();

};

struct CGameRace : public CGameCtnPlayground {
  CScene2d* InterfaceFid;
  void WriteDebugValidateStringToDisk();
};

struct CGameLadderRanking : public CMwNod {
  wstring Name;
  wstring Path;
  string Login;
  string ScoreStr;
  uint Ranking;
  uint Ranking2;
  uint Score;
  uint Stars;
  uint ChildsCount;
  bool IsFolder;
};

struct CGameCtnMediaBlock : public CMwNod {
  const bool IsInstalled;
  const bool IsActive;
  void SwitchOn();
  void SwitchOff();
  float Start;
  float End;
};

// File extension: 'GameCtnMediaTrack.gbx'
struct CGameCtnMediaTrack : public CMwNod {
  CGameCtnMediaTrack();

  wstring Name;
  bool IsReadOnly;
  bool IsKeepPlaying;
  bool IsCycling;
  const MwBuffer<CGameCtnMediaBlock*> Blocks;
};

// File extension: 'Clip.gbx'
struct CGameCtnMediaClip : public CMwNod {
  CGameCtnMediaClip();

  wstring Name;
  const MwBuffer<CGameCtnMediaTrack*> Tracks;
  uint LocalPlayerClipEntIndex;
  bool StopOnRespawn;
};

// File extension: 'GameCtnMediaClipGroup.gbx'
struct CGameCtnMediaClipGroup : public CMwNod {
  CGameCtnMediaClipGroup();

  const MwBuffer<CGameCtnMediaClip*> Clips;
};

struct CGameCtnMediaBlockCamera : public CGameCtnMediaBlock {
  const bool IsInstalled;
  const bool IsActive;
};

// File extension: 'GameCtnMediaBlockUi.gbx'
struct CGameCtnMediaBlockUi : public CGameCtnMediaBlock {
  CGameCtnMediaBlockUi();

  CControlContainer* UserInterface;
};

struct CGameCtnMediaBlockFx : public CGameCtnMediaBlock {
  const float FadeDuration;
  CSceneFx* const SceneFx;
};

struct CGameCtnMediaBlockFxBlur : public CGameCtnMediaBlockFx {
};

// File extension: 'GameCtnMediaBlockFxColors.gbx'
struct CGameCtnMediaBlockFxColors : public CGameCtnMediaBlockFx {
  CGameCtnMediaBlockFxColors();

  void SwitchOn();
};

// File extension: 'GameCtnMediaBlockFxBlurDepth.gbx'
struct CGameCtnMediaBlockFxBlurDepth : public CGameCtnMediaBlockFxBlur {
  CGameCtnMediaBlockFxBlurDepth();

  void SwitchOn();
};

// File extension: 'GameCtnMediaBlockFxBlurMotion.gbx'
struct CGameCtnMediaBlockFxBlurMotion : public CGameCtnMediaBlockFxBlur {
  CGameCtnMediaBlockFxBlurMotion();

};

// File extension: 'GameCtnMediaBlockFxBloom.gbx'
struct CGameCtnMediaBlockFxBloom : public CGameCtnMediaBlockFx {
  CGameCtnMediaBlockFxBloom();

  void SwitchOn();
};

// File extension: 'GameCtnMediaBlockCamGame.gbx'
struct CGameCtnMediaBlockCameraGame : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraGame();

  EGameCam GameCam;
  uint ClipEntId;
};

struct CGameCtnMediaBlockTime : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTime();

  void SwitchOn();
};

struct CGameCtnMediaClipPlayer : public CMwNod {
  CGameCtnMediaClip* const Clip;
  CScene2d* const Scene2d;
  const MwBuffer<CGameCtnMediaTrack*> EdMediaTracks;
  const uint LocalPlayerUId;
};

struct CGameCtnMediaBlockEvent_deprecated : public CGameCtnMediaBlock {
};

struct CGameHud3d : public CMwNod {
  bool Players;
  bool Markers;
  bool DisplayAvatar;
  bool DisplayName;
  bool DisplayBg;
  bool DisplayEchelon;
  bool DoDistanceFade;
  float DisplaySize;
  vec3 PlayerBaseTint;
  float PlayerBaseAlpha;
  vec3 MarkerBaseTint;
  float MarkerBaseAlpha;
  float WorldCartoucheAltitude;
  float ScreenCartoucheAltitude;
  bool ForceNameShadow;
  float NameClipLengthSizeRatio;
  float NameRatioXY;
  float LineWidthRatio;
  float GaugeYPos;
  float GaugeHeight;
  float GaugeWidth;
  uint VisibilityFadeDuration;
  uint VisibilityTestPeriod;
};

struct CGameManiaNetResource : public CMwNod {
  const string Url;
};

// Description: "User profile."
struct CGamePlayerInfo : public CGameNetPlayerInfo {
  CGamePlayerInfo();

  enum class EEchelon {
    None = 0,
    Bronze1 = 1,
    Bronze2 = 2,
    Bronze3 = 3,
    Silver1 = 4,
    Silver2 = 5,
    Silver3 = 6,
    Gold1 = 7,
    Gold2 = 8,
    Gold3 = 9,
  };
  enum class ETagType {
    Bronze = 0,
    Silver = 1,
    Gold = 2,
    Nadeo = 3,
  };
  enum class EStereoDisplayMode {
    None = 0,
    Stereo = 1,
    HMD = 2,
  };
  enum class EMuteSetting {
    Auto = 0,
    Muted = 1,
    NotMuted = 2,
  };
  const string Login; // Maniascript
  const wstring Name; // Maniascript
  const string AvatarUrl; // Maniascript
  const wstring ZonePath; // Maniascript
  const string ZoneFlagUrl; // Maniascript
  const string CountryFlagUrl; // Maniascript
  const string Language; // Maniascript
  const wstring Description; // Maniascript
  const vec3 Color; // Maniascript
  const string ClubLink; // Maniascript
  const string BroadcastTVLogin; // Maniascript
  const string SteamUserId; // Maniascript
  const uint FameStars; // Maniascript
  const EEchelon Echelon; // Maniascript
  const uint NextEchelonPercent; // Maniascript
  const bool IsBeginner; // Maniascript
  const uint LadderRank; // Maniascript
  const uint LadderTotal; // Maniascript
  const float LadderPoints; // Maniascript
  const wstring LadderZoneName; // Maniascript
  const string LadderZoneFlagUrl; // Maniascript
  const float ReferenceScore; // Maniascript
  const bool IsFakeUser; // Maniascript
  const MwBuffer<uint> Tags_Favored_Indices; // Maniascript
  const MwBuffer<string> Tags_Id; // Maniascript
  const MwBuffer<ETagType> Tags_Type; // Maniascript
  const MwBuffer<wstring> Tags_Comments; // Maniascript
  const MwBuffer<wstring> Tags_Deliverer; // Maniascript
  const EStereoDisplayMode StereoDisplayMode; // Maniascript
  bool HackCamHmdDisabled; // Maniascript
  const wstring AvatarDisplayName; // Maniascript
  const wstring HornDisplayName; // Maniascript
  const bool VoiceChat_Supported; // Maniascript
  EMuteSetting VoiceChat_MuteSetting; // Maniascript
  const bool VoiceChat_IsSpeaking; // Maniascript
  const bool VoiceChat_IsMuted; // Maniascript
  const uint RequestedClan; // Maniascript
  const bool RequestsSpectate; // Maniascript
  const bool IsConnectedToMasterServer; // Maniascript
  const MwBuffer<string> AlliesConnected; // Maniascript
  CPlugBitmap* const ZoneBitmap;
  CGameLeague* const ZoneLeague;
  const bool WishSpectator;
  const bool ForcedSpectator;
  uint PlaygroundTeamRequested;
  float LightTrailLinearHue; // Range: 0 - 1
  const wstring StrLadderRanking;
  const wstring StrLadderRankingSimple;
  const string StrLadderScore;
  const string StrLadderLastPoints;
  const string StrLadderWins;
  const string StrLadderDraws;
  const string StrLadderLosses;
  const string StrLadderTeamName;
  const string StrLadderTeamRanking;
  const string StrLadderTeamRankingSimple;
  const string StrLadderNbrTeams;
  const string StrLadderScoreRounded;
  const uint PlaygroundRoundNum;
  const string GameStateName;
};

struct CGameCameraSystem : public CMwNod {
  CGameCameraSystem();

};

struct CGamePlayerProfile : public CMwNod {
  CGamePlayerProfile();

  string ProfileName;
  const wstring DisplayProfileName;
  const uint TotalPlayTime;
  const MwBuffer<CGamePlayerProfileChunk*> Chunks;
  CGamePlayerProfileChunk_AccountSettings* AccountSettings;
  CGamePlayerProfileChunk_GameSettings* GameSettings;
  CGamePlayerProfileChunk_GameScores* GameScores;
  CGamePlayerProfileChunk_GameStats* GameStats;
  CGamePlayerProfileChunk_GlobalInterfaceSettings* GlobalInterfaceSettings;
  CGamePlayerProfileChunk_InterfaceSettings* InterfaceSettings;
  CGamePlayerProfileChunk_VehiclesSettings* VehiclesSettings;
  CGamePlayerProfileChunk_ManiaPlanetStations* ManiaPlanetStations;
  const MwBuffer<CGamePlayerProfileChunk_InputBindingsConfig*> InputBindingsConfigs;
  const MwBuffer<CGamePlayerProfileChunk_PackagesInfos*> PackagesInfosChunks;
  CScriptTraitsPersistent* const ScriptPersistentTraits_NoTitle;
};

struct CGameScriptDebugger : public CMwNod {
  enum class EVisibility {
    Hidden = 0,
    Editor = 1,
    EditorAndLogs = 2,
    LogsFull = 3,
    LogsReduced = 4,
  };
  EVisibility Visibility;
  wstring DialogEditScript_TempText;
  wstring DialogEditScript_TempSearchText;
  uint DialogEditScript_TempLineNumber;
  wstring DialogEditScript_TempReplaceText;
  void DialogEditScript_Ok();
  void DialogEditScript_RequestCancel();
  void DialogEditScript_Cancel();
  void DialogEditScript_Compile();
  void DialogEditScript_Save();
  void DialogEditScript_Save_Done();
  void DialogEditScript_SaveAllFiles_Step2();
  void DialogEditScript_Find();
  void DialogEditScript_ToggleIncludes();
};

// File extension: 'League.Gbx'
struct CGameLeague : public CMwNod {
  CGameLeague();

  wstring Path;
  wstring Name;
  wstring Description;
  string Login;
  bool IsGroup;
  CSystemData* const Logo;
};

struct CGameCtnChallengeGroup : public CMwNod {
  CGameCtnChallengeGroup();

  wstring Name;
  const UnnamedEnum Medal;
  bool Unlocked;
  void CleanChallenges();
  void EmptyChallenges();
  void IsUnlocked(); // Maniascript
  const MwBuffer<CGameCtnChallengeInfo*> MapInfos; // Maniascript
};

// File extension: 'GameCtnCampaign.Gbx'
struct CGameCtnCampaign : public CMwNod {
  CGameCtnCampaign();

  enum class EType {
    None = 0,
    Race = 1,
    Puzzle = 2,
    Survival = 3,
    Platform = 4,
    Stunts = 5,
    Training = 6,
  };
  enum class ERequiredPlayersCount {
    Solo_Only = 0,
    Multi_Only = 1,
    Duo_Only = 2,
    Trio_Only = 3,
    Quatuor_Only = 4,
    All = 5,
  };
  enum class EUnlockType {
    By_Row = 0,
    By_Column = 1,
    Custom = 2,
  };
  enum class EMedal {
    None = 0,
    Finished = 1,
    Bronze = 2,
    Silver = 3,
    Gold = 4,
    Author = 5,
  };
  const string CampaignId; // Maniascript
  MwId CollectionId;
  MwId IconId;
  wstring Name;
  EType Type;
  uint Index;
  EUnlockType UnlockType;
  ERequiredPlayersCount RequiredPlayersCount;
  wstring UnlockedByCampaign;
  uint NbMedals;
  uint NbBronzeMedals;
  uint NbSilverMedals;
  uint NbGoldMedals;
  uint NbAuthorMedals;
  const EMedal Medal;
  MwBuffer<CGameCtnChallengeGroup*> MapGroups; // Maniascript
  void AddChallengeGroup();
  wstring ModeScriptName;
  uint GetMapGroupCount(); // Maniascript
  CGameCtnChallengeGroup* GetMapGroup(uint Index); // Maniascript
  CGameCtnChallengeInfo* GetNextMap(CGameCtnChallengeInfo* CurrentMapInfo); // Maniascript
  string ScoreContext; // Maniascript
  bool OfficialRecordEnabled; // Maniascript
};

struct CGameCtnGhostInfo : public CMwNod {
  const uint Time;
  const uint StuntsScore;
  const string Login;
  const wstring Nickname;
};

struct CGameCtnGhost : public CGameGhost {
  CGameCtnGhost();

  MwId ModelIdentName;
  MwId ModelIdentAuthor;
  UnnamedEnum ModelIdentCollection;
  const uint EventsDuration;
  string GhostLogin;
  wstring GhostNickname;
  wstring GhostAvatarName;
  string RecordingContext;
  vec3 LightTrailColor;
  const uint RaceTime; // Maniascript
  const uint NbRespawns; // Maniascript
  const uint StuntsScore; // Maniascript
  const MwId Validate_ChallengeUid;
  const string Validate_ExeVersion;
  const uint Validate_ExeChecksum;
  const string Validate_TitleId;
  const string Validate_RaceSettings;
  const uint Validate_OsKind;
  const uint Validate_CpuKind;
};

// File extension: 'TMReplay.Gbx'
struct CGameCtnReplayRecord : public CMwNod {
  CGameCtnReplayRecord();

  CGameCtnMediaClip* const Clip;
  const MwBuffer<CGameCtnGhost*> Ghosts;
  CGameCtnChallenge* Challenge;
  const uint Duration;
  void StopRecord();
  CFuncSegment* HumanTimeToGameTimeFunc;
};

struct CGameCtnReplayRecordInfo : public CGameFid {
  const MwId ChallengeId;
  const string MapUid; // Maniascript
  const MwId CollectionId;
  const uint BestTime;
  const wstring PlayerNickname;
  const string PlayerLogin;
};

struct CGamePlayerOfficialScores : public CMwNod {
  CGamePlayerOfficialScores();

};

struct CGameLadderRankingLeague : public CGameLadderRanking {
};

struct CGameLadderRankingPlayer : public CGameLadderRanking {
};

struct CGameLadderRankingSkill : public CGameLadderRanking {
  const wstring DynamicLeagueName;
  CSystemData* const DynamicLeagueLogo;
};

// File extension: 'Frame.Gbx'
struct CGameControlCard : public CControlFrame {
  CGameControlCard();

  CMwNod* DisplayedNod;
  void ForceReconfig();
  void ConnectChilds();
  void DisconnectChilds();
  bool UseDelays;
  bool UseOwnData;
  bool SelectionEnabled;
  bool CardFocused;
  bool CardSelected;
};

// File extension: 'CtnCtlCardMng.Gbx'
struct CGameControlCardManager : public CMwNod {
  CGameControlCardManager();

  const MwBuffer<CGameControlDataType*> DataTypes;
};

// File extension: 'CtnDispType.Gbx'
struct CGameControlDataType : public CMwNod {
  CGameControlDataType();

  string Name;
  CGameControlCard* CardTemplate;
};

struct CGameCtnMediaBlockCameraSimple : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraSimple();

  const uint KeyCache;
};

struct CGameCtnMediaBlockCameraOrbital : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraOrbital();

  iso4 BaseLocation;
};

// File extension: 'CtnMediaBlockCamPath.gbx'
struct CGameCtnMediaBlockCameraPath : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraPath();

  const bool IsPathDirty;
  CFuncKeysTrans* Path;
  const MwArray<float> Lengths;
  const float CurveLength;
  const float TotalWeight;
};

// File extension: 'CtnMediaBlockCamCustom.gbx'
struct CGameCtnMediaBlockCameraCustom : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraCustom();

  const uint KeyCache;
};

struct CGameCtnMediaBlockCameraEffect : public CGameCtnMediaBlock {
};

// File extension: 'CtnMediaBlockCamFxShake.gbx'
struct CGameCtnMediaBlockCameraEffectShake : public CGameCtnMediaBlockCameraEffect {
  CGameCtnMediaBlockCameraEffectShake();

  CGameControlCameraEffect* const Effect;
};

// File extension: 'GameCtnMediaBlockImage.gbx'
struct CGameCtnMediaBlockImage : public CGameCtnMediaBlock {
  CGameCtnMediaBlockImage();

  CPlugBitmap* Bitmap;
  CControlEffectSimi* const Effect;
  CControlBase* const Mobil;
};

// File extension: 'CtnMediaBlockMusicFx.gbx'
struct CGameCtnMediaBlockMusicEffect : public CGameCtnMediaBlock {
  CGameCtnMediaBlockMusicEffect();

  uint Dummy;
};

// File extension: 'GameCtnMediaBlockSound.gbx'
struct CGameCtnMediaBlockSound : public CGameCtnMediaBlock {
  CGameCtnMediaBlockSound();

  CPlugSound* Sound;
  CAudioSource* AudioSource;
  const bool IsBlockPlaying;
  bool IsLooping;
  bool IsMusic;
  bool StopWithClip;
  uint PlayCount;
  void OnParamsModified();
};

// File extension: 'GameCtnMediaBlockText.gbx'
struct CGameCtnMediaBlockText : public CGameCtnMediaBlock {
  CGameCtnMediaBlockText();

  wstring Text;
  CControlBase* const Mobil;
  CControlEffectSimi* const Effect;
};

// File extension: 'GameCtnMediaBlockTrails.gbx'
struct CGameCtnMediaBlockTrails : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTrails();

};

struct CGameCtnMediaBlockTransition : public CGameCtnMediaBlock {
};

// File extension: 'CtnMediaBlockTransFade.gbx'
struct CGameCtnMediaBlockTransitionFade : public CGameCtnMediaBlockTransition {
  CGameCtnMediaBlockTransitionFade();

  CControlBase* const Mobil;
  vec3 Color;
};

struct CGameCtnMediaBlockUiSimpleEvtsDisplay_deprecated : public CGameCtnMediaBlockUi {
};

struct CGameCtnMediaClipViewer : public CGameSwitcherModule {
  CGameCtnMediaClipViewer();

  const bool DoInputs;
  enum class EStatus {
    Running = 0,
    Exit = 1,
    Next = 2,
  };
  const EStatus ViewerStatus;
  CGameCtnMediaClip* const Clip;
  CGameCtnMediaClipPlayer* const ClipPlayer;
  float PlaySpeed;
  CGameCtnMediaClipGroup* const ClipGroup;
  CGameCtnMediaClip* const ClipGroupClip;
  CGameCtnMediaClipPlayer* const ClipGroupPlayer;
  uint ClipIndexInGroup;
  float ClipGroupStartTime;
};

struct CGameCursorBlock : public CMwNod {
  CGameCursorBlock();

  enum class CardinalDirEnum {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  enum class AdditionalDirEnum {
    P0deg = 0,
    P15deg = 1,
    P30deg = 2,
    P45deg = 3,
    P60deg = 4,
    P75deg = 5,
  };
  nat3 Coord;
  nat3 Subdiv;
  nat3 SubdivFactors;
  ECardinalDirEnum Dir;
  EAdditionalDirEnum AdditionalDir;
  float Pitch;
  float Roll;
  vec3 Color;
  float BrightnessFactor;
  CGameOutlineBox* const CursorBox;
  CPlugTree* const CursorBoxShadow;
  CSceneMobil* const BlockMobil;
  CSceneMobil* const BlockClipsMobil;
  CSceneMobil* const BlockHelperMobil;
  CSceneMobil* const PickerMobil;
  CSceneMobil* const PickerHelperMobil;
  CPlugTree* const DirectionalArrow;
  vec3 CanPlaceColor;
  vec3 CanChangeVariantColor;
  vec3 CanJoinColor;
  vec3 CannotPlaceNorJoinColor;
  vec3 NothingToDoColor;
  vec3 GhostBlockColor;
  vec3 VariantForcedColor;
};

struct CGameCtnEditor : public CGameEditorParent {
  CControlContainer* FrameRoot;
  CGameEditorMainPlugin* const MainPLugin;
};

struct CGameCtnMediaTracker : public CGameCtnEditor {
  UnnamedEnum EditionMode;
  CGameCtnMediaClipPlayer* const MediaClipPlayer;
  CGameSafeFrame* const SafeFrame;
  bool IsDisplayPlayerNames;
  void SafeFrameCreate();
  void SafeFrameDestroy();
  CGameControlCameraFree* const ControlCamFree;
  CGameCtnMediaBlockEditor* const BlockEditor;
  void Undo();
  void Redo();
  void TimePlay();
  void TimeStop();
  void TimePlayFromStart();
  void TimeSlowForward();
  void TimeNormalForward();
  void TimeFirstFrame();
  void TimeLastFrame();
  void ClipInsert();
  void ClipRemove();
  void TrackInsert();
  void TrackRemove();
  void TrackDuplicate();
  void BlockInsert();
  void BlockRemove();
  void BlockCutBefore();
  void BlockCutAfter();
  void KeyInsert();
  void KeyRemove();
  void KeyRemoveAll();
  void StartIsCycling();
  void EndIsCycling();
  void CameraKeyInsert();
  void CutBefore();
  void CutAfter();
  void IncTimeAndInsertKey();
  void MoveFaster();
  void MoveSlower();
  void SafeFrameSwitch();
  void SafeFrameVisibleSwitch();
  void NextKey();
  void PrevKey();
  void FullScreenSwitch();
  void ActionShootScreen();
  void EditClipConfigScript();
  void BlockHelpersSwitch();
  void TriggerModeValidate();
  void TriggerModeUpdateRef();
  void RecordGhostModeStopWait();
  void CursorUp();
  void CursorDown();
  void CursorRotate();
  void CursorSetHeightFromPickedPoint();
  void ClipGroupPreviewStop();
  void OpenInputList();
  void ButExit();
  void ButShootVideo();
  void ButShootScreen();
  void ButRecordGhost();
  void ButComputeShadows();
  void ButPreview();
  void But3dPreview();
  void ButSave();
  void ButExportClip();
  void ButExportClip_OnOk();
  void ButImportClip();
  void ButImportClip_OnOk();
  void ButImportGhosts();
  void ButImportGhosts_OnOk();
  void ButImportAction();
  void ButImportAction_OnOk();
  float OrientWeight;
  float OrientWeightDist;
  int ReplayTime;
  int BlockStart;
  int BlockEnd;
  void ButPrevFrame();
  void ButNextFrame();
  void ClipRename();
  void TrackRename();
  void ClipRemove_Ok();
  void TrackRemove_Ok();
  void BlockRemove_Ok();
  void ButTriggerMode();
  void ButPreviewClipGroup();
  uint MediaTrackerGhostRefIndex;
  uint MediaTrackerGhosts;
  void ButClipCam();
  void ButFreeCam();
  bool ButIsLooping;
  const bool ClipKeepPlaying;
  const bool ClipIsCycling;
  bool ClipIsInside;
  bool ClipStopOnRespawn;
  enum class EClipTriggerCond {
    None = 0,
    RaceTime_L = 1,
    RaceTime_G = 2,
    Already_Triggered = 3,
    Speed_L = 4,
    Speed_G = 5,
    Not_Already_Triggered = 6,
    Max_play_count = 7,
    Random_once = 8,
    Random = 9,
  };
  EClipTriggerCond ClipTriggerCond;
  float ClipTriggerCondValue;
  bool TrackKeepPlaying;
  bool TrackIsCycling;
  uint ClipMaxPlayedCount;
  const string ActionBinding;
  void ButShowFullTimeLine();
  void ButSmoothSpeed();
  float EntryPlaySpeed;
  void ButResetRoll();
  void ButResetDir();
  void ButCamCustomAdvancedParams();
  void ButCamPathAdvancedParams();
  CControlSimi2* const ControlSimi2;
  MwBuffer<CGameCtnMediaClip*> Clips;
  MwBuffer<CGameCtnMediaTrack*> Tracks;
  CGameCtnMediaTrack* SelTrack;
  wstring TrackName;
  wstring TrackText;
  float TextPosX;
  float TextPosY;
  float TextDepth; // Range: 0 - 1
  float TextRot;
  float TextScaleX;
  float TextScaleY;
  float TextOpacity; // Range: 0 - 1
  const wstring TrackImage;
  float ImagePosX;
  float ImagePosY;
  float ImageDepth; // Range: 0 - 1
  float ImageRot;
  float ImageScaleX;
  float ImageScaleY;
  float ImageOpacity; // Range: 0 - 1
  void ButChooseImage();
  void ButChooseSound();
  float TransFadeOpacity;
  float CamPosXCamCustom;
  float CamPosYCamCustom;
  float CamPosZCamCustom;
  float CamPitchCamCustom;
  float CamYawCamCustom;
  float CamRollCamCustom;
  float CamFovCamCustom; // Range: 1 - 175
  const uint CamAnchorCamCustom;
  const wstring CamAnchorNameCamCustom;
  bool CamIsAnchorVisibleCamCustom;
  bool CamUseAnchorOrientationCamCustom;
  const uint CamTargetCamCustom;
  const wstring CamTargetNameCamCustom;
  float CamTargetPosXCamCustom;
  float CamTargetPosYCamCustom;
  float CamTargetPosZCamCustom;
  enum class ECamInterpCamCustom {
    _CameraInterp_None = 0,
    _CameraInterp_Hermite = 1,
    _CameraInterp_Linear = 2,
    _CameraInterp_FixedTangent = 3,
  };
  ECamInterpCamCustom CamInterpCamCustom;
  float CamLeftTangentXCamCustom;
  float CamLeftTangentYCamCustom;
  float CamLeftTangentZCamCustom;
  float CamRightTangentXCamCustom;
  float CamRightTangentYCamCustom;
  float CamRightTangentZCamCustom;
  float CamNearZCamCustom;
  float CamPosXCamPath;
  float CamPosYCamPath;
  float CamPosZCamPath;
  float CamPitchCamPath;
  float CamYawCamPath;
  float CamRollCamPath;
  float CamFovCamPath; // Range: 1 - 175
  const uint CamAnchorCamPath;
  const wstring CamAnchorNameCamPath;
  float CamWeightCamPath;
  bool CamIsAnchorVisibleCamPath;
  bool CamUseAnchorOrientationCamPath;
  const uint CamTargetCamPath;
  const wstring CamTargetNameCamPath;
  float CamTargetPosXCamPath;
  float CamTargetPosYCamPath;
  float CamTargetPosZCamPath;
  float CamNearZCamPath;
  void ButCamAnchorPrev();
  void ButCamAnchorNext();
  void ButCamTargetPrev();
  void ButCamTargetNext();
  const string CamGameCur;
  void ButCamGamePrev();
  void ButCamGameNext();
  const uint CamGameTarget;
  const wstring CamGameTargetName;
  void ButCamGameTargetPrev();
  void ButCamGameTargetNext();
  const wstring VehicleLightTargetName;
  void ButVehicleLightTargetPrev();
  void ButVehicleLightTargetNext();
  float TimeValue;
  float TimeTangent;
  float FxColorsFxIntensity; // Range: 0 - 1
  UnnamedEnum FxColorsZMode;
  float FxColorsZ_Near;
  float FxColorsInverseRGB; // Range: 0 - 1
  float FxColorsHue; // Range: 0 - 1
  float FxColorsSaturation; // Range: -1 - 1
  float FxColorsBrightness; // Range: -0.5 - 0.5
  float FxColorsContrast; // Range: -0.6 - 0.6
  float FxColorsModulateR; // Range: 0.2 - 1
  float FxColorsModulateG; // Range: 0.2 - 1
  float FxColorsModulateB; // Range: 0.2 - 1
  float FxColorsIntensityF; // Range: 0 - 1
  float FxColorsZ_Far;
  float FxColorsInverseRGBF; // Range: 0 - 1
  float FxColorsHueF; // Range: 0 - 1
  float FxColorsSaturationF; // Range: -1 - 1
  float FxColorsBrightnessF; // Range: -0.5 - 0.5
  float FxColorsContrastF; // Range: -0.6 - 0.6
  float FxColorsModulateRF; // Range: 0.2 - 1
  float FxColorsModulateGF; // Range: 0.2 - 1
  float FxColorsModulateBF; // Range: 0.2 - 1
  float FxBlurDepthLensSize;
  bool FxBlurDepthForceZ;
  float FxBlurDepthFocusZ;
  wstring FxCameraMapFileName;
  void ButFxCameraMapScreenShot();
  void ButFxCameraMapReloadFile();
  float CamFxShakeIntensity;
  float CamFxShakeSpeed;
  float CamFxScriptA;
  float CamFxScriptB;
  float CamFxScriptC;
  float StereoSepMax; // Range: 0 - 1
  float StereoSepUpToMax; // Range: 0 - 1
  float StereoScreenDist; // Range: 0.5 - 500
  float DofFocusZ;
  float DofLensSize;
  const wstring DofTargetName;
  void ButDofTargetPrev();
  void ButDofTargetNext();
  float DofTargetPosX;
  float DofTargetPosY;
  float DofTargetPosZ;
  float ToneMapExposure;
  float ToneMapMaxHDR;
  float ToneMapLightTrailScale;
  uint ToneMapFilmCurve;
  float BloomHdrFxIntensity;
  float BloomHdrStreaksIntensity;
  float BloomHdrStreaksAttenuation;
  float DirtyLensIntensity;
  const wstring ColorGradingName;
  float ColorGradingIntensity;
  void ButChooseColorGrading();
  uint ColoringCapturableIndex;
  float ColoringCapturableHue;
  float ColoringCapturableGauge;
  uint ColoringCapturableEmblemIndex;
  bool ColoringCapturableEmblemBlink;
  uint ColoringBaseBaseIndex;
  float ColoringBaseHue;
  float ColoringBaseIntensity;
  CGameCtnMediaBlockCameraEffectInertialTracking* const SelBlockCamFxTracking;
  float TimeSpeedValue;
  const wstring TrackSound;
  bool SoundIsMusic;
  bool SoundStopWithClip;
  float SoundVolume; // Range: 0 - 1
  float SoundPan; // Range: -1 - 1
  float SoundPosX;
  float SoundPosY;
  float SoundPosZ;
  bool SoundLooping;
  uint SoundPlayCount;
  const wstring SoundTargetName;
  void ButSoundTargetPrev();
  void ButSoundTargetNext();
  bool AudioToSpeak;
  bool ShowHUD;
  bool ShowPing;
  bool ShowCrossHair;
  float CrossHairSizeScale; // Range: 0.1 - 2
  float MusicVolume; // Range: 0 - 1
  float GlobalSoundVolume; // Range: 0 - 1
  wstring GhostName;
  const wstring GhostSkin;
  const uint GhostRaceTime;
  float GhostStartOffset;
  bool GhostNoDamage;
  bool GhostForceLight;
  bool GhostForceTeamColor;
  float GhostLightIntens; // Range: 0 - 1
  void BlockGhost_SetAsCameraTarget();
  void ButGhostOrEntitySkinSelect();
  bool RenderHq;
  bool RenderHqSoftShadows;
  uint RenderHqCountSS;
  void ButFrameKeyAdvanced();
  bool DrawGhostPaths;
  bool DrawCameraPaths;
  bool GhostPathTranslationC1;
  const wstring GhostSkinSimple;
  void ButGhostSkinSelectSimple();
  CMwNod* DebugNod;
  wstring ManialinkURL;
  wstring ManialinkInterface;
  bool ManialinkInterfaceShow;
  float FogDistance;
  float FogIntensity; // Range: 0 - 1
  float FogSkyIntensity; // Range: 0 - 1
  float FogSliderBlendF; // Range: 0 - 1
  float CloudsSliderOpacity; // Range: 0 - 1
  float CloudsSliderSpeedScale;
  CMwNod* const TriggerOutlineBox;
  CPlugBitmap* const Shoot_Bitmap;
  void ButtonEditCameraEffectScript();
  bool DynaCam_Helpers;
  bool ButtonScreenCaptures;
};

struct CGamePopUp : public CMwNod {
  void OnSelect();
  void OnCancel();
};

struct CGameCtnEdControlCam : public CMwNod {
};

struct CGameCtnEdControlCamCustom : public CGameCtnEdControlCam {
  CGameCtnEdControlCamCustom();

};

struct CGameCtnEdControlCamPath : public CGameCtnEdControlCam {
  CGameCtnEdControlCamPath();

};

struct CGameSafeFrame : public CMwNod {
  CGameSafeFrame();

  uint SafeFrameSizeX;
  uint SafeFrameSizeY;
  float Zoom;
  vec2 Position;
  bool AutoZoom;
};

struct CGameSafeFrameConfig : public CMwNod {
  CGameSafeFrameConfig();

  vec4 Color;
  vec4 LinesColor;
};

struct CGameCtnPainter : public CMwNod {
  CGameCtnPainter();

  UnnamedEnum PainterMode;
  CSceneMobil* const PlayerMobil;
  CGameControlCameraOrbital3d* const ControlCameraOrbital3d;
  CPlugShader* PaintSolidShader;
  CPlugSolid* PaintSolid;
  CPlugBitmap* const IconSkinBitmap;
  CPlugBitmap* const OldBitmap;
  CPlugBitmap* const BitmapToPaintSrc;
  CPlugBitmap* const BitmapToPaintDst;
  CGameBadgeStickerSlots* const BadgeStickerSlots;
  bool ButtonFillModeEnabled;
  bool ButtonBrushModeEnabled;
  bool ButtonStickerModeEnabled;
  bool ButtonLayerModeEnabled;
  bool ButtonTeamModeEnabled;
  vec3 PaintColor;
  float Scale; // Range: 0 - 1
  float Angle; // Range: -3 - 3
  float Shininess; // Range: 0 - 1
  float Transparency; // Range: 0 - 1
  bool ButtonPaintSymModeSelected;
  bool ButtonColorPickerModeSelected;
  void OnOkInHelpFrame();
  void OnButtonCurrentColorClicked();
  void OnButtonCustomColor0Clicked();
  void OnButtonCustomColor1Clicked();
  void OnButtonCustomColor2Clicked();
  void OnButtonCustomColor3Clicked();
  void OnButtonCustomColor4Clicked();
  void HasToAlignSticker();
  void ImageQuarterRotLeft();
  void ImageQuarterRotRight();
  void EngageColorChooserMode();
  void Undo();
  void Redo();
  void SaveSkin();
  void SaveSkinAs();
  void SaveSkinAs_OnOk();
  void ReloadSkin();
  void WantHelpDialog();
  bool ButtonPaintWithTextEnabled;
  wstring TextToCreateBitmap;
  CPlugBitmap* BitmapText;
};

struct CGameControlGrid : public CControlGrid {
  CGameControlGrid();

  uint MaxPerColumn;
  uint MaxPerRow;
  uint FastNextPageCount;
  uint FastPreviousPageCount;
  uint ForcedPageCount;
  bool ForceHideArrows;
  bool ForceHidePageCounter;
  bool HaveLocalData;
  bool HideLocalDataIfNone;
  uint CurrentPage;
  uint PageCount;
  void UpdatePageCount();
  void UpdatePageCounter();
  void UpdateNavigationButtons();
  void UpdateLocalData();
  void OnCurrentPageChanged();
  CControlButton* ButtonFirstPage;
  CControlButton* ButtonFastPreviousPage;
  CControlButton* ButtonPreviousPage;
  CControlEntry* EntryPageCounter;
  CControlButton* ButtonNextPage;
  CControlButton* ButtonFastNextPage;
  CControlButton* ButtonLastPage;
  CControlBase* BaseLocalData;
  void OnFirstPage();
  void OnFastPreviousPage();
  void OnPreviousPage();
  void OnNextPage();
  void OnFastNextPage();
  void OnLastPage();
  string StrPageCounter;
  const uint Remote_TotalCount;
  const string Remote_SpecificOverTotalCount;
  CGameRemoteBufferPool* const Remote_Pool;
};

// File extension: 'GameGridCards.Gbx'
struct CGameControlGridCard : public CGameControlGrid {
  CGameControlGridCard();

  CGameControlCardManager* CardManager;
  bool PushByColumns;
  bool LeftToRight;
  bool UpToDown;
  bool CacheAtCreation;
  bool AreCardsReadOnly;
  bool UseCustomSelection;
  bool FillWithDefault;
  string DefaultCardName;
  MwBuffer<CMwNod*> NodsToDisplay;
  MwBuffer<CGameControlCard*> NodCards;
  void UpdateFromDatas();
  void UpdateOnlyCards();
  void PrecacheAll();
  void CleanCaches();
};

struct CGameCtnNetServerInfo : public CGameNetServerInfo {
  const wstring ServerName; // Maniascript
  const string ServerLogin; // Maniascript
  const string JoinLink; // Maniascript
  const wstring Comment; // Maniascript
  const string ServerVersionBuild; // Maniascript
  const uint PlayerCount; // Maniascript
  const uint MaxPlayerCount; // Maniascript
  const uint SpectatorCount; // Maniascript
  const uint MaxSpectatorCount; // Maniascript
  const float PlayersLevelMin; // Maniascript
  const float PlayersLevelAvg; // Maniascript
  const float PlayersLevelMax; // Maniascript
  const uint ServerLevel; // Maniascript
  const wstring ServerLevelText; // Maniascript
  const wstring ModeName; // Maniascript
  const float LadderServerLimitMax; // Maniascript
  const float LadderServerLimitMin; // Maniascript
  const MwBuffer<wstring> PlayerNames; // Maniascript
  const MwBuffer<wstring> ChallengeNames; // Maniascript
  const uint NbChallenges; // Maniascript
  const bool HasBuddies; // Maniascript
  const bool IsFavourite; // Maniascript
  const bool IsLobbyServer; // Maniascript
  const bool IsPrivate; // Maniascript
  const bool IsPrivateForSpectator; // Maniascript
  const string SendToServerAfterMatchUrl; // Maniascript
  wstring ServerName_Menu;
  wstring Comment_Menu;
  const string PlayerCountOverMax;
  const UnnamedEnum LadderMode;
  const wstring PlayerName;
  const bool IsBuddy_HackForServerInfoUsedAsPlayer;
  bool AllowDownload;
  bool DisableHorns;
  bool DisableServiceAnnounces;
  string ClientUIRootModuleUrl;
  uint HideServer;
  UnnamedEnum ValidationMode;
  UnnamedEnum ValidationAction_Invalid;
  UnnamedEnum ValidationAction_NA;
  bool IsWarmUp;
  const uint PlaygroundRoundNum;
  const uint PlaygroundRoundNumToPlay;
  const string GameStateName;
  void TeamProfilesAvoidHueOverlap();
  CGameTeamProfile* TeamProfile0;
  CGameTeamProfile* TeamProfile1;
  CGameTeamProfile* TeamProfile2;
  string ForcedClubLinkUrl1;
  string ForcedClubLinkUrl2;
  uint NextMaxPlayerCount;
  uint NextMaxSpectatorCount;
  UnnamedEnum NextLadderMode;
  enum class EVehicleNetQuality {
    Low = 0,
    High = 1,
  };
  EVehicleNetQuality NextVehicleNetQuality;
  string FirstPartySessionId;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnChallengeInfo : public CGameControlCard {
  CGameControlCardCtnChallengeInfo();

  const MwBuffer<CGameLeague*> Groups;
  uint LeagueNameMaxCharsCount;
  const wstring StrFullLeagueName;
  const wstring StrPlayerLeagueRanking;
  const wstring StrChallengeName;
  const wstring StrChallengeAuthor;
  const wstring StrChallengeComments;
  const wstring StrCollectionName;
  const wstring StrCopperPrice;
  const wstring StrPlayerName;
  const wstring StrBronzeScore;
  const wstring StrSilverScore;
  const wstring StrGoldScore;
  const wstring StrAuthorScore;
  const wstring StrPlayerScore;
  const wstring StrPlayerOfficialRecord;
  const string StrCopperString;
  const wstring StrLeagueName;
  const uint Medals;
  const uint TrainingMedal;
  const uint OfficialMedal;
  const uint NextMedalTime;
  const uint PlayerLeagueRanking;
  const uint PlayerSkillScore;
  CPlugBitmap* const BmpLeagueLogo;
  CPlugBitmap* const BmpMood;
  CPlugBitmap* const BmpMod;
  CPlugBitmap* const BmpBannerGrey;
  CPlugBitmap* const BmpBanner;
  void OnRemoveChallenge();
};

// File extension: 'Frame.Gbx'
struct CGameControlCardGeneric : public CGameControlCard {
  CGameControlCardGeneric();

  uint Type;
  string Str1;
  string Str2;
  string Str3;
  string Str4;
  string Str5;
  string Str6;
  string Str7;
  const wstring StrInt1;
  const wstring StrInt2;
  const wstring StrInt3;
  const wstring StrInt4;
  const wstring StrInt5;
  const wstring StrInt6;
  const wstring StrInt7;
  uint Nat1;
  uint Nat2;
  uint Nat3;
  uint Nat4;
  uint Nat5;
  uint Nat6;
  float Real1;
  float Real2;
  float Real3;
  CMwNod* Nod1;
  CMwNod* Nod2;
  CMwNod* Nod3;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardLeague : public CGameControlCard {
  CGameControlCardLeague();

  const wstring StrPath;
  const wstring StrName;
  const string StrLogoUrl;
  CPlugBitmap* Logo;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnNetServerInfo : public CGameControlCard {
  CGameControlCardCtnNetServerInfo();

  enum class ELadderServerType {
    _ServerLevel_Amateurs_place = 1,
    _ServerLevel_Serious_challengers = 2,
    _ServerLevel_Competitive_racers = 3,
    _ServerLevel_Pro_racing = 4,
    _ServerLevel_Races_of_champions = 5,
    _ServerLevel_Beginners = 6,
  };
  const wstring StrPath;
  const wstring StrPlayerName;
  const wstring StrServerName;
  const wstring StrHostName;
  const wstring StrPureServerName;
  const wstring StrComment;
  const string StrPlayersCount;
  const string StrPlayersCountMax;
  const string StrSpectatorsCount;
  const string StrSpectatorsCountMax;
  const wstring StrLadderServerLimitMin;
  const wstring StrLadderServerLimitMax;
  const uint LadderMode;
  const uint VehicleQuality;
  const uint RaceType;
  const bool HaveBuddies;
  const bool IsBuddy;
  const bool IsFull;
  const bool IsFullSpectator;
  const bool IsAllowingDownload;
  const bool IsPrivate;
  const bool IsPrivateForSpectator;
  CPlugBitmap* Logo;
  const float PlayersCountRatio;
  const float SpectatorsCountRatio;
  const uint Level;
  const uint State;
  const ELadderServerType LadderServerType;
  void OnChangeBuddyState();
  void OnChangeBuddyState_SetBuddy();
  void OnChangeBuddyState_SetNotBuddy();
  void OnChangeFavouriteState();
  void OnChangeFavouriteState_SetFavourite();
  void OnChangeFavouriteState_SetNotFavourite();
};

// File extension: 'Frame.Gbx'
struct CGameControlCardLadderRanking : public CGameControlCard {
  CGameControlCardLadderRanking();

  const uint ChildsCount;
  const uint Ranking;
  const uint Ranking2;
  const uint Medals;
  const uint Medals2;
  const uint Score2;
  const wstring StrName;
  const wstring StrPath;
  const wstring StrScore;
  const float ManiaStarsRatio;
  const string StrLogin;
  const string StrLogoUrl;
  const string StrSubGroupLogoUrl;
  CPlugBitmap* Logo;
  CPlugBitmap* SubGroupLogo;
  bool DoSelectionOnChildsCount;
  bool UseTop3Medals;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardMessage : public CGameControlCard {
  CGameControlCardMessage();

  string StrSender;
  string StrReceiver;
  const string StrSendDate;
  wstring StrSubject;
  wstring StrMessage;
  uint Donation;
  void OnCheckLogin();
};

// userName: 'ActionFxVis'
struct CGameActionFxVis : public CMwNod {
};

// File extension: 'Frame.Gbx'
struct CGameControlCardProfile : public CGameControlCard {
  CGameControlCardProfile();

  const wstring StrLogin;
  wstring StrNickName;
  CPlugBitmap* Avatar;
  void OnChooseProfile();
  void OnRemoveProfile();
  void OnConnectProfile();
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnReplayRecordInfo : public CGameControlCard {
  CGameControlCardCtnReplayRecordInfo();

  const wstring StrName;
  const uint Time;
  bool ShortName;
  void OnRemoveReplayRecord();
};

struct CGameCtnMenus : public CGameSwitcherModule {
  CGameMenu* Menus;
  CGameMenu* InGameDialogs;
  CGameMenu* Dialogs;
  CGameMenu* SystemDialogs;
  CGameManialinkScriptHandler* const ManialinkScriptHandlerMenus;
  string PasswordString;
  string PasswordString2;
  string PasswordString3;
  float RankingScrollDelay;
  float RankingScrollSpeed;
  string SelectedName;
  wstring SelectedNickname;
  wstring SelectedAvatarName;
  CGameCtnChallengeInfo* const SelectedChallengeInfo;
  const MwBuffer<CGameCtnChapter*> EnvironmentChapters;
  void DialogMessenger_Update();
  void DialogMessenger_UpdateButtons();
  void DialogMessenger_Clean();
  void DialogMessenger_NotifyNewMessages();
  void DialogMessenger_OnNewMessage();
  void DialogMessenger_OnShowInbox();
  void DialogMessenger_OnShowOutbox();
  void DialogMessenger_OnSave();
  void DialogMessenger_OnSend();
  void DialogMessenger_OnReply();
  void DialogMessenger_OnSendAll();
  void DialogMessenger_OnRemove();
  void DialogMessenger_OnRemoveAll();
  void DialogMessenger_OnQuit();
  void Dialog_OnValidate_InGame();
  void Dialog_OnCancel_InGame();
  void Dialog_OnValidate_Normal();
  void Dialog_OnCancel_Normal();
  void DialogJoin_OnJoinAsSpectator();
  const MwBuffer<CMwNod*> DialogList_Nods;
  void DialogCardGrid_OnOk();
  void DialogCardGrid_OnCancel();
  void DialogCardGrid_OnRefresh();
  void DialogRefereeStatus_OnCancel();
  const MwArray<wstring> DialogRefereeStatus_Message;
  wstring DialogChooseSkin_Name;
  bool DialogChooseSkin_SaveAsDds;
  uint DialogChooseSkin_SelectIndex;
  CGameCtnArticle* DialogChooseSkin_Article;
  const MwBuffer<CControlListItem*> DialogChooseSkin_SkinsItem;
  string TempLogin;
  string TempPassword;
  bool CheckPassword;
  string TempEMail;
  void DialogConnect_OnRememberPassword();
  void DialogConnect_OnForgotPassword();
  void DialogConnect_OnConnect();
  void DialogConnect_OnCancel();
  void DialogMailAccount_OnOk();
  void DialogMailAccount_OnCancel();
  void DialogGrid_OnSelect();
  void DialogGrid_OnNextPage();
  void DialogGrid_OnPrevPage();
  void DialogGrid_OnOk();
  void DialogGrid_OnCancel();
  void DialogGrid_OnRemove();
  void DialogGrid_OnAdd();
  uint DialogGrid_CurPage;
  void DialogChoosePackDesc_OnNextPage();
  void DialogChoosePackDesc_OnPrevPage();
  void DialogChoosePackDesc_DrawCurPage();
  void DialogChoosePackDesc_OnAddItem();
  uint DialogChoosePackDesc_CurPage;
  void DialogConfirmRequest_OnOk();
  void DialogConfirmRequest_OnCancel();
  void DialogInputSettings();
  void DialogInputSettings_OnClose();
  void DialogInputSettings_OnDeviceSettings();
  void DialogInputSettings_OnPlayerInputs();
  void DialogInputSettings_OnStandardInputs();
  void DialogInputSettings_OnDeviceSettingsApply();
  bool DialogInputSettingsApplyOnlyToThisVehicle;
  void DialogInputSettings_OnBindingsUnbindKey();
  void DialogInputSettings_OnBindingsResetToDefaults();
  float DialogInputSettings_AnalogDeadZone; // Range: 0 - 0.25
  float DialogInputSettings_AnalogSensitivity; // Range: 0.1 - 10
  bool DialogInputSettings_AnalogSteerV2;
  float DialogInputSettings_RumbleIntensity; // Range: 0 - 2
  float DialogInputSettings_CenterSpringIntensity; // Range: 0 - 1
  bool DialogInputSettings_MouseLookInvertY;
  UnnamedEnum DialogInputSettings_MouseReleaseKey;
  bool DialogInputSettings_MouseAccel;
  float DialogInputSettings_MouseScaleY; // Range: 0.1 - 3
  float DialogInputSettings_MouseScaleFreeLook; // Range: 0.1 - 3
  float DialogInputSettings_MouseAccelQuantity_NormalizedLog; // Range: 0 - 3
  bool DialogInputSettings_MouseSensitivities_EnableSpecific;
  float DialogInputSettings_MouseSensitivity_Default_Normalized; // Range: 0.1 - 10
  float DialogInputSettings_MouseSensitivity_Laser_Normalized; // Range: 0.1 - 10
  float DialogInputSettings_MouseSensitivity_Default_NormalizedLog; // Range: -1 - 1
  float DialogInputSettings_MouseSensitivity_Laser_NormalizedLog; // Range: -1 - 1
  void DialogInterfaceSettings_OnOk();
  void DialogInterfaceSettings_OnCancel();
  void DialogInterfaceSettings_OnCrosshairNameSelect();
  void DialogInterfaceSettings_OnCrosshairNameSelect_Yes();
  void DialogInterfaceSettings_OnCrosshairNameUseDefault();
  bool DialogInterfaceSettings_CrosshairCustomColor;
  float DialogInterfaceSettings_CrosshairSaturation; // Range: 0 - 1
  float DialogInterfaceSettings_CrosshairSize; // Range: 0.1 - 2
  float DialogInterfaceSettings_CrosshairOpacity; // Range: 0.1 - 1
  const wstring DialogInterfaceSettings_CrosshairName;
  bool DialogInterfaceSettings_AllyCustomColor;
  bool DialogInterfaceSettings_OppoCustomColor;
  float DialogInterfaceSettings_PlayerShieldScale; // Range: 0.1 - 2
  float DialogInterfaceSettings_BeaconOpacity; // Range: 0 - 1
  float DialogInterfaceSettings_BeaconSize; // Range: 0.1 - 5
  float DialogInterfaceSettings_BeaconDuration; // Range: 0.5 - 15
  bool DialogInterfaceSettings_BeaconAllowCustom;
  void DialogReportAbuse_OnOk();
  void DialogReportAbuse_OnCancel();
  bool DialogReportAbuse_UploadReplay;
  wstring DialogReportAbuse_Reason;
  void DialogStereoscopySettings_OnQuit();
  void DialogStereoscopySettings_Enable();
  void DialogStereoscopySettings_Disable();
  void DialogStereoscopySettings_DefaultValues();
  float DialogStereoscopySettings_DisplaySize_cm;
  float DialogStereoscopySettings_DisplaySize_inch;
  float DialogStereoscopySettings_Strength; // Range: 0 - 1
  uint DialogStereoscopySettings_StrengthPercent; // Range: 0 - 100
  float DialogStereoscopySettings_ScreenDist; // Range: 1 - 10
  float DialogStereoscopySettings_ColorFactor; // Range: 0 - 1
  UnnamedEnum DialogStereoscopySettings_Mode;
  bool DialogStereoscopySettings_HmdResetOnRaceReset;
  bool DialogStereoscopySettings_HmdGraphicOptions;
  float DialogStereoscopySettings_HmdWorldScale;
  void DialogStereoscopySettings_HmdDetect();
  void DialogChooseEnvironment_OnCancel();
  void DialogEditorMenu();
  void DialogEditorHelp_OnHelpers();
  void DialogEditorMenu_OnShootCollectorIcons();
  void DialogEditorMenu_OnSaveAllBlocks();
  void DialogEditorMenu_OnAutoAddTopBottomFreeClipsForAllBlockInfos();
  void DialogEditorMenu_OnAutoRemoveTopBottomFreeClipsForAllBlockInfos();
  void DialogEditorMenu_OnReturn();
  void DialogEditorAdditionalMenu();
  void DialogEditorAdditionalMenu_OnEditComments();
  void DialogEditorAdditionalMenu_OnChallengeType();
  void DialogEditorAdditionalMenu_OnPlayMap();
  void DialogEditorAdditionalMenu_OnObjectives();
  void DialogEditorAdditionalMenu_OnEditSnapCamera();
  void DialogEditorAdditionalMenu_OnSetDifficulty();
  void DialogEditorAdditionalMenu_OnChooseCustomMusic();
  void DialogEditorAdditionalMenu_OnComputeShadows();
  void DialogEditorAdditionalMenu_OnSetPassword();
  void DialogEditorAdditionalMenu_OnUnlockExperimentalFeatures();
  void DialogEditorAdditionalMenu_OnReturn();
  void DialogEditorAnimAdditionalMenu();
  void DialogEditorAnimAdditionalMenu_OnTestActionWithMode();
  void DialogEditorAnimAdditionalMenu_OnDefineMap();
  void DialogEditorAnimAdditionalMenu_OnReturn();
  void DialogComputeShadowsQuality_VeryFast();
  void DialogComputeShadowsQuality_Fast();
  void DialogComputeShadowsQuality_Default();
  void DialogComputeShadowsQuality_High();
  void DialogComputeShadowsQuality_Ultra();
  bool DialogComputeShadowsQuality_CheckSaveBounces;
  void DialogEditorHelp();
  void DialogEditorHelp_OnOk();
  void DialogActionMakerHelp();
  void DialogActionMakerHelp_OnOk();
  void DialogItemEditorHelp();
  void DialogItemEditorHelp_OnOk();
  void DialogEditorManialinkHelp();
  void DialogEditorManialinkHelp_OnOk();
  void DialogEditorManialinkOptions();
  void DialogEditorManialinkOptions_OnOk();
  void DialogEditorManialinkOptions_OnCancel();
  bool DialogEditorManialinkOptions_ButtonGrid;
  bool DialogEditorManialinkOptions_ButtonSnap;
  wstring DialogEditorManialinkOptions_GridStep;
  wstring DialogEditorManialinkOptions_RotationStep;
  void DialogEditorShiftTrack_OnDown();
  void DialogEditorShiftTrack_OnUp();
  void DialogEditorShiftTrack_OnLeft();
  void DialogEditorShiftTrack_OnRight();
  void DialogEditorShiftTrack_OnCancel();
  void DialogEditorShiftTrack_OnApply();
  int LastShiftX;
  int LastShiftZ;
  void DialogAskPassword();
  void DialogAskPassword_OnOk();
  void DialogAskPassword_OnCancel();
  wstring DialogAskPassword_String;
  void DialogDisplayChallengeCard();
  void DialogDisplayChallengeCard_OnOk();
  CPlugBitmap* ModBitmap;
  void DialogDisplayAnimCard();
  void DialogDisplayAnimCard_OnOk();
  void MenuMain();
  void MenuMain_OnQuit();
  void MenuEditors();
  void MenuEditors_OnLoadChallenge();
  void MenuEditors_OnLoadChallenge_OnSimple();
  void MenuEditors_OnLoadChallenge_OnAdvanced();
  void MenuTitleTools();
  void MenuCreateChallenge();
  void MenuCreateChallenge_OnSimple();
  void MenuCreateChallenge_OnAdvanced();
  void MenuLoadSimpleChallenge_OnSimple();
  void MenuLoadSimpleChallenge_OnAdvanced();
  void MenuChooseChallenge_OnSelect();
  void MenuChooseChallenge_OnBack();
  void MenuChooseChallenge_OnRefresh();
  void MenuChooseChallenge_OnOk();
  void MenuChooseChallenge_OnPathUp();
  void MenuChooseChallenge_OnOpenInExplorer();
  void MenuChooseChallenge_OnChangeLeague();
  void MenuChooseChallenge_OnChallengeRemoved();
  void MenuChooseChallenge_OnChallengeRemovedConfirmed();
  void MenuChooseChallenge_SelectOrUnselectAll();
  void MenuPlayChallenge_Edit();
  const uint MenuChooseChallenge_ChallengesCount;
  const bool MenuSoloLadderBoth_ShowSkillPointsOrElseMedals;
  bool MenuChooseChallenge_Flatten;
  bool MenuChooseChallenge_SortByName;
  bool MenuChooseChallenge_SortOrderAsc;
  bool SelectAll;
  const wstring HierarchyPath;
  wstring MenuChooseChallenge_FilterString;
  void MenuMultiLocal();
  void MenuMultiLocal_OnBack();
  void MenuMultiLocal_OnOk();
  void MenuMultiLocal_OnConfigureInputs();
  MwBuffer<bool> MenuMultiLocal_SetUsedPlayersCount;
  void MenuProfileAdvanced();
  void MenuProfile();
  void MenuProfile_Launch();
  void MenuProfile_OnChooseAvatar();
  void MenuProfile_OnChangeHorn();
  void MenuProfile_OnReceiveNews();
  void MenuProfile_OnGroupSelected();
  void MenuProfile_OnAddGroup();
  void MenuProfile_OnChangeZone();
  void MenuProfile_OnConvertAccount();
  void MenuProfile_OnDisconnectAccount();
  void MenuProfile_OnDisconnectAccountConfirmed();
  void MenuProfile_OnCheckModifications();
  void MenuProfile_OnChangePass();
  void MenuProfile_OnShowGameKeyInSteam();
  void MenuProfile_OnEditPodiumAnimWin();
  void MenuProfile_OnEditPodiumAnimLose();
  float MenuProfile_SoundPitch; // Range: 0.5 - 2
  bool MenuProfile_ParentalLock;
  CGameAvatar* const MenuProfile_Avatar;
  CGameLeague* const Menu_GroupToManage;
  const uint MenuProfile_GroupsCount;
  wstring MenuProfile_HornName;
  void DialogManageGroup_Create();
  void DialogManageGroup_ViewPlayers();
  void DialogManageGroup_Invite();
  void DialogManageGroup_Unsubscribe();
  void DialogManageGroup_SetDefault();
  void DialogViewPlayersInGroup_Ok();
  void DialogInviteToGroup_Add();
  void DialogInviteToGroup_Cancel();
  wstring DialogManageGroup_Name;
  string DialogManageGroup_Login;
  string DialogManageGroup_Pass;
  string DialogManageGroup_PassConfirm;
  void MenuPaintVehicle();
  void MenuPaintVehicle_OnBackConfirm();
  void MenuPaintVehicle_OnBack();
  CGameCtnPainter* Painter;
  void DialogRegisterAccountChoice_CreateNewAccount();
  void DialogRegisterAccountChoice_UseExistingAccount();
  void DialogRegisterAccountChoice_Offline();
  string DialogEula_AgeString;
  uint DialogEula_Age;
  bool DialogEula_EulaValidated;
  bool DialogEula_PrivacyPolicyValidated;
  void DialogEula_OnOk();
  void DialogEula_OnCancel();
  void DialogOnlineAccount_OnCancel();
  void DialogOnlineAccount_OnOk();
  void DialogOnlineAccount_OnCheckLogin();
  void DialogOnlineAccountInfo_OnCopyToClipboard();
  void DialogOnlineAccountError_OnOk();
  void DialogOnlineAccountError_OnCancel();
  void DialogOnlineAccountError_OnMailAccount();
  void DialogOnlineAccount_OnRememberPassword();
  void DialogOnlineAccountPersonnal_OnReceiveNews();
  bool DialogOnlineAccount_ChooseLogin1;
  bool DialogOnlineAccount_ChooseLogin2;
  bool DialogOnlineAccount_ChooseLogin3;
  CGameLeague* const DialogOnlineAccount_SubscriptionLeague;
  void DialogOnlineAccountPersonnal_OnCancel();
  void DialogOnlineAccountPersonnal_OnOk();
  void DialogBuyTitlePackages_OnPay();
  void DialogBuyTitlePackages_OnEnterKey();
  void DialogBuyTitlePackages_OnBuyAndEnterKey();
  void DialogBuyTitlePackages_OnBuyKeyAndRefresh();
  void DialogBuyTitlePackages_OnBuyKeyAndQuit();
  void DialogBuyTitlePackages_OnCancel();
  void DialogBuyManiaPlanetStations_OnEnterKey();
  void DialogBuyManiaPlanetStations_OnPay();
  void DialogBuyManiaPlanetStations_OnCancel();
  void DialogGeneratedGameKeys_OnCopyToClipboard();
  void DialogConvertAccount_OnConvert();
  void DialogConvertAccount_OnCancel();
  string ConvertAccount_Key;
  string OnlineAccount_Key;
  string OnlineAccount_Login;
  string OnlineAccount_Pass;
  string OnlineAccount_PassConfirm;
  string OnlineAccount_PassNew;
  uint OnlineAccount_Age;
  string OnlineAccount_EMail;
  string OnlineAccount_EMailConfirm;
  wstring OnlineAccount_NickName;
  wstring OnlineAccount_Path;
  CGameLeague* OnlineAccount_NewLeague;
  bool OnlineAccount_AcceptNews;
  string YoutubeCode;
  const MwBuffer<CControlListItem*> DialogPlayers;
  const MwBuffer<CControlListItem*> ConfirmFiles;
  MwBuffer<CGameCtnReplayRecordInfo*> ReplayInfos;
  void MenuMultiPlayerNetworkLan_OnRefresh();
  void MenuMultiPlayerNetworkLan_OnSel();
  void MenuMultiPlayerNetworkLan_OnCreate();
  void MenuMultiPlayerNetworkLan_OnBack();
  const uint MenuMultiPlayerNetworkLan_ServersCount;
  const uint MenuMultiPlayerNetworkLan_PlayersCount;
  CGameCtnNetServerInfo* MenuMultiPlayerNetworkCreate_ServerInfo;
  void MenuMultiPlayerNetworkCreate();
  void MenuMultiPlayerNetworkCreate_OnStart();
  void MenuMultiPlayerNetworkCreate_OnBack();
  void MenuMultiPlayerNetworkCreate_OnAdvanced();
  void MenuMultiPlayerNetworkCreate_OnLoadSettings();
  void MenuMultiPlayerNetworkCreate_OnLoadSettings_OnYes();
  wstring DialogRemoteBrowser_ToFind;
  void DialogRemoteBrowser_OnClose();
  void DialogRemoteBrowser_OnFind();
  void MenuInternetLeague_OnAll();
  void MenuInternetLeague_OnFavorites();
  void MenuInternetLeague_OnRankings();
  void MenuInternetLeague_OnCreate();
  void MenuInternetLeague_OnBack();
  void MenuInternetLeague_OnRefresh();
  void MenuInternetLeague_OnRefreshSimple();
  void MenuInternetLeague_OnHierarchyUp();
  void MenuInternetLeague_OnHierarchyItemSelected();
  void MenuInternetLeague_OnServerSelected();
  void MenuInternetLeague_OnPlayerSelected();
  void MenuInternetLeague_OnFilterGameMode();
  void MenuInternetLeague_OnFilterEnvironment();
  void MenuInternetLeague_BrowseServers();
  void MenuInternetLeague_BrowsePlayers();
  void MenuInternetLeague_OnChangeBuddyState();
  void MenuInternetLeague_OnLadderHierarchyUp();
  void MenuInternetLeague_SwitchServersPlayers();
  void MenuInternetLeague_SwitchLeaguesPlayersLadder();
  wstring MenuInternetLeague_Today;
  wstring MenuInternet_Path;
  const wstring MenuInternet_LadderCurrentLeagueName;
  const wstring MenuInternetLeague_CurrentLeagueName;
  const wstring MenuInternetLeague_CurrentLeagueDescription;
  void DialogChooseGameModeFilter_OnGameModeChoosen();
  void DialogChooseEnvironmentFilter_OnEnvironmentChosen();
  void MenuHotSeatCreate();
  void MenuHotSeatCreate_Start();
  void MenuHotSeatCreate_LoadSettings();
  void MenuHotSeatCreate_OnBack();
  void MenuHotSeatCreate_OnOk();
  uint HotSeatTime;
  uint HotSeatTries;
  UnnamedEnum HotSeatGameMode;
  void MenuSplitScreenControls_OnScreen1();
  void MenuSplitScreenControls_OnScreen2();
  void MenuSplitScreenControls_OnScreen3();
  void MenuSplitScreenControls_OnScreen4();
  bool SplitScreen_2Players;
  bool SplitScreen_3Players;
  bool SplitScreen_4Players;
  bool SplitScreen_ScoreLeft;
  bool SplitScreen_ScoreMiddle;
  bool SplitScreen_ScoreRight;
  bool SplitScreen_SplitVertical;
  bool SplitScreen_SplitHorizontal;
  uint MenuSplitScreenMode_CompetitionPoints;
  void DialogChooseInputDevice_OnCancel();
  void DialogChooseInputDevice_OnCardSelected();
  void DialogChooseInputDevice_OnSet();
  void DialogSetInputDevice_OnOk();
  void MenuReplay_OnBack();
  void MenuReplay_OnRefresh();
  void MenuReplay_OnSelectDir();
  void MenuReplay_OnSelectReplay();
  void MenuReplay_OnOk();
  void MenuReplay_OnSelectAll();
  void MenuReplay_FilterAndRedraw();
  void MenuReplay_OnPathUp();
  void MenuReplay_OnOpenInExplorer();
  bool MenuReplay_Flatten;
  bool MenuReplay_SortByName;
  bool MenuReplay_SortOrderAsc;
  void MenuReplay_OnReplayRemovedConfirmed();
  const wstring MenuReplay_CurPath;
  const wstring MenuReplay_CurPathToDisplay;
  const uint MenuReplay_ReplaysCount;
  const MwBuffer<CGameCtnReplayRecordInfo*> ReplayList;
  const MwBuffer<CGameCtnReplayRecordInfo*> ReplayDirsList;
  void DialogReplayLoaded_OnPlayAgainst();
  void DialogReplayLoaded_OnWatch();
  void DialogReplayLoaded_OnEdit();
  void DialogReplayLoaded_OnCancel();
  void DialogViewReplay_OnView();
  void DialogViewReplay_OnEdit();
  void DialogViewReplay_OnSimpleEdit();
  void DialogViewReplay_OnValidate();
  void DialogViewReplay_OnPlay();
  void DialogViewReplay_OnBench();
  void DialogViewReplay_OnShootVideo();
  void DialogViewReplay_OnConcatenate();
  void DialogViewReplay_OnBack();
  void DialogViewReplay_OnExportToValidate();
  void DialogViewReplay_OnExportChallengeAndReplay();
  const uint DialogViewReplay_ReplayTime;
  const wstring DialogViewReplay_ReplayAuthorLogin;
  const wstring DialogViewReplay_ReplayMapName;
  const wstring DialogViewReplay_ReplayScriptShortName;
  void DialogViewModule_OnHud();
  void DialogViewModule_OnInventory();
  void DialogViewModule_OnMinimap();
  void DialogViewModule_OnStore();
  void DialogViewModule_OnScoresTable();
  void DialogViewModule_OnMenuBase();
  void DialogViewModule_OnMenuPage();
  void DialogViewModule_OnBack();
  void DialogViewModule_OnChrono();
  void DialogViewModule_OnSpeedMeter();
  void DialogViewModule_OnPlayerState();
  void DialogViewModule_OnTeamState();
  void DialogViewModuleMenuComponent_OnLadderRankings();
  void DialogViewModuleMenuComponent_OnServerBrowser();
  void DialogViewModuleMenuComponent_OnMenuBrowser();
  void DialogViewModuleMenuComponent_OnBack();
  void DialogViewScoresTableColumn_OnAvatar();
  void DialogViewScoresTableColumn_OnPlayerName();
  void DialogViewScoresTableColumn_OnManiaStars();
  void DialogViewScoresTableColumn_OnTools();
  void DialogViewScoresTableColumn_OnTags();
  void DialogViewScoresTableColumn_OnSMPoints();
  void DialogViewScoresTableColumn_OnSMRoundPoints();
  void DialogViewScoresTableColumn_OnTMBestTime();
  void DialogViewScoresTableColumn_OnTMPrevTime();
  void DialogViewScoresTableColumn_OnTMBestLapTime();
  void DialogViewScoresTableColumn_OnTMStunts();
  void DialogViewScoresTableColumn_OnTMRespawns();
  void DialogViewScoresTableColumn_OnTMCheckpoints();
  void DialogViewScoresTableColumn_OnTMPoints();
  void DialogViewScoresTableColumn_OnTMPrevRaceDeltaPoints();
  void DialogViewScoresTableColumn_OnCustomReal();
  void DialogViewScoresTableColumn_OnCustomString();
  void DialogViewScoresTableColumn_OnCustomNatural();
  void DialogViewScoresTableColumn_OnCustomInteger();
  void DialogViewScoresTableColumn_OnCustomTime();
  void DialogViewScoresTableColumn_OnBack();
  void DialogViewModulePlayerStateComponent_OnWeaponGauge();
  void DialogViewModulePlayerStateComponent_OnArmorGauge();
  void DialogViewModulePlayerStateComponent_OnStaminaGauge();
  void DialogViewModulePlayerStateComponent_OnWeaponList();
  void DialogViewModulePlayerStateComponent_OnBack();
  void DialogViewPixelArtSize_OnBack();
  void DialogChooseEnumValue_OnBack();
  void InputsList_ResetToDefaults_OnYes();
  void InputsList_UnbindDevice_OnYes();
  const MwBuffer<CControlListItem*> InputsList_Actions;
  void MenuConfigureInputs();
  void MenuConfigureInputs_OnBack();
  void MenuConfigureInputs_SetDefaults();
  void MenuConfigureInputs_OnPlayerInputs();
  void MenuConfigureInputs_OnStandardInputs();
  void MenuConfigureInputs_OnSplitScreenInputs();
  void MenuConfigureInputs_OnUnbindKey();
  void DialogChooseProfile_OnAdd();
  void DialogChooseProfile_OnSelect();
  void DialogChooseProfile_OnCancel();
  bool DialogChooseProfile_PrivateSession;
  void DialogChooseProfileWelcome_OnConnect();
  void DialogChooseProfileWelcome_OnChangeAccount();
  void DialogChooseProfileWelcome_OnPrivateSession();
  void DialogChooseProfileWelcome_OnStayOffline();
  void DialogInGameMenu_OnAdvanced();
  void DialogInGameMenu_OnServerSettings();
  void DialogInGameMenu_OnResume();
  void DialogInGameMenu_Spectator();
  void DialogInGameMenu_Buddy();
  void DialogInGameMenu_Abuse();
  void DialogInGameMenu_Kick();
  void DialogInGameMenu_Ban();
  void DialogInGameMenu_OnQuit();
  void DialogInGameMenu_OnChangeTeam();
  void DialogInGameMenu_OnValidateBest();
  void DialogInGameMenu_OnRetire();
  void DialogInGameMenu_SwitchFavourite();
  void DialogInGameMenu_OnTrackRankings();
  void DialogInGameMenuAdvanced_OnPlayerProfile();
  void DialogInGameMenuAdvanced_OnCancel();
  void DialogInGameMenuAdvanced_OnInputSettings();
  void DialogInGameMenuAdvanced_OnInterfaceSettings();
  void DialogInGameMenuAdvanced_OnStereoscopySettings();
  void DialogInGameMenuAdvanced_OnSaveReplay();
  void DialogInGameMenuAdvanced_OnSavePrevReplay();
  void DialogInGameMenuAdvanced_OnBecomeReferee();
  void DialogInGameMenuAdvanced_OnSaveChallenge();
  void DialogInGameMenuAdvanced_OnVote();
  void DialogChangeTeam();
  void DialogChangeTeam_OnJoinTeam1();
  void DialogChangeTeam_OnJoinTeam2();
  void DialogChangeTeam_OnCancel();
  const MwBuffer<CControlListItem*> DialogChangeTeam_Players1;
  const MwBuffer<CControlListItem*> DialogChangeTeam_Players2;
  void DialogPlayerProfile_OnOk();
  void DialogPlayerProfile_OnPrevPlayer();
  void DialogPlayerProfile_OnNextPlayer();
  void DialogPlayerProfile_OnHorn();
  void DialogPlayerProfile_Buddy();
  void DialogPlayerProfile_Kick();
  void DialogPlayerProfile_Ban();
  void DialogPlayerProfile_Abuse();
  void DialogPlayerProfile_Validate();
  void DialogLadderRankings_OnOk();
  void DialogLadderRankings_OnBack();
  void DialogLadderRankings_OnShowCurrentPlayersRankings();
  void DialogLadderRankings_OnRankingSelected();
  void DialogVote_OnVoteYes();
  void DialogVote_OnVoteNo();
  void DialogVote_OnCancel();
  void DialogInGameAskYesNo_Yes();
  void DialogInGameAskYesNo_No();
  CScene2d* const DialogPlayerProfile_VehicleOverlayScene;
  void DialogManiaCodeActionsList_Ok();
  void DialogManiaCodeActionsList_Cancel();
  void DialogAskIncreaseCacheSize_OnYes();
  void DialogAskIncreaseCacheSize_OnNo();
  void DialogAskIncreaseCacheSize_OnNever();
  void DialogChooseLeague();
  void DialogChooseLeague_Clean();
  void DialogChooseLeague_UpdateThisLevel();
  void DialogChooseLeague_OnSelect();
  void DialogChooseLeague_OnOk();
  void DialogChooseLeague_OnCancel();
  const wstring DialogChooseLeague_CurrentPath;
  const wstring DialogChooseLeague_DisplayableCurrentPath;
  void DialogCreateProfile_OnOk();
  void DialogCreateProfile_OnCancel();
  void DialogCreateProfile_OnAvatar();
  void DialogChooseAvatar_OnCancel();
  void DialogChooseAvatar_OnAddAvatar();
  bool NeverAskAgain;
  const MwBuffer<CControlListItem*> DataInfos;
  bool DialogConnect_RememberOnlinePassword;
  bool DialogOnlineAccount_RememberOnlinePassword;
  bool DialogOnlineAccountPersonnal_ReceiveNews;
  void DialogAddOrInviteBuddy_OnAdd();
  CGameLeague* const DialogAddOrInviteBuddy_SelectedGroup;
  bool DialogAddOrInviteBuddy_InviteToJoinAGroup;
  void DialogAddOrInviteBuddy_OnMail();
  void DialogAddOrInviteBuddy_OnCancel();
  string DialogAddOrInviteBuddy_Login;
  string DialogAddOrInviteBuddy_EMail;
  void DialogSelectGroup_OnSelect();
  void DialogSelectGroup_CreateNew();
  void DialogSelectGroup_Cancel();
  uint DialogGraphicSettings_DisplayMode;
  const string DialogGraphicSettings_Resolution;
  uint DialogGraphicSettings_WindowSizeX;
  uint DialogGraphicSettings_WindowSizeY;
  bool DialogGraphicSettings_WindowBorder;
  UnnamedEnum DialogGraphicSettings_DisplayRatio;
  uint DialogGraphicSettings_Antialias;
  uint DialogGraphicSettings_Filter;
  uint DialogGraphicSettings_MaxFps;
  uint DialogGraphicSettings_GpuSync;
  uint DialogGraphicSettings_DisplaySync;
  uint DialogGraphicSettings_TripleBuffer;
  uint DialogGraphicSettings_WaterReflect;
  uint DialogGraphicSettings_CarReflect;
  uint DialogGraphicSettings_Bloom;
  uint DialogGraphicSettings_MotionBlur;
  float DialogGraphicSettings_MotionBlurIntens; // Range: 0 - 1
  uint DialogGraphicSettings_SSAO;
  uint DialogGraphicSettings_ScreenShotExt;
  void DialogGraphicSettings_OnApply();
  void DialogGraphicSettings_OnCancel();
  void DialogGraphicSettings_OnAdvanced();
  void DialogGraphicSettings_OnBroadcast();
  uint DialogBroadcast_Provider;
  string DialogBroadcast_Login;
  string DialogBroadcast_Password;
  uint DialogBroadcast_Resolution;
  uint DialogBroadcast_VideoMaxKbps;
  uint DialogBroadcast_VideoTargetFps;
  uint DialogBroadcast_VideoCpuUsage;
  bool DialogBroadcast_AudioEnable;
  float DialogBroadcast_AudioVolumePlayback; // Range: 0 - 1
  float DialogBroadcast_AudioVolumeRecorder; // Range: 0 - 1
  void DialogBroadcast_StartStop();
  const wstring DialogBroadcast_UserOutput;
  uint MenuProfile_TagsAdmin_CurTag;
  const uint MenuProfile_TagsAdmin_TagCount;
  bool MenuProfile_TagsAdmin_CurTagIsAvailableForConsultation;
  void DialogSetChallengeType();
  void DialogSetChallengeType_OnOk();
  void DialogSetChallengeType_ShowPickType();
  void DialogSetChallengeType_ShowPickStyle();
  void DialogSetChallengeType_TypePicked();
  void DialogSetChallengeType_StylePicked();
  uint ChallengeType_NbLaps;
  CGameCtnChallenge* const CurGameChallenge;
  void DialogSetDifficulty();
  void DialogSetDifficulty_OnOk();
  UnnamedEnum ChallengeDifficulty;
  void DialogUnlockExperimentalFeatures();
  void DialogUnlockExperimentalFeatures_OnOk();
  void DialogCreateObjectives();
  void DialogCreateObjectives_OnValidate();
  uint CreateObjectives_GoldTime;
  uint CreateObjectives_SilverTime;
  uint CreateObjectives_BronzeTime;
  void DialogEditCutScenes_OnIntroEdit();
  void DialogEditCutScenes_OnIntroRemove();
  void DialogEditCutScenes_OnPodiumEdit();
  void DialogEditCutScenes_OnPodiumRemove();
  void DialogEditCutScenes_OnInGameEdit();
  void DialogEditCutScenes_OnInGameRemove();
  void DialogEditCutScenes_OnEndRaceEdit();
  void DialogEditCutScenes_OnEndRaceRemove();
  void DialogEditCutScenes_OnAmbianceEdit();
  void DialogEditCutScenes_OnAmbianceRemove();
  void DialogEditCutScenes_OnRecordMediaTrackerGhost();
  void DialogEndRaceSummary_OnReplay();
  void DialogGainMedalMoney_OnOk();
  void DialogEditorSelectDecal_OnSolidVariant1();
  void DialogEditorSelectDecal_OnSolidVariant2();
  void DialogEditorSelectDecal_OnSolidVariant3();
  void DialogEditorSelectDecal_OnSolidVariant4();
  void DialogEditorSelectDecal_OnSolidVariant5();
  void DialogEditorSelectDecal_OnSolidVariant6();
  void DialogEditorSelectDecal_OnSolidVariant7();
  void DialogEditorSelectDecal_OnSolidVariant8();
  void DialogEditorSelectDecal_OnSolidVariant9();
  void DialogEditorSelectDecal_OnSolidVariant10();
  void DialogEditorSelectDecal_OnType1();
  void DialogEditorSelectDecal_OnType2();
  void DialogEditorSelectDecal_OnType3();
  void DialogEditorSelectDecal_OnType4();
  void DialogEditorSelectDecal_OnType5();
  void DialogEditorSelectDecal_OnType6();
  void DialogEditorSelectDecal_OnDensity1();
  void DialogEditorSelectDecal_OnDensity2();
  void DialogEditorSelectDecal_OnDensity3();
  void DialogEditorSelectDecal_OnVariant1();
  void DialogEditorSelectDecal_OnVariant2();
  void DialogEditorSelectDecal_OnVariant3();
  void DialogEditorSelectDecal_OnVariant4();
  void DialogEditorSelectDecal_OnVariant5();
  void DialogEditorSelectDecal_OnVariant6();
  void DialogEditorSelectDecal_OnVariant7();
  void DialogEditorSelectDecal_OnVariant8();
  void DialogEditorSelectDecal_OnVariant9();
  void DialogEditorSelectDecal_OnVariant10();
  void DialogEditorSelectDecal_OnOk();
  void DialogEditorSelectDecal_OnBack();
  CPlugCharPhySpecialProperty* DialogEditBlockSpecialProperty_Property;
  void DialogEditBlockSpecialProperty_OnOk();
  void DialogEditBlockSpecialProperty_OnCancel();
  void DialogEditBlockSpecialProperty_OnCustom();
  void DialogEditBlockSpecialProperty_OnDefault();
  void DialogChooseMapTypeForEditorSimple_OnMapTypeChosen();
  void DialogChooseMapTypeForEditorSimple_OnCancel();
  void DialogUpdateFiles_Abort();
  const float DialogUpdateFiles_OverallProgress; // Range: 0 - 1
  const float DialogUpdateFiles_CurrentProgress; // Range: 0 - 1
  CGameMenuSkinChooser* const MenuSkinChooser;
};

struct CGameLadderRankingCtnChallengeAchievement : public CGameLadderRanking {
};

struct CGameCtnNetForm : public CGameNetForm {
  CGameCtnNetForm();

};

struct CGameRemoteBufferDataInfoFinds : public CGameRemoteBufferDataInfo {
  uint RefreshPlayerDuration;
  uint RefreshServerDuration;
  uint CountPlayerPerPage;
  uint CountServerPerPage;
};

// Description: "Vehicle or Character settings."
struct CGameUserProfileWrapper_VehicleSettings : public CMwNod {
  const wstring ModelDisplayName; // Maniascript
  const string ModelName; // Maniascript
  const wstring SkinName; // Maniascript
  float AnalogSensitivity; // Range: 0.1 - 10 // Maniascript
  float AnalogDeadZone; // Range: 0 - 0.25 // Maniascript
  bool AnalogSteerV2; // Maniascript
  float RumbleIntensity; // Range: 0 - 2 // Maniascript
  float CenterSpringIntensity; // Range: 0 - 1 // Maniascript
};

struct CGameRemoteBufferDataInfoSearchs : public CGameRemoteBufferDataInfo {
  uint RefreshLeaguesDuration;
  uint RefreshServersDuration;
  uint RefreshServersSuggestedDuration;
  uint RefreshServersFavouritesDuration;
  uint RefreshPlayersDuration;
  uint LeaguesPerPageCount;
  uint ServersPerPageCount;
  uint ServersSuggestedPerPageCount;
  uint ServersFavouritesPerPageCount;
  uint PlayersPerPageCount;
};

struct CGameMgrActionFxPhy : public CSceneMgrPhy {
  const uint InstancesCount;
};

// Description: "This is the stations Manialink interface."
struct CGameScriptHandlerStation : public CGameManialinkScriptHandler {
  CGameManiaPlanetScriptAPI* const ManiaPlanet; // Maniascript
  CGameManiaAppStation* const ParentApp; // Maniascript
  CGameStation* const Station; // Maniascript
  void EnterStation(); // Maniascript
  void BrowserReload(); // Maniascript
};

struct CGameCtnMasterServer : public CGameMasterServer {
  const bool IsTransfering;
};

struct CGameCtnNetwork : public CGameNetwork {
  const uint NextChallengeIndex;
  const bool Spectator;
  void GetFilesToSubmit();
  bool InGetReplaysMode;
  bool IsInRefereeMode;
  UnnamedEnum ValidationMode;
  void GetManiaNetResource_OnCancel();
  CGameManiaAppPlayground* ClientManiaAppPlayground;
  CGameScriptHandlerPlaygroundInterface* PlaygroundInterfaceScriptHandler;
  CGamePlaygroundClientScriptAPI* PlaygroundClientScriptAPI;
  void RequestChangeSpectator_ToSpec();
  void RequestChangeSpectator_ToPlayer();
  CGameServerPlugin* ServerPlugin;
  CGameScriptServerAdmin* GameScriptServerAdminAPI;
};

// File extension: 'GameCtnApp.Gbx'
struct CGameCtnApp : public CGameApp {
  CGameCtnApp();

  CGameResources* Resources;
  CControlStyleSheet* DefaultStyleSheet;
  CGameCtnNetwork* Network;
  CGamePlaygroundScript* const PlaygroundScript;
  CGameSwitcher* const Switcher;
  CGameCtnChallenge* RootMap;
  UnnamedEnum VehicleCollectionId;
  CGameScene* GameScene;
  CGameCamera* const GameCamera;
  CGameEditorBase* const EditorBase;
  CGameCtnEditor* const Editor;
  CGamePlayground* const CurrentPlayground;
  CGameCtnCatalog* const GlobalCatalog;
  const MwBuffer<CMwNod*> AdditionalSkinsFids;
  MwBuffer<CGameCtnChallengeInfo*> ChallengeInfos;
  MwBuffer<CGameCtnReplayRecordInfo*> ReplayRecordInfos;
  const MwBuffer<CGamePlayerProfile*> PlayerProfiles;
  CGamePlayerProfile* CurrentProfile;
  MwBuffer<CGameCtnCampaign*> BaseOfficialCampaigns;
  MwBuffer<CGameCtnCampaign*> OfficialCampaigns;
  CGameCtnCampaign* const CurrentCampaign;
  bool MenuBackground_MustLoopIntro;
  const uint MessagesCount;
  const wstring Money;
  const string OSLocalTimeOrTimeLeft;
  bool StereoscopyEnable;
  bool CanModifyWithoutInvalidate;
  CGameAdvertising* Advertising;
  CGameScriptChatManager* const ChatManagerScript;
  CGameMatchSettingsManagerScript* const MatchSettingsManagerScript;
  CGameYoutube* const Youtube;
  CGameUserManagerScript* const UserManagerScript;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnArticle : public CGameControlCard {
  CGameControlCardCtnArticle();

  CPlugBitmap* const Icon;
  const wstring StrName;
};

// Description: "Internal API for Maniaplanet."
struct CGameManiaPlanetScriptAPI : public CMwNod {
  enum class EContext {
    MenuStartUp = 0,
    MenuManiaPlanet = 1,
    MenuManiaTitleMain = 2,
    MenuProfile = 3,
    MenuSolo = 4,
    MenuLocal = 5,
    MenuMulti = 6,
    MenuEditors = 7,
    EditorPainter = 8,
    EditorTrack = 9,
    EditorMediaTracker = 10,
    Solo = 11,
    SoloLoadScreen = 12,
    Multi = 13,
    MultiLoadScreen = 14,
    MenuCustom = 15,
    Unknown = 16,
  };
  enum class ELinkType {
    ExternalBrowser = 0,
    ManialinkBrowser = 1,
  };
  enum class EBuyTitleMode {
    OpenStore = 0,
    BuyIfNeeded = 1,
    Ask = 2,
  };
  enum class EMenuStationsPage {
    Channels = 0,
    Play = 1,
    Options = 2,
    Help = 3,
  };
  enum class EUplayFlow {
    OverView = 0,
    Auth = 1,
    Reward = 2,
    Rewards = 3,
    Actions = 4,
  };
  enum class ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum class ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  enum class EHmdWearingState {
    Dismount = 0,
    Mount = 1,
    Unknown = 2,
  };
  enum class EHmdTrackingState {
    NotStarted = 0,
    Calibrating = 1,
    NotTracking = 2,
    Tracking = 3,
  };
  enum class EInputsListFilter {
    All = 0,
    OnlyGeneral = 1,
    OnlyPlayer = 2,
  };
  const int Now; // Maniascript
  const string CurrentLocalDateText; // Maniascript
  const wstring CurrentTimezone; // Maniascript
  CGamePlayerInfo* const LocalUser; // Maniascript
  CGameManiaTitle* const LoadedTitle; // Maniascript
  const MwBuffer<CGameManiaTitle*> TitlesAvailable; // Maniascript
  const MwBuffer<CGameManiaTitle*> TitlesBases; // Maniascript
  const MwBuffer<string> TitleIdsInstalled; // Maniascript
  const MwBuffer<string> TitleIdsPayed; // Maniascript
  const uint EmptyStationsCount; // Maniascript
  CSystemPlatformScript* const System; // Maniascript
  const ESystemPlatform SystemPlatform; // Maniascript
  const ESystemSkuIdentifier SystemSkuIdentifier; // Maniascript
  const string ExeVersion; // Maniascript
  CGameCtnChallenge* const CurrentMap; // Maniascript
  const EContext ActiveContext; // Maniascript
  const string ActiveContext_MenuFrame; // Maniascript
  const string ActiveContext_InGameDialogFrame; // Maniascript
  const string ActiveContext_DialogFrame; // Maniascript
  const string ActiveContext_SystemDialogFrame; // Maniascript
  const bool ActiveContext_ClassicDialogDisplayed; // Maniascript
  const uint ActiveContext_GameWill; // Maniascript
  const bool ActiveContext_ManialinkBrowserDisplayed; // Maniascript
  const bool ActiveContext_MenuStationsDisplayed; // Maniascript
  const bool ActiveContext_InGameMenuDisplayed; // Maniascript
  const EMenuStationsPage ActiveContext_MenuStationsPage; // Maniascript
  const EMenuStationsPage ActiveContext_MenuStationsClickedPage; // Maniascript
  const bool ActiveContext_IsProfileEditable; // Maniascript
  const string CurrentServerLogin; // Maniascript
  const wstring CurrentServerName; // Maniascript
  const wstring CurrentServerModeName; // Maniascript
  const string CurrentServerJoinLink; // Maniascript
  const MwBuffer<CGamePlayerInfo*> CurrentServerPlayers; // Maniascript
  const uint CurrentAppId; // Maniascript
  bool IsPrivateSession; // Maniascript
  const bool IsKioskMode; // Maniascript
  const bool ParentalLock_IsLocked; // Maniascript
  const uint TotalTimePlay; // Maniascript
  const uint Messenger_MessagesCount; // Maniascript
  const uint AccountPlanets; // Maniascript
  const bool IsTitleTimeLimited; // Maniascript
  const bool IsTitleTimeLimitActivated; // Maniascript
  const bool CanUnlockTitleTimeLimitOnStore; // Maniascript
  const uint TitleTimeLeft; // Maniascript
  const uint CurConnectionDate; // Maniascript
  const uint PrevConnectionDate; // Maniascript
  float MasterSoundVolume; // Range: -40 - 0 // Maniascript
  float MasterMusicVolume; // Range: -40 - 0 // Maniascript
  const bool TmTurbo_IsDemo; // Maniascript
  const bool TmTurbo_IsPartialInstall; // Maniascript
  const bool TmTurbo_IsBeta; // Maniascript
  const bool TmTurbo_IsBetaDeactivated; // Maniascript
  const bool TmTurbo_IsOpenBeta; // Maniascript
  const bool TmTurbo_IsSlowInstall; // Maniascript
  bool Settings_StationsManualLayout; // Maniascript
  void ClipboardSet(wstring ClipboardText); // Maniascript
  void OpenLink(string Url, ELinkType LinkType); // Maniascript
  void QuitGameAndOpenLink(string Url); // Maniascript
  void InstallTitle(string TitleId); // Maniascript
  void InstallTitleFromUrl(string Url, wstring DisplayName); // Maniascript
  void InstallTitleFromUrlEx1(string Url, wstring DisplayName, bool EnterAfterInstall); // Maniascript
  void InstallTitleFromUrlEx2(string Url, wstring DisplayName, wstring OpenLinkAfterInstall); // Maniascript
  void ShowTitle(string TitleId, bool ShowStation); // Maniascript
  void SelectTitle(string TitleId); // Maniascript
  void EnterTitle(string TitleId); // Maniascript
  void ShowCurMapCard(); // Maniascript
  void SetMenuStationsActive(bool Activate); // Maniascript
  void Dialog_Message(wstring Message); // Maniascript
  void Dialog_EnterGameKey(); // Maniascript
  void Dialog_BuyTitleDialog(string TitleId, string OverrideBuyUrl, int OverrideActionAfterBuy); // Maniascript
  void Dialog_BuyTitleEx(string TitleId, EBuyTitleMode Mode, string OverrideBuyUrl, int OverrideActionAfterBuy); // Maniascript
  void Dialog_GenerateGameKeys(string TitleId, uint FeaturesLevel, uint NbToGenerate, bool AddBuddyOnRegistration); // Maniascript
  void Dialog_BuyStations(); // Maniascript
  void Dialog_SetServerFavourite(string ServerLogin, bool Favorite, bool Silent); // Maniascript
  void Dialog_JoinServer(string ServerLogin, string ServerPassword, bool LAN, bool Spectate, string TitleId, bool Silent, bool ChannelServer); // Maniascript
  void Dialog_ChangeAvatar(); // Maniascript
  void Dialog_ChangeHorn(); // Maniascript
  void Dialog_ChangeCrosshair(); // Maniascript
  void Dialog_ChangeZone(); // Maniascript
  void Dialog_ChangePassword(); // Maniascript
  void Dialog_CommitProfileChanges(); // Maniascript
  void Dialog_BindInput(int ActionIndex, CInputScriptPad* Device); // Maniascript
  void Dialog_UnbindInputDevice(CInputScriptPad* Device); // Maniascript
  void Dialog_DefaultInputBindings(CInputScriptPad* Device); // Maniascript
  const bool Dialog_IsFinished; // Maniascript
  const bool Dialog_Success; // Maniascript
  const bool Dialog_Aborted; // Maniascript
  void CustomMenu_Request(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  bool ParentalLock_Lock(string Password); // Maniascript
  bool ParentalLock_Unlock(string Password, bool UnlockOnce); // Maniascript
  void SetLocalUserClubLink(string ClubLink); // Maniascript
  void SetLocalUserNickName(wstring NickName); // Maniascript
  void FlashWindow(); // Maniascript
  void CreateShortcut(string ShortcutName, string Url); // Maniascript
  void HideSystemLoadingScreen(); // Maniascript
  bool IsLiveStreamingEnabled; // Maniascript
  bool IsRemotePlayEnabled; // Maniascript
  void TmTurbo_LoadingOpportunity(); // Maniascript
  CGameScriptChatManager* const ChatManager; // Maniascript
  CGameAchievementScriptManager* const AchievementsManager; // Maniascript
  CGameUserManagerScript* const UserMgr; // Maniascript
  void Authentication_GetToken(MwId UserId, string AppLogin); // Maniascript
  const bool Authentication_GetTokenResponseReceived; // Maniascript
  const uint Authentication_ErrorCode; // Maniascript
  const string Authentication_Token; // Maniascript
  const MwBuffer<CWebServicesTaskResult*> MasterServer_MSTaskResults; // Maniascript
  void MasterServer_ReleaseMSTaskResult(MwId TaskId); // Maniascript
  string MasterServer_GetURL(string ShortCutId); // Maniascript
  CGameMasterServerUserInfo* const MasterServer_MainMSUser; // Maniascript
  const MwBuffer<CGameMasterServerUserInfo*> MasterServer_MSUsers; // Maniascript
  CGameMasterServerUserInfo* MasterServer_GetMSUserFromId(MwId UserId); // Maniascript
  CWebServicesTaskResult_Connect* MasterServer_Connect(MwId UserId); // Maniascript
  CWebServicesTaskResult_GetDisplayNameScriptResult* MasterServer_GetDisplayName(MwId UserId); // Maniascript
  CWebServicesTaskResult* MasterServer_CheckNetworkAvailability(MwId UserId); // Maniascript
  CWebServicesTaskResult_Session_Get* MasterServer_GetSessionInfo(MwId UserId, wstring SessionId); // Maniascript
  void MasterServer_Zone_GetPathAndName(wstring ZoneFullPath, wstring ZonePath, wstring ZoneName); // Maniascript
  CWebServicesTaskResult_ZoneList* MasterServer_Zone_GetChilds(wstring ZoneFullPath); // Maniascript
  CWebServicesTaskResult* MasterServer_Zone_ChangeZone(MwId UserId, wstring ZoneFullPath); // Maniascript
  CWebServicesTaskResult_LaunchUplayScriptResult* MasterServer_UplayLaunch(MwId UserId, EUplayFlow UplayFlow, uint RewardCode); // Maniascript
  CWebServicesTaskResult_LaunchUplayScriptResult* MasterServer_UplayLaunch_v2(MwId UserId, EUplayFlow UplayFlow, string RewardId); // Maniascript
  CWebServicesTaskResult_LaunchUplayScriptResult* MasterServer_UplayLaunchAndCompleteActions(MwId UserId, EUplayFlow UplayFlow, string RewardId); // Maniascript
  void MasterServer_Tracking_ContextMenuStart(MwId UserId, string MenuName); // Maniascript
  void MasterServer_Tracking_ContextMenuStop(MwId UserId, string MenuName); // Maniascript
  void MasterServer_Tracking_ContextGameModeStart(MwId UserId, string GameMode); // Maniascript
  void MasterServer_Tracking_ContextGameModeStop(MwId UserId, string GameMode); // Maniascript
  void MasterServer_Tracking_ContextMapStart(MwId UserId, string MapUid, string Environment); // Maniascript
  void MasterServer_Tracking_ContextMapStop(MwId UserId, string MapUid); // Maniascript
  void MasterServer_Tracking_ContextPlayStart(MwId UserId, string Type); // Maniascript
  void MasterServer_Tracking_ContextPlayStop(MwId UserId, string Type, string Reason, uint NbRespawns); // Maniascript
  void MasterServer_Tracking_MedalUnlock(MwId UserId, uint Medal); // Maniascript
  void MasterServer_Tracking_MedalUnlock_v2(MwId UserId, uint PreviousMedal, uint Medal); // Maniascript
  void MasterServer_Tracking_NewMapCreated(MwId UserId, string Environment, bool IsRandomlyGenerated); // Maniascript
  void MasterServer_Tracking_NewsImpression(MwId UserId, string NewsId); // Maniascript
  void MasterServer_Tracking_NewsClick(MwId UserId, string NewsId); // Maniascript
  void MasterServer_Tracking_PlayerAchievement(MwId UserId, uint AchievementId); // Maniascript
  void MasterServer_Tracking_PlayerProgressionMap(MwId UserId, string Value); // Maniascript
  void MasterServer_Tracking_PlayerRespawn(MwId UserId, uint RaceTime); // Maniascript
  void MasterServer_Tracking_StatCampaign(MwId UserId, uint PlayedMapCount, uint BronzeMedalCount, uint SilverMedalCount, uint GoldMedalCount, uint AuthorMedalCount, uint MaxDifficultyLevel); // Maniascript
  void MasterServer_Tracking_StatCampaign_v2(MwId UserId, uint PlayedMapCount, uint PlayedEnvCount, uint BronzeMedalCount, uint SilverMedalCount, uint GoldMedalCount, uint AuthorMedalCount, uint MaxDifficultyLevel); // Maniascript
  void MasterServer_Tracking_StatChallenge(MwId UserId, uint PendingChallengeCount); // Maniascript
  void MasterServer_Tracking_StatGlobalRanking(MwId UserId, uint GlobalRanking); // Maniascript
  void MasterServer_Tracking_StatOnline(MwId UserId, uint Echelon); // Maniascript
  void MasterServer_Tracking_StatRecordCenter(MwId UserId, uint BestCount, uint EqualCount, uint WorstCount); // Maniascript
  CWebServicesTaskResult* MasterServer_Beta_RetrieveUserInfo(MwId UserId); // Maniascript
  CWebServicesTaskResult* MasterServer_Beta_AcceptNDA(MwId UserId); // Maniascript
  CWebServicesTaskResult_PlanetsTransaction_Bill* PlanetsTransaction_GivePlanets(string LoginPayee, uint Cost, wstring Label); // Maniascript
  CWebServicesTaskResult* BuyFullGame(MwId UserId); // Maniascript
  CWebServicesTaskResult* ShowSystemError(MwId UserId, uint ErrorCode); // Maniascript
  void HMD_Activate(bool Enable); // Maniascript
  const bool HMD_IsActive; // Maniascript
  const vec3 HMD_HeadTranslation; // Maniascript
  const float HMD_HeadYaw; // Maniascript
  const float HMD_HeadPitch; // Maniascript
  const float HMD_HeadRoll; // Maniascript
  void HMD_ResetTracking(); // Maniascript
  void HMD_SelectUser(); // Maniascript
  CGameUserScript* const HMD_CurrentUser; // Maniascript
  float HMD_WorldScale; // Maniascript
  float HMD_MoveScale; // Range: 1e-05 - 10000 // Maniascript
  float HMD_HUD_Distance; // Range: 0.2 - 100 // Maniascript
  const EHmdWearingState HMD_WearingState; // Maniascript
  const EHmdTrackingState HMD_TrackingState; // Maniascript
  const bool HMD_IsUserWarnBySystem_OutOfPlayArea; // Maniascript
  bool Cameras_BlackOut; // Maniascript
  void DisplaySettings_LoadCurrent(); // Maniascript
  void DisplaySettings_Unload(); // Maniascript
  void DisplaySettings_Apply(); // Maniascript
  CGameDisplaySettingsWrapper* const DisplaySettings; // Maniascript
  void InputBindings_UpdateList(EInputsListFilter Filter, CInputScriptPad* Device); // Maniascript
  const MwBuffer<wstring> InputBindings_ActionNames; // Maniascript
  const MwBuffer<wstring> InputBindings_Bindings; // Maniascript
  const uint InputBindings_PlayerInputsCount; // Maniascript
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnChapter : public CGameControlCard {
  CGameControlCardCtnChapter();

  CPlugBitmap* const Icon;
  CPlugBitmap* const BannerChallenge;
  const wstring StrName;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnGhostInfo : public CGameControlCard {
  CGameControlCardCtnGhostInfo();

  const wstring StrName;
  const uint Time;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnVehicle : public CGameControlCard {
  CGameControlCardCtnVehicle();

  CPlugBitmap* const Icon;
  const wstring StrName;
};

struct CGameAnalyzer : public CMwNod {
  const int Mode;
  CMwStatsValue* const FrameRate;
};

struct CGamePlaygroundInterface : public CMwNod {
  CControlContainer* InterfaceRoot;
  CGameHud3d* const Hud3d;
  CGameCtnNetServerInfo* const ServerInfo;
  CGameCtnChallenge* const Challenge;
  CGamePodium* const Podium;
  wstring ChatEntry;
  void ChatNextPage();
  void ChatPreviousPage();
  void ChatToggleDisplayMode();
  CControlFrame* const ManialinkPage;
  CGameScriptHandlerPlaygroundInterface* const ManialinkScriptHandler;
  CGameManialinkScriptHandler* const ManialinkScriptHandlerBasic;
  void ShowChallengeCard();
  void ShowModeHelp();
  void CopyServerLink();
};

struct CGamePlaygroundSpectating : public CMwNod {
};

struct CGameMgrArenaVis : public CSceneMgrVis {
  CGameMgrArenaVis();

};

// File extension: 'GameCtnMediaBlockGhost.gbx'
struct CGameCtnMediaBlockGhost : public CGameCtnMediaBlock {
  CGameCtnMediaBlockGhost();

  CGameCtnGhost* GhostModel;
  float StartOffset;
};

struct CGameEnvironmentManager : public CMwNod {
};

struct CGameDialogShootParams : public CMwNod {
  float Duration;
  uint VideoFps;
  uint Width;
  uint Height;
  uint TileCountX;
  uint TileCountY;
  bool TileSplit;
  bool VideoHq;
  UnnamedEnum VideoHqSampleCount;
  bool Sharpen;
  UnnamedEnum MotionBlur;
  bool VideoHqDOF;
  UnnamedEnum DofSampleCount;
  bool VideoHqCarReflects;
  bool VideoReflectSubSample;
  bool VideoReflectRayCast;
  UnnamedEnum VideoStereo3d;
  bool IsAudioStream;
  UnnamedEnum ExtScreen;
  UnnamedEnum ExtVideo;
  const string EstimatedTime;
  bool UploadToYoutube;
  string YoutubeTitle;
  string YoutubeDesc;
  string ShootName;
  bool Hud3d;
  UnnamedEnum WebmVideoMode;
  UnnamedEnum WebmVideoAutoBirate;
  uint WebmVideoBitrate;
  uint WebmVideoCQ_Level;
  float WebmAudioVBR_Quality;
  void OnOk();
  void OnCancel();
  void OnAdvanced();
  void SetQualityPreset_Low();
  void SetQualityPreset_Medium();
  void SetQualityPreset_High();
};

// Description: "Manialink filename entry."
struct CGameManialinkFileEntry : public CGameManialinkEntry {
  void OnFileChoosen();
  bool OnlyUserFiles; // Maniascript
  void ClearFileNames(); // Maniascript
  const wstring FullFileName; // Maniascript
  const wstring RelativeNameToRoot; // Maniascript
  const wstring RelativeNameToTypeFolder; // Maniascript
  const wstring RelativeFileName; // Maniascript
};

struct CGameNetDataDownload : public CMwNod {
  CGameNetDataDownload();

  const uint ReturnedError;
  const bool CheckUpToDate;
  const bool PauseOnError;
  const bool IsPaused;
  const bool IsFinished;
};

struct CGameCampaignPlayerScores : public CMwNod {
  CGameCampaignPlayerScores();

};

struct CGameLoadProgress : public CMwNod {
  CScene2d* const Overlay;
};

struct CGameNetFormBuddy : public CNetNod {
  CGameNetFormBuddy();

};

// Description: "API for GameModes Manialinks"
struct CGameScriptHandlerPlaygroundInterface : public CGameManialinkScriptHandler {
  enum class EUISound {
    Default = 0,
    Silence = 1,
    StartMatch = 2,
    EndMatch = 3,
    StartRound = 4,
    EndRound = 5,
    PhaseChange = 6,
    TieBreakPoint = 7,
    TiePoint = 8,
    VictoryPoint = 9,
    Capture = 10,
    TimeOut = 11,
    Notice = 12,
    Warning = 13,
    PlayerEliminated = 14,
    PlayerHit = 15,
    Checkpoint = 16,
    Finish = 17,
    Record = 18,
    ScoreProgress = 19,
    RankChange = 20,
    Bonus = 21,
    FirstHit = 22,
    Combo = 23,
    PlayersRemaining = 24,
    Custom1 = 25,
    Custom2 = 26,
    Custom3 = 27,
    Custom4 = 28,
  };
  enum class EInGameMenuResult {
    Resume = 0,
    Quit = 1,
    NormalMenu = 2,
    AdvancedMenu = 3,
    ServerSettings = 4,
  };
  const int GameTime; // Maniascript
  CGamePlaygroundClientScriptAPI* const Playground; // Maniascript
  CGameManiaPlanetScriptAPI* const ManiaPlanet; // Maniascript
  CGamePlaygroundUIConfig* UI; // Maniascript
  CGamePlaygroundUIConfig* ClientUI; // Maniascript
  const bool IsSpectator; // Maniascript
  const bool IsSpectatorClient; // Maniascript
  const bool UseClans; // Maniascript
  const bool UseForcedClans; // Maniascript
  CGameManiaAppPlaygroundCommon* const ParentApp; // Maniascript
  CGameCtnChallenge* const Map; // Maniascript
  void ShowCurChallengeCard(); // Maniascript
  void ShowModeHelp(); // Maniascript
  void CopyServerLinkToClipBoard(); // Maniascript
  void JoinTeam1(); // Maniascript
  void JoinTeam2(); // Maniascript
  const MwBuffer<CGameTeamProfile*> Teams; // Maniascript
  void RequestSpectatorClient(bool Spectator); // Maniascript
  void SetSpectateTarget(string Player); // Maniascript
  void ShowProfile(string Player); // Maniascript
  void ShowInGameMenu(); // Maniascript
  void CloseInGameMenu(EInGameMenuResult Result); // Maniascript
  void CloseScoresTable(); // Maniascript
  const bool IsInGameMenuDisplayed; // Maniascript
  const string CurrentServerLogin; // Maniascript
  const wstring CurrentServerName; // Maniascript
  const wstring CurrentServerDesc; // Maniascript
  const string CurrentServerJoinLink; // Maniascript
  const wstring CurrentServerModeName; // Maniascript
  const uint SplitScreenNum; // Maniascript
  const uint SplitScreenCount; // Maniascript
  void PlayUiSound(EUISound Sound, int SoundVariant, float Volume); // Maniascript
  void Spectate(string Player); // Maniascript
  const bool IsTeamMode; // Maniascript
  const bool IsForcedTeams; // Maniascript
  bool IsSpectatorMode; // Maniascript
  CGamePlayerInfo* const LocalPlayerInfo; // Maniascript
  CGameAchievementScriptManager* const AchievementsManager; // Maniascript
};

// Description: "Station mania app."
struct CGameManiaAppStation : public CGameManiaAppMinimal {
  CGameStation* const Station; // Maniascript
  void EnterStation(); // Maniascript
  void Maker_EditTitle(string EditedTitleId); // Maniascript
  void Maker_EditNewTitle(wstring EditedTitleName); // Maniascript
  const MwBuffer<CGamePackCreator_TitleInfoScript*> Maker_EditedTitles; // Maniascript
};

// Description: "This is the base Manialink page interface."
struct CGameManialinkScriptHandler : public CMwNod {
  enum class LinkType {
    ExternalBrowser = 0,
    ManialinkBrowser = 1,
    Goto = 2,
    ExternalFromId = 3,
    ManialinkFromId = 4,
    GotoFromId = 5,
  };
  enum class ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum class ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  CGameManialinkPage* const Page; // Maniascript
  const bool PageIsVisible; // Maniascript
  bool PageAlwaysUpdateScript; // Maniascript
  const uint Now; // Maniascript
  const uint Period; // Maniascript
  const uint CurrentTime; // Maniascript
  const string CurrentTimeText; // Maniascript
  const string CurrentLocalDateText; // Maniascript
  const wstring CurrentTimezone; // Maniascript
  CGamePlayerInfo* const LocalUser; // Maniascript
  CGameManiaTitle* const LoadedTitle; // Maniascript
  const ESystemPlatform SystemPlatform; // Maniascript
  const ESystemSkuIdentifier SystemSkuIdentifier; // Maniascript
  const MwBuffer<CGameManialinkScriptEvent*> PendingEvents; // Maniascript
  void Dbg_SetProcessed(CGameManialinkScriptEvent* Event); // Maniascript
  bool Dbg_WarnOnDroppedEvents; // Maniascript
  const float MouseX; // Maniascript
  const float MouseY; // Maniascript
  const bool MouseLeftButton; // Maniascript
  const bool MouseRightButton; // Maniascript
  const bool MouseMiddleButton; // Maniascript
  const bool KeyUp; // Maniascript
  const bool KeyDown; // Maniascript
  const bool KeyLeft; // Maniascript
  const bool KeyRight; // Maniascript
  const bool KeyReturn; // Maniascript
  const bool KeySpace; // Maniascript
  const bool KeyDelete; // Maniascript
  bool IsKeyPressed(int KeyCode); // Maniascript
  bool EnableMenuNavigationInputs; // Maniascript
  void EnableMenuNavigation(bool EnableInputs, bool WithAutoFocus, CGameManialinkControl* AutoBackControl, int InputPriority); // Maniascript
  void EnableMenuNavigation2(bool EnableInputs, bool WithAutoFocus, bool WithManualScroll, CGameManialinkControl* AutoBackControl, int InputPriority); // Maniascript
  const bool IsMenuNavigationForeground; // Maniascript
  void OpenLink(string Url, ELinkType LinkType); // Maniascript
  void TriggerPageAction(string ActionString); // Maniascript
  CXmlScriptParsingManager* const Xml; // Maniascript
  CNetScriptHttpManager* const Http; // Maniascript
  CGameVideoScriptManager* const Video; // Maniascript
  CAudioScriptManager* const Audio; // Maniascript
  CInputScriptManager* const Input; // Maniascript
  CGameDataFileManagerScript* const DataFileMgr; // Maniascript
  CGameScoreAndLeaderBoardManagerScript* const ScoreMgr; // Maniascript
  CGameUserPrivilegesManagerScript* const PrivilegeMgr; // Maniascript
  CGameMasterServerRichPresenceManagerScript* const PresenceMgr; // Maniascript
  CGameManialinkAnimManager* const AnimMgr; // Maniascript
  CSystemPlatformScript* const System; // Maniascript
  void SendCustomEvent(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void PreloadImage(string ImageUrl); // Maniascript
  void PreloadAll(); // Maniascript
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly); // Maniascript
};

// File extension: 'Frame.Gbx'
struct CGamePlaygroundControlScores : public CControlFrame {
  CGamePlaygroundControlScores();

  uint ListLineCount;
  uint ListColumnCount;
  CControlFrame* CardModelPlayer;
  float PlayerScale;
  float HorizontalMargin;
  float VerticalMargin;
  float CenterMargin;
  bool IsCentered;
  uint Page;
  uint PageCount;
  void PrevPage();
  void NextPage();
  bool LabelHelpEnabled;
  bool LabelMessageEnabled;
  bool HidePureSpectators;
  bool Rank;
  bool Avatar;
  bool IsLocalPlayer;
  bool IsSpectator;
  bool Score;
  bool ScoreInc;
  bool LapScore;
  bool LadderRank;
  bool LadderPointsGain;
  bool CupModeResult;
  bool NotPlaying;
};

struct CGameManialinkMediaPlayer : public CGameManialinkControl {
  bool IsInitPlay; // Maniascript
  bool Music; // Maniascript
  bool IsLooping; // Maniascript
  float Volume; // Maniascript
  string Url; // Maniascript
  void Play(); // Maniascript
  void Stop(); // Maniascript
  void StopAndRewind(); // Maniascript
};

struct CGameNetFormPlayground : public CGameNetForm {
  CGameNetFormPlayground();

};

struct CGameCtnArticleNode : public CMwNod {
  string Name;
  const string NodeName; // Maniascript
  const bool IsDirectory; // Maniascript
  CGameCtnArticleNodeDirectory* const ParentNode; // Maniascript
  CMwNod* GetCollectorNod(); // Maniascript
};

struct CGameSwitcher : public CMwNod {
  int FocusDialogCount;
  const MwBuffer<CGameSwitcher*> ModuleStack;
};

struct CGameManialinkOldTable : public CGameManialinkControl {
};

struct CGameCtnMenusManiaPlanet : public CGameCtnMenus {
  const MwBuffer<CGameCtnChallengeInfo*> ChallengeInfosCampaign;
  CGameCtnCampaign* const CurrentCampaign;
  CGameManialink3dWorld* const Manialink3dWorld;
  CGameManialink3dStyle* const Manialink3d_BaseStyle;
  CGameManiaAppTitle* const MenuCustom_CurrentManiaApp;
  CGameManiaPlanetMenuStations* const MenuManiaPlanet_MenuStations;
  CGameManialink3dStyle* const MenuManiaPlanet3d_BrowserManialink3dStyle;
  iso4 CurFocusedCamLoc;
  vec2 CurFocusedCamFovMaxMinY;
  bool DebugBlockBackground;
};

// Description: "Manialink entry."
struct CGameManialinkLabel : public CGameManialinkControl {
  enum class EBlendMode {
    Default = 0,
    Add = 1,
  };
  string Style; // Maniascript
  string Substyle; // Maniascript
  wstring TextFont; // Maniascript
  void SetText(wstring NewText); // Maniascript
  wstring Value; // Maniascript
  const uint ValueLineCount; // Maniascript
  int MaxLine; // Maniascript
  float LineSpacing; // Maniascript
  bool AppendEllipsis; // Maniascript
  bool AutoNewLine; // Maniascript
  float Opacity; // Maniascript
  vec3 TextColor; // Maniascript
  float TextSizeReal; // Maniascript
  uint TextSize; // Maniascript
  EBlendMode Blend; // Maniascript
  float ComputeWidth(wstring Text); // Maniascript
  float ComputeWidth2(wstring Text, bool Translated); // Maniascript
  float ComputeHeight(wstring Text); // Maniascript
};

struct CGameYoutube : public CMwNod {
  const string AccessToken;
  void CleanPendingUploads();
};

struct CGameUILayer : public CMwNod {
  enum class EUILayerType {
    Normal = 0,
    ScoresTable = 1,
    ScreenIn3d = 2,
    AltMenu = 3,
    Markers = 4,
    CutScene = 5,
    InGameMenu = 6,
    EditorPlugin = 7,
    ManiaplanetPlugin = 8,
    ManiaplanetMenu = 9,
    LoadingScreen = 10,
  };
  enum class EUILayerAnimation {
    None = 0,
    DownFast = 1,
    DownSlow = 2,
    LeftFast = 3,
    LeftSlow = 4,
    RightFast = 5,
    RightSlow = 6,
    ScaleFast = 7,
    ScaleSlow = 8,
    UpFast = 9,
    UpSlow = 10,
  };
  bool IsVisible; // Maniascript
  const bool AnimInProgress; // Maniascript
  EUILayerType Type; // Maniascript
  EUILayerAnimation InAnimation; // Maniascript
  EUILayerAnimation OutAnimation; // Maniascript
  EUILayerAnimation InOutAnimation; // Maniascript
  string AttachId; // Maniascript
  wstring ManialinkPage; // Maniascript
  string ManialinkPageUtf8;
  CGameManialinkPage* const LocalPage; // Maniascript
  const bool IsLocalPageScriptRunning; // Maniascript
};

struct CGamePlaygroundCommon : public CGameCtnPlayground {
};

struct CGameCtnAnchoredObject : public CMwNod {
  CGameCtnAnchoredObject();

  enum class CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  nat3 BlockUnitCoord;
  MwId AnchorTreeId;
  vec3 AbsolutePositionInMap;
  float Yaw;
  float Pitch;
  float Roll;
  bool IsFlying;
  bool IsAutoPiloted;
  float Scale;
  CGameItemModel* const ItemModel;
  bool IsLocationInitialised;
  iso4 BlockLocation;
  iso4 LocationInBlock;
  CGameWaypointSpecialProperty* WaypointSpecialProperty;
  const MwBuffer<CGameCtnAnchoredObject*> NeighbourObjects;
  const MwBuffer<uint> NeighbourObjects_ClipIndex;
};

struct CGameSwitcherModule : public CMwNod {
};

// Description: "This object handles the interface."
struct CGamePlaygroundUIConfig : public CMwNod {
  enum class EUISequence {
    None = 0,
    Playing = 1,
    Intro = 2,
    Outro = 3,
    Podium = 4,
    CustomMTClip = 5,
    EndRound = 6,
    PlayersPresentation = 7,
    UIInteraction = 8,
    RollingBackgroundIntro = 9,
    CustomMTClip_WithUIInteraction = 10,
  };
  enum class EUIStatus {
    None = 0,
    Normal = 1,
    Warning = 2,
    Error = 3,
    Official = 4,
  };
  enum class EVisibility {
    None = 0,
    Normal = 1,
    Manual = 2,
    ForcedHidden = 3,
    ForcedVisible = 4,
  };
  enum class ELabelsVisibility {
    None = 0,
    Never = 1,
    Always = 2,
    WhenInFrustum = 3,
    WhenVisible = 4,
    WhenInMiddleOfScreen = 5,
  };
  enum class EAvatarVariant {
    Default = 0,
    Sad = 1,
    Happy = 2,
  };
  enum class EUISound {
    Default = 0,
    Silence = 1,
    StartMatch = 2,
    EndMatch = 3,
    StartRound = 4,
    EndRound = 5,
    PhaseChange = 6,
    TieBreakPoint = 7,
    TiePoint = 8,
    VictoryPoint = 9,
    Capture = 10,
    TimeOut = 11,
    Notice = 12,
    Warning = 13,
    PlayerEliminated = 14,
    PlayerHit = 15,
    Checkpoint = 16,
    Finish = 17,
    Record = 18,
    ScoreProgress = 19,
    RankChange = 20,
    Bonus = 21,
    FirstHit = 22,
    Combo = 23,
    PlayersRemaining = 24,
    Custom1 = 25,
    Custom2 = 26,
    Custom3 = 27,
    Custom4 = 28,
  };
  enum class ENoticeLevel {
    Default = 0,
    PlayerInfo = 1,
    PlayerWarning = 2,
    MapInfo = 3,
    MapWarning = 4,
    MatchInfo = 5,
    MatchWarning = 6,
  };
  enum class EMessageDisplay {
    Chat = 0,
    Small = 1,
    Status = 2,
    Big = 3,
  };
  enum class EObserverMode {
    Default = 0,
    Forced = 1,
    Forbidden = 2,
    Manual = 3,
  };
  enum class EHudVisibility {
    Nothing = 0,
    Everything = 1,
    MarkersOnly = 2,
    Default = 3,
  };
  EUISequence UISequence; // Maniascript
  const bool UISequenceIsCompleted; // Maniascript
  wstring UISequence_CustomMTClip; // Maniascript
  uint UISequence_CustomMTRefTime; // Maniascript
  bool UISequence_CanSkipIntroMT; // Maniascript
  string UISequence_PodiumPlayersWin; // Maniascript
  string UISequence_PodiumPlayersLose; // Maniascript
  wstring ManialinkPage; // Maniascript
  wstring BigMessage; // Maniascript
  string BigMessageAvatarLogin; // Maniascript
  EAvatarVariant BigMessageAvatarVariant; // Maniascript
  EUISound BigMessageSound; // Maniascript
  uint BigMessageSoundVariant; // Maniascript
  wstring StatusMessage; // Maniascript
  wstring GaugeMessage; // Maniascript
  float GaugeRatio; // Maniascript
  uint GaugeClan; // Maniascript
  string Hud3dMarkers; // Maniascript
  string MarkersXML; // Maniascript
  const MwBuffer<CGameUILayer*> UILayers; // Maniascript
  bool OverlayHideAll; // Maniascript
  bool OverlayHideNotices; // Maniascript
  bool OverlayHideMapInfo; // Maniascript
  bool OverlayHideOpponentsInfo; // Maniascript
  bool OverlayHideChat; // Maniascript
  bool OverlayHideCheckPointList; // Maniascript
  bool OverlayHideRoundScores; // Maniascript
  bool OverlayHideCountdown; // Maniascript
  bool OverlayHideCrosshair; // Maniascript
  bool OverlayHideGauges; // Maniascript
  bool OverlayHideConsumables; // Maniascript
  bool OverlayHide321Go; // Maniascript
  bool OverlayHideBackground; // Maniascript
  bool OverlayHideChrono; // Maniascript
  bool OverlayHideSpeedAndDist; // Maniascript
  bool OverlayHidePersonnalBestAndRank; // Maniascript
  bool OverlayHidePosition; // Maniascript
  bool OverlayHideCheckPointTime; // Maniascript
  bool OverlayHideEndMapLadderRecap; // Maniascript
  bool OverlayHideMultilapInfos; // Maniascript
  bool OverlayHideSpectatorControllers; // Maniascript
  bool OverlayHideSpectatorInfos; // Maniascript
  bool OverlayChatHideAvatar; // Maniascript
  uint OverlayChatLineCount; // Range: 0 - 40 // Maniascript
  vec2 OverlayChatOffset; // Maniascript
  vec2 CountdownCoord; // Maniascript
  bool NoticesFilter_HidePlayerInfo; // Maniascript
  bool NoticesFilter_HidePlayerWarning; // Maniascript
  bool NoticesFilter_HidePlayerInfoIfNotMe; // Maniascript
  bool NoticesFilter_HidePlayerWarningIfNotMe; // Maniascript
  bool NoticesFilter_HideMapInfo; // Maniascript
  bool NoticesFilter_HideMapWarning; // Maniascript
  bool NoticesFilter_HideMatchInfo; // Maniascript
  bool NoticesFilter_HideMatchWarning; // Maniascript
  ENoticeLevel NoticesFilter_LevelToShowAsBigMessage; // Maniascript
  string ScoreTable; // Maniascript
  EVisibility ScoreTableVisibility; // Maniascript
  string SmallScoreTable; // Maniascript
  EVisibility SmallScoreTableVisibility; // Maniascript
  bool ScoreTableOnlyManialink; // Maniascript
  bool AltMenuNoDefaultScores; // Maniascript
  bool AltMenuNoCustomScores; // Maniascript
  bool OverlayScoreSummary; // Maniascript
  MwId ScoreSummary_Player1; // Maniascript
  int ScoreSummary_Points1; // Maniascript
  int ScoreSummary_RoundPoints1; // Maniascript
  int ScoreSummary_MatchPoints1; // Maniascript
  float ScoreSummary_Gauge1; // Maniascript
  MwId ScoreSummary_Player2; // Maniascript
  int ScoreSummary_Points2; // Maniascript
  int ScoreSummary_RoundPoints2; // Maniascript
  int ScoreSummary_MatchPoints2; // Maniascript
  float ScoreSummary_Gauge2; // Maniascript
  bool ScreenIn3dHideScoreSummary; // Maniascript
  bool ScreenIn3dHideVersus; // Maniascript
  int CountdownEndTime; // Maniascript
  EUIStatus UIStatus; // Maniascript
  EHudVisibility LabelsVisibility; // Maniascript
  ELabelsVisibility AlliesLabelsVisibility; // Maniascript
  EVisibility AlliesLabelsShowGauges; // Maniascript
  EVisibility AlliesLabelsShowNames; // Maniascript
  uint AlliesLabelsMaxCount; // Range: 0 - 250 // Maniascript
  ELabelsVisibility TeamLabelsVisibility; // Maniascript
  EVisibility TeamLabelsShowGauges; // Maniascript
  EVisibility TeamLabelsShowNames; // Maniascript
  ELabelsVisibility OpposingTeamLabelsVisibility; // Maniascript
  EVisibility OpposingTeamLabelsShowGauges; // Maniascript
  EVisibility OpposingTeamLabelsShowNames; // Maniascript
  bool ForceSpectator; // Maniascript
  uint SpectatorForceCameraType; // Maniascript
  MwId SpectatorAutoTarget; // Maniascript
  MwId SpectatorForcedTarget; // Maniascript
  int SpectatorForcedClan; // Maniascript
  float SpectatorCamAutoLatitude; // Maniascript
  float SpectatorCamAutoLongitude; // Maniascript
  float SpectatorCamAutoRadius; // Maniascript
  EObserverMode SpectatorObserverMode; // Maniascript
  void SendChat(wstring Text); // Maniascript
  void SendNotice(wstring Text, ENoticeLevel Level, CGamePlayerInfo* Avatar, EAvatarVariant AvatarVariant, EUISound Sound, int SoundVariant); // Maniascript
  wstring GetLayerManialinkAction(CGameUILayer* Layer); // Maniascript
  void ClearLayerManialinkAction(CGameUILayer* Layer); // Maniascript
  void QueueMessage1(int Duration, int Priority, EMessageDisplay Level, wstring Message, CGamePlayerInfo* Avatar, EAvatarVariant AvatarVariant, EUISound Sound, int SoundVariant); // Maniascript
  void QueueMessage2(int Duration, int Priority, EMessageDisplay Level, wstring Message, EUISound Sound, int SoundVariant); // Maniascript
  void QueueMessage3(int Duration, int Priority, EMessageDisplay Level, wstring Message); // Maniascript
  void ClearMessages(); // Maniascript
};

// Description: ""
struct CGameManialinkFrame : public CGameManialinkControl {
  const MwBuffer<CGameManialinkControl*> Controls; // Maniascript
  const MwBuffer<CGameManialinkControl*> ControlsCache; // Maniascript
  const MwBuffer<CGameManialinkControl*> SubChildsCache; // Maniascript
  CGameManialinkControl* GetFirstChild(string ControlId); // Maniascript
  bool ClipWindowActive; // Maniascript
  vec2 ClipWindowRelativePosition; // Maniascript
  vec2 ClipWindowSize; // Maniascript
  bool ScrollActive; // Maniascript
  vec2 ScrollOffset; // Maniascript
  const vec2 ScrollAnimOffset; // Maniascript
  vec2 ScrollMax; // Maniascript
  vec2 ScrollMin; // Maniascript
  bool ScrollGridSnap; // Maniascript
  vec2 ScrollGrid; // Maniascript
  void Scroll(vec2 DeltaInGridUnits); // Maniascript
  void ScrollBumpTop(); // Maniascript
  void ScrollBumpBottom(); // Maniascript
  void ScrollBumpLeft(); // Maniascript
  void ScrollBumpRight(); // Maniascript
  bool DisablePreload; // Maniascript
};

struct CGameManialinkPage : public CMwNod {
  const string Url;
  CGameManialinkScriptHandler* const ScriptHandler;
  const string ScriptText;
  CGameManialinkFrame* const MainFrame; // Maniascript
  CGameManialinkControl* GetFirstChild(string ControlId); // Maniascript
  CGameManialinkControl* const FocusedControl; // Maniascript
  bool LinksInhibited; // Maniascript
  void GetClassChildren(string Class, CGameManialinkFrame* Frame, bool Recursive); // Maniascript
  const MwBuffer<CGameManialinkControl*> GetClassChildren_Result; // Maniascript
  void ScrollToControl(CGameManialinkControl* Control); // Maniascript
};

// Description: "Manialink control."
struct CGameManialinkControl : public CMwNod {
  enum class AlignHorizontal {
    Left = 0,
    HCenter = 1,
    Right = 2,
    None = 3,
  };
  enum class AlignVertical {
    Top = 0,
    VCenter = 1,
    Bottom = 2,
    None = 3,
    VCenter2 = 4,
  };
  CControlBase* const Control;
  CGameManialinkFrame* const Parent; // Maniascript
  const string ControlId; // Maniascript
  const MwBuffer<string> ControlClasses; // Maniascript
  bool HasClass(string Class); // Maniascript
  vec2 Size; // Maniascript
  EAlignHorizontal HorizontalAlign; // Maniascript
  EAlignVertical VerticalAlign; // Maniascript
  bool Visible; // Maniascript
  vec2 RelativePosition_V3; // Maniascript
  float ZIndex; // Maniascript
  float RelativeScale; // Maniascript
  float RelativeRotation; // Maniascript
  const vec2 AbsolutePosition_V3; // Maniascript
  const vec3 AbsolutePosition; // Maniascript
  const float AbsoluteScale; // Maniascript
  const float AbsoluteRotation; // Maniascript
  bool DataAttributeExists(string DataName); // Maniascript
  string DataAttributeGet(string DataName); // Maniascript
  void DataAttributeSet(string DataName, string DataValue); // Maniascript
  wstring ToolTip; // Maniascript
  void Show(); // Maniascript
  void Hide(); // Maniascript
  void Unload(); // Maniascript
  void Focus(); // Maniascript
  const bool IsFocused; // Maniascript
  vec3 RelativePosition; // Maniascript
  float PosnX; // Maniascript
  float PosnY; // Maniascript
  float PosnZ; // Maniascript
  float Scale; // Maniascript
};

// Description: ""
struct CGameManialinkQuad : public CGameManialinkControl {
  enum class EKeepRatioMode {
    Inactive = 0,
    Clip = 1,
    Fit = 2,
  };
  enum class EBlendMode {
    Default = 0,
    Add = 1,
  };
  void ChangeImageUrl(string fieldName); // Maniascript
  CPlugBitmap* Image; // Maniascript
  string ImageUrl; // Maniascript
  string ImageUrlFocus; // Maniascript
  string Style; // Maniascript
  string Substyle; // Maniascript
  bool StyleSelected; // Maniascript
  const bool DownloadInProgress; // Maniascript
  vec3 Colorize; // Maniascript
  vec3 ModulateColor; // Maniascript
  vec3 BgColor; // Maniascript
  vec3 BgColorFocus; // Maniascript
  float Opacity; // Maniascript
  EKeepRatioMode KeepRatio; // Maniascript
  EBlendMode Blend; // Maniascript
  void RefreshImages(); // Maniascript
  bool Video_IsPlaying; // Maniascript
  bool Video_IsLooping; // Maniascript
  void Video_Rewind(); // Maniascript
};

struct CGameManiaPlanetMenuStations : public CMwNod {
  bool IsActive;
  CMwCmdFiber* const MenuManiaPlanetCmd;
  CScene2d* const OverlayMenuStations;
  CGameManialinkPage* const MainPage;
  const wstring MainPageManialinkViewerStartUrl;
  CGameManiaTitle* const MainStationFullManiaTitle;
  const bool IsBeginnerMenuDisplay;
  bool IsEditingStations;
  CGameScriptHandlerStation* const ScriptHandlerStations;
};

// File extension: 'AnchorPoint.gbx'
struct CGameCtnAnchorPoint : public CMwNod {
  CGameCtnAnchorPoint();

  const MwId TreeId;
  iso4 LocationInBlock;
  CGameCtnBlock* const Block;
};

// File extension: 'MacroBlock.Gbx'
struct CGameCtnMacroBlockInfo : public CGameCtnCollector {
  CGameCtnMacroBlockInfo();

  bool Connected;
  bool Initialized;
  CGameCtnBlockInfo* const GeneratedBlockInfo;
  const bool IsGround; // Maniascript
  const bool HasStart; // Maniascript
  const bool HasFinish; // Maniascript
  const bool HasCheckpoint; // Maniascript
  const bool HasMultilap; // Maniascript
  CGameCtnBlockInfo* const GeneratedBlockModel; // Maniascript
  CScriptTraitsMetadata* ScriptMetadata;
  void ClearScriptMetadata(); // Maniascript
  const wstring Name; // Maniascript
};

struct CGameCtnEditorCommon : public CGameCtnEditor {
  enum class TrafficDensityEnum {
    Null = 0,
    Low = 1,
    Normal = 2,
    High = 3,
    Very_High = 4,
  };
  CGameCtnChallenge* const Challenge;
  CGameCursorBlock* const Cursor;
  CGameCursorItem* const ItemCursor;
  bool GhostBlockForcedGroundElseAir;
  uint GhostBlockForcedVariantIndex;
  CGameCtnEditorCommonInterface* EditorInterface;
  const float MouseMoveDist;
  CGameCtnBlockInfo* const CurrentBlockInfo;
  CGameCtnBlockInfo* const CurrentGhostBlockInfo;
  CGameItemModel* const CurrentItemModel;
  CGameItemModel* const CurrentTrafficItemModel;
  CGameCtnMacroBlockInfo* const CurrentMacroBlockInfo;
  CGameCtnMacroBlockInfo* const CopyPasteMacroBlockInfo;
  CGameCtnBlock* CurrentTerrainBlock;
  CGameCtnBlock* CurrentBlock;
  int PluginOffsetX;
  int PluginOffsetY;
  int PluginOffsetZ;
  CGameEditorPluginMapMapType* const PluginMapType;
  void ReloadPlugins();
  void DeactivateAllPlugins();
  bool HackMixMapping;
  bool UseNewTerraforming;
  bool UseNewPillars;
  bool HackExternalMbIconsHD;
  bool HackInternalMbIconsHD;
  bool HackForceTerrainBulldozeForbidden;
  bool HackCreateItemGroupFromMb;
  bool EnableGhostMode;
  bool EmbedCustomItems;
  bool HideAlwaysCursorDirectionalArrow;
  uint IterationsRecursive;
  CGameCtnBlock* const PickedBlock;
  CGameCtnBlock* BlockEditor2_Block;
  CGameCtnBlockInfo* BlockEditor2_BlockInfo;
  CPlugSolid* BlockEditor2_BlockSolid;
  uint CopperPriceThreshhold_WarningHigh;
  uint CopperPriceThreshhold_WarningVeryHigh;
  bool HasCopperPriceDemoLimit;
  uint CopperPriceThreshhold_DemoWarning;
  uint CopperPriceThreshhold_DemoLimit;
  string ColoredCopperPrice;
  wstring SkinText;
  CGameControlCameraEditorOrbital* OrbitalCameraControl;
  const float CameraTargetMinX;
  const float CameraTargetMaxX;
  const float CameraTargetMinZ;
  const float CameraTargetMaxZ;
  const float CameraAngle;
  CSceneMobil* const Grid;
  CGameOutlineBox* const UndergroundBox;
  CGameOutlineBox* const SelectionBox;
  CGameOutlineBox* const ItemSelectionBox;
  CGameOutlineBox* const CustomSelectionBox;
  CGameOutlineBox* const OffZoneSelectionBox;
  CGameOutlineBox* const ConstraintsSelectionBox;
  vec3 GridColor;
  float GridColorAlpha; // Range: 0 - 1
  string BlockEditor2_Text;
  wstring MacroDecalsEditor_Text;
  void ButtonComputeShadowsOnClick();
  void ButtonComputeShadowsDialogOnClick();
  void ButtonComputeDecalsOnClick();
  void ButtonHelper1OnClick();
  void SweepBlocksAndSave();
  void SweepTerrainAndSave();
  void SweepOffZoneAndSave();
  void SweepConstraintsAndSave();
  void SweepObjectsAndSave();
  void SuperSweepAndSave();
  void SweepSelectionAndSave();
  void SwitchToCameraIconMode();
  void SwitchFromCameraIconMode();
  void BlockViewerOnClick();
  void BlockAddOnClick();
  void BlockSubOnClick();
  void ButtonTestOnClick();
  void ButtonOffZoneOnClick();
  void ButtonConstraintsOnClick();
  void ButtonBackOnClick();
  void ButtonSaveOnClick();
  void ButtonSaveAsOnClick();
  void ButtonLoadOnClick();
  void ButtonValidateOnClick();
  void ButtonCursorRaiseOnClick();
  void ButtonCursorLowerOnClick();
  void ButtonCursorTurnClockwiseOnClick();
  void ButtonCursorTurnAnticlockwiseOnClick();
  void ButtonCursorUpOnClick();
  void ButtonCursorDownOnClick();
  void ButtonCursorLeftOnClick();
  void ButtonCursorRightOnClick();
  void HackTurbo_ButtonMapStyleOnClick();
  void HackTurbo_ButtonClassicMapEditorOnClick();
  void ButtonUndoOnClick();
  void ButtonRedoOnClick();
  void ButtonZoomInOnClick();
  void ButtonZoomOutOnClick();
  void ButtonEraserModeOnClick();
  void ButtonUndergroundModeOnClick();
  void ButtonAirMappingModeOnClick();
  void ButtonFreelookModeOnClick();
  void ButtonPickerModeOnClick();
  void ButtonSelectionBoxAddModeOnClick();
  void ButtonSelectionBoxSubModeOnClick();
  void ButtonChooseSkinModeOnClick();
  void ButtonSetCardEventModeOnClick();
  void ButtonInventoryDecalsOnClick();
  void ButtonInventoryTrafficOnClick();
  void ButtonInventoryFlyingTrafficOnClick();
  void ButtonInventoryBlocksOnClick();
  void ButtonInventoryGhostBlocksOnClick();
  void ButtonInventoryTerraformOnClick();
  void ButtonInventoryObjectsOnClick();
  void ButtonInventoryPluginsOnClick();
  void ButtonInventoryMacroBlocksOnClick();
  void ButtonCreateDeckOnClick();
  void ButtonMacroDecalsOnClick();
  void ButtonMacroDecalsSave_OnClick();
  void ButtonMacroDecalsScreenshot_OnClick();
  void ButtonMacroDecalApplyScreenshot_OnClick();
  void ButtonBlockPropertyModeOnClick();
  void ButtonBlockStockOnClick();
  void ButtonCopyPasteOnClick();
  void DeleteArticle_OnRemoveInstancesOnly();
  void DeleteArticle_OnRemoveInstancesAndModel();
  void DeleteArticle_OnYes();
  void ButtonItemEditModeOnClick();
  void ButtonItemNewModeOnClick();
  void ButtonItemCreateFromBlockModeOnClick();
  void ButtonBlockItemEditModeOnClick();
  void ButtonBlockItemCreateModeOnClick();
  void ButtonLightOnClick();
  void ButtonChallengeTypeOnClick();
  void ButtonObjectivesOnClick();
  void ButtonHelpOnClick();
  void ButtonShowChallengeDetailsOnClick();
  void ButtonEditToolsOnClick();
  void ButtonAdditionalToolsOnClick();
  void ButtonChooseMapTypeOnClick();
  void ButtonSelectionBoxCopyOnClick();
  void ButtonSelectionBoxCutOnClick();
  void ButtonSelectionBoxSaveNewOnClick();
  void ButtonSelectionBoxResetOnClick();
  void ButtonSelectionBoxSelectAllOnClick();
  void ButtonSelectionBoxSymmetriseOnClick();
  void EditorPluginCreateOnClick();
  void EditorPluginEditOnClick();
  void ButtonMixMapOnClick();
  void ButtonNewTerrainEditorOnClick();
  void ButtonNewPillarsOnClick();
  void ButtonHackExternalMbIconsHDOnClick();
  void ButtonHackInternalMbIconsHDOnClick();
  void ButtonHackCreateItemGroupFromMbOnClick();
  void ButtonEditEndRaceReplay();
  void ButtonBackStepOnClick();
  CGameCtnEditorDecals* EditorDecals;
  bool EnableMapProcX2;
  float Radius;
  int Offset;
  void BlockEditor_OnRotateIcon();
  void BlockEditor_OnCancelIcon();
  void BlockEditor_OnSaveIcon();
  void MacroDecalsEditor_OnSave();
  void MacroDecalsEditor_OnCancel();
  void SaveMacroBlockFromScript_OnSave();
  void SaveMacroBlockFromScript_OnCancel();
  void OnPluginOperationCancelled();
  void OnPluginOperationCancelled_OnYes();
  void OnPluginOperationCancelled_OnNo();
  void SaveChallengeFromScript_OnSave();
  void ComputeShadowsFromScript_OnOk();
  void SetObjectivesFromScript_OnOk();
  void HideInterfaceFromScript_OnOk();
  void HideInterfaceFromScript_OnCancel();
  void SwitchToMTFromScript_OnOk();
  void SwitchToPlaygroundFromScript_OnOk();
  void SwitchToValidationFromScript_OnOk();
  void SwitchToTestWithMapTypeFromScript_OnOk();
  void SwitchToTestWithMapTypeFromScript_OnCancel();
  void QuitFromScript_OnOk();
  void QuickQuitFromScript_OnOk();
  void ChangePlaceModeFromScript_OnOk();
  string DebugShootIconName;
  void OnMapRulesModeSelected();
  void TooManyCoppers_OnOk();
  void TooManyCoppers_OnNeverShowAgain();
  wstring ForcedPluginName;
  string ForcedPluginSettings;
  bool MoodIsDynamicTime;
  float MoodTimeOfDay01; // Range: 0 - 1
  string MoodTimeOfDayStr;
  string MoodDayDurationStr;
  UnnamedEnum CamMode;
};

struct CGameCtnEditorFree : public CGameCtnEditorCommon {
};

struct CGameCtnEditorPuzzle : public CGameCtnEditorFree {
};

struct CGamePlaygroundScore : public CMwNod {
  CGamePlayerInfo* const User; // Maniascript
  const bool IsRegisteredForLadderMatch; // Maniascript
  const float LadderScore; // Maniascript
  int LadderRankSortValue; // Maniascript
  float LadderMatchScoreValue; // Maniascript
  uint LadderClan; // Maniascript
};

struct CGameCtnEditorCommonInterface : public CMwNod {
  CGameCtnEditorCommonInterface();

  CGameCtnArticleNodeDirectory* const BlockIconsRoot;
  CGameCtnArticleNodeDirectory* const TerraformIconsRoot;
  CGameCtnArticleNodeDirectory* const MacroBlockIconsRoot;
  CGameCtnArticleNodeDirectory* const ObjectIconsRoot;
  CGameCtnArticleNodeDirectory* const DecalIconsRoot;
  CGameCtnArticleNodeDirectory* const MacroDecalIconsRoot;
  CGameCtnArticleNodeDirectory* const TrafficObjectIconsRoot;
  CGameCtnArticleNodeDirectory* const PluginsIconsRoot;
  CScene2d* const InterfaceScene;
  CGameCtnEditorCommon* const Editor;
  void ToggleBlockRotation();
  wstring CurrentToolTip;
  const string Allocated;
  const wstring m_LastMacroBlockSelected;
  void EditSnapCamera_OnOk();
  void EditSnapCamera_OnCancel();
  CPlugBitmap* const EditSnapCamera_BitmapSnap;
  void HideInterface();
  void ShowInterface();
  void ButtonItemPrevSubMenu();
  void ButtonItemNextSubMenu();
  void ButtonBlockPrevSubMenu();
  void ButtonBlockNextSubMenu();
};

struct CGameControlCameraFollowAboveWater : public CGameControlCameraTarget {
  CGameControlCameraFollowAboveWater();

};

// File extension: 'MacroDecals.Gbx'
struct CGameCtnMacroDecals : public CGameCtnCollector {
  CGameCtnMacroDecals();

  bool Connected;
};

struct CGameCtnEditorSimple : public CGameCtnEditorPuzzle {
};

struct CGameCtnArticleNodeDirectory : public CGameCtnArticleNode {
  const MwBuffer<CGameCtnArticleNode*> ChildNodes;
  void CreateNewDirectory();
  const MwBuffer<CGameCtnArticleNode*> Children; // Maniascript
  const bool HasChildDirectory; // Maniascript
  const bool HasChildArticle; // Maniascript
};

struct CGameCtnArticleNodeArticle : public CGameCtnArticleNode {
  CGameCtnArticle* const Article;
};

struct CGameCtnDecalsBrush : public CMwNod {
  CGameCtnDecalsBrush();

  const uint NbDecals;
  const uint NbMacroDecals;
  UnnamedEnum DecalProj;
  float GridStepPos;
  float GridStepRoll;
  float GridStepSize;
  float GridStepOpacity;
  float GridStepThickness;
  float Size;
  float EraserSize;
  float Opacity;
  float Thickness;
  void Reset();
  bool RandomizeAtlasId;
  bool RandomizeRoll;
  float RandomRollMin;
  float RandomRollMax;
  bool RandomizeSize;
  float RandomSizeMin;
  float RandomSizeMax;
  bool RandomizeOpacity;
  float RandomOpacityMin;
  float RandomOpacityMax;
};

struct CGameCtnEditorDecals : public CMwNod {
  CGameCtnEditorDecals();

  enum class SemanticsEnum {
    Normal = 0,
    Underwater = 1,
    Other = 2,
  };
  CGameCtnDecalsBrush* BrushPlace;
  CGameCtnDecalsBrush* BrushModify;
  uint EffectFlickerFrequency;
  bool ShowHelpers;
  const uint NbDecals;
  const uint NbDecalsInBrush;
  const UnnamedEnum EditedType;
  const UnnamedEnum EditionMode;
  CGameCtnChallenge* MergeFromChallenge;
  void BitmapDecalSetFlipX();
  void BitmapDecalSetFlipY();
  void SnapOnLandscape();
  CSceneDecalsManager* const DecalsMgr;
  CScene* Scene;
  void Undo_Clear();
  float UVDistMax;
  void BitmapDecalSetRemoveTooCloseDecals();
  void BitmapDecalSetRemoveInvalidDecals();
  void BitmapDecalSetRemoveInvalidDecalsAllSets();
  CPlugBitmap* Bitmap;
  ESemanticsEnum EnumSemantics;
  const uint BitmapDecalSet;
  CPlugDecalModel* DecalModelMacro;
  const uint DecalModelMacroSet;
  bool TestDensity;
  float Density; // Range: 0 - 1
  void BrushSizeInc();
  void BrushSizeDec();
  void BrushRollInc();
  void BrushRollDec();
  void BrushOpacityInc();
  void BrushOpacityDec();
  void BrushThicknessInc();
  void BrushThicknessDec();
  void BrushModelOrAtlasInc();
  void BrushModelOrAtlasPrev();
  void DecalFillZone();
  void BrushReset();
  void BrushApply();
  void BrushDelete();
  void BrushPickSimple();
  void BrushPickMulti();
  void EditionModeModify();
  void EditionModePlace();
  void DecalBoxesShowHide();
  void DecalSnapOnOff();
  void BrushSwitchProj();
  void BrushFlipU();
  void Undo_Rewind();
  void Undo_Forward();
  void DecalSet_Add();
  void DecalSet_Remove();
  void DecalSet_Next();
  void DecalSet_Prev();
  void DecalSet_Duplicate();
  void DecalSets_Save();
  void BitmapEditionPlaneShowHide();
  void BitmapCellGridShowHide();
  void SceneBitmapsDecals_Create();
  void SceneBitmapsDecals_Destroy();
};

// File extension: 'ZoneGenealogy.Gbx'
struct CGameCtnZoneGenealogy : public CMwNod {
  CGameCtnZoneGenealogy();

  MwId CurrentZoneId;
  uint CurrentIndex;
  UnnamedEnum Dir;
  MwBuffer<MwId> ZoneIds;
  CGameCtnZone* const CurrentZone;
  const MwBuffer<CGameCtnZone*> Zones;
  const MwBuffer<int> ZoneHeights;
  const int BaseHeight;
  const int BottomHeight;
  const int TopHeight;
  void RemoveLastZoneId();
  void AddZoneId();
};

// Description: "Server plugin"
struct CGameServerPlugin : public CMwNod {
  CPlugFileTextScript* Script;
  CGameManiaTitle* const LoadedTitle; // Maniascript
  CGameCtnChallengeInfo* const MapInfo; // Maniascript
  CGameConnectedClient* GetClient(string Login); // Maniascript
  CGameConnectedClient* GetClientFromUI(CGamePlaygroundUIConfig* UI); // Maniascript
  const MwBuffer<CGameConnectedClient*> Clients; // Maniascript
  const MwBuffer<CGameConnectedClient*> Spectators; // Maniascript
  const MwBuffer<CGameConnectedClient*> Players; // Maniascript
  const MwBuffer<CGamePlaygroundScore*> Scores; // Maniascript
  const MwBuffer<CGamePlayerInfo*> Users; // Maniascript
  const MwBuffer<CGameTeamProfile*> Teams; // Maniascript
  string NeutralEmblemUrl; // Maniascript
  string ForcedClubLinkUrl1; // Maniascript
  string ForcedClubLinkUrl2; // Maniascript
  void TweakTeamColorsToAvoidHueOverlap(); // Maniascript
  const uint Now; // Maniascript
  const MwBuffer<CGameServerPluginEvent*> PendingEvents; // Maniascript
  void TriggerModeScriptEvent2(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void SendModeScriptCommandBoolean(string CommandName, bool BoolVal); // Maniascript
  void SendModeScriptCommandInteger(string CommandName, int IntVal); // Maniascript
  void SendModeScriptCommandReal(string CommandName, float RealVal); // Maniascript
  void SendModeScriptCommandText(string CommandName, wstring TextVal); // Maniascript
  const bool MapLoaded; // Maniascript
  const bool MapUnloadRequested; // Maniascript
  const MwBuffer<CGameCtnChallengeInfo*> MapList; // Maniascript
  const uint CurMapIndex; // Maniascript
  uint NextMapIndex; // Maniascript
  void RestartMap(); // Maniascript
  void NextMap(); // Maniascript
  bool HoldMapUnloadRequest; // Maniascript
  bool Client_ComputeMinimap; // Maniascript
  CGamePlaygroundUIConfigMgrScript* const UIManager; // Maniascript
  CGameScriptServerAdmin* const ServerAdmin; // Maniascript
  CGameServerScriptXmlRpc* const XmlRpc; // Maniascript
  CXmlScriptParsingManager* const Xml; // Maniascript
  CNetScriptHttpManager* const Http; // Maniascript
  CSystemPlatformScript* const System; // Maniascript
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly); // Maniascript
};

// Description: "ServerPlugin Event"
struct CGameServerPluginEvent : public CScriptBaseConstEvent {
  enum class EType {
    Unknown = 0,
    ClientConnected = 1,
    ClientDisconnected = 2,
    MapLoaded = 3,
    BeginMatch = 4,
    BeginRound = 5,
    EndRound = 6,
    EndMatch = 7,
    MapUnloadRequested = 8,
    MapUnloaded = 9,
    ChatCommand = 10,
    ChatMessage = 11,
    ModeCallback = 12,
  };
  const EType Type; // Maniascript
  CGameConnectedClient* const Client; // Maniascript
  const wstring ChatText; // Maniascript
  const wstring ChatCommandType; // Maniascript
  const MwBuffer<wstring> ChatCommandData; // Maniascript
  const wstring ModeCallbackType; // Maniascript
  const MwBuffer<wstring> ModeCallbackData; // Maniascript
  const MwBuffer<CGamePlaygroundScore*> EndMatchScores; // Maniascript
  const MwBuffer<uint> EndMatchRanks; // Maniascript
};

struct CGameCtnAutoTerrain : public CMwNod {
  CGameCtnAutoTerrain();

  int OffsetX;
  int OffsetY;
  int OffsetZ;
  CGameCtnZoneGenealogy* const Genealogy;
};

struct CGameCtnSolidDecals : public CMwNod {
  CGameCtnSolidDecals();

  string Name;
  MwId TypeId;
  uint TypeIntensity;
  uint DecalFrequency;
  const uint DecalsCount;
};

struct CGameCtnBlockInfoMobil : public CMwNod {
  CGameCtnBlockInfoMobil();

  CSceneMobil* const OldMobil;
  CPlugSolid* SolidFid;
  CPlugPrefab* PrefabFid;
  CPlugSolid* OldSolidAggreg;
  CPlugSolid2Model* Solid2FromBlockItem;
  CPlugSurface* SurfaceFromBlockItem;
  CPlugSolid* const SolidCache;
  const MwBuffer<CPlugRoadChunk*> RoadChunks;
  CPlugPath* RailPath;
  CPlugPath* TrafficPath;
  const MwBuffer<CPlugSolid*> TextureModifiedSolidsCache;
  const MwBuffer<CGameCtnBlockInfoMobilLink*> DynaLinks;
  uint SolidFrequency;
  const MwBuffer<CGameCtnSolidDecals*> SolidDecals;
  uint NoDecalFrequency;
  vec3 GeomTranslation;
  vec3 GeomRotation;
};

// Description: "A currently connected CUser"
struct CGameConnectedClient : public CMwNod {
  CGamePlayerInfo* const User; // Maniascript
  CGamePlaygroundUIConfig* const UI; // Maniascript
  const bool IsConnectedToMasterServer; // Maniascript
  const string ClientVersion; // Maniascript
  const string ClientTitleVersion; // Maniascript
  const bool IsSpectator; // Maniascript
  const uint IdleDuration; // Maniascript
};

struct CGameControlCameraEditorOrbital : public CGameControlCamera {
  CGameControlCameraEditorOrbital();

  float m_CameraToTargetDistance;
  float m_CurrentVAngle;
  float m_CurrentHAngle;
  vec3 m_TargetedPosition;
  float m_MinDistance;
  float m_MaxDistance;
  float m_MinVAngle;
  float m_MaxVAngle;
  float m_ParamTurnCameraDistance_X;
  float m_ParamTurnCameraDistance_Y;
  float m_ParamScrollAreaStart;
  float m_ParamScrollAreaMax;
  float m_ParamScrollLowerLimitStart;
  float m_ParamScrollLowerLimitEnd;
  float m_ParamScrollSpeed0_OnZoomMin;
  float m_ParamScrollSpeed0_OnZoomMax;
  float m_ParamScrollSpeed1_OnZoomMin;
  float m_ParamScrollSpeed1_OnZoomMax;
  float m_ParamPanSpeed_OnZoomMin;
  float m_ParamPanSpeed_OnZoomMax;
  float m_ParamDefaultSmoothDuration;
  float m_ParamMiddleButZoomMinPower;
  float m_ParamMiddleButZoomMaxPower;
  float m_ParamScrollZoomPower;
  float m_ParamHeightSpeed_OnZoomMin;
  float m_ParamHeightSpeed_OnZoomMax;
  float m_ParamHeightSpeed_PgUpPgDown;
  float m_ParamButtonZoomPower;
  float m_ParamButtonZoomMinPower;
  float m_ParamSpeedBuildUpTime;
};

// File extension: 'GameCtnMediaBlockDOF.gbx'
struct CGameCtnMediaBlockDOF : public CGameCtnMediaBlock {
  CGameCtnMediaBlockDOF();

  float FocusZ;
  float LensSize;
};

// File extension: 'GameCtnMediaBlockToneMapping.gbx'
struct CGameCtnMediaBlockToneMapping : public CGameCtnMediaBlock {
  CGameCtnMediaBlockToneMapping();

  float Exposure;
  float MaxHDR;
  UnnamedEnum FilmCurve;
};

// File extension: 'GameCtnMediaBlockBloomHdr.gbx'
struct CGameCtnMediaBlockBloomHdr : public CGameCtnMediaBlock {
  CGameCtnMediaBlockBloomHdr();

  float Intensity;
  float StreaksIntensity;
  float StreaksAttenuation;
};

struct CGameCtnMediaBlockTimeSpeed : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTimeSpeed();

};

// File extension: 'GameCtnMediaBlockManialink.Gbx'
struct CGameCtnMediaBlockManialink : public CGameCtnMediaBlock {
  CGameCtnMediaBlockManialink();

  wstring ManialinkURL;
};

struct CGamePlayerProfileChunk : public CMwNod {
  const string ChunkName;
  const string GameName;
  const string Checksum;
  const uint TimeStamp;
  const bool IsSynchronizedFromMS;
  const bool IsModified;
  const bool IsLoaded;
  const bool IsOnlineSave;
};

struct CGamePlayerProfileChunk_AccountSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_AccountSettings();

  const string OnlineLogin;
  string OnlinePassword;
  string OnlineValidationCode;
  string OnlineSupportKey;
  wstring NickName;
  wstring Description;
  string ClubLinkUrl;
  bool LoginValidated;
  bool RememberOnlinePassword;
  bool AutoConnect;
  bool AskForAccountConversion;
  bool ReceiveNews;
  const uint OnlineRemainingNickNamesChangesCount;
  const uint OnlinePlanets;
  string RSAPrivateKey;
  string LastUsedMSAddress;
  string LastUsedMSPath;
  string LastSessionId;
  const wstring OnlinePath;
  CGameLeague* League;
  MwBuffer<wstring> LeagueSteps;
  wstring AvatarName;
  const MwBuffer<CGameNetOnlineMessage*> InboxMessages;
  const MwBuffer<CGameNetOnlineMessage*> ReadMessages;
  const MwBuffer<CGameNetOnlineMessage*> OutboxMessages;
  bool UnlockAllCheat;
  bool FriendsCheat;
  uint EulaVersion;
  uint PrivacyPolicyVersion;
  uint Age;
  const uint FameStars;
};

struct CGamePlayerProfileChunk_GameSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GameSettings();

  float StereoscopyStrength01;
  float StereoscopyAdvancedScreenDist;
  CGameCtnMediaShootParams* ShootParamsVideo;
  wstring ServerName;
  wstring ServerComment;
  uint NetworkGameMode;
  uint MaxPlayerCount;
  uint MaxSpectatorCount;
  uint NetStateQuality;
  uint LadderMode;
  bool AdvancedCreate;
  bool AllowDownload;
  bool EnablePlayerSkinGeom;
  bool EnableUnlimitedHorns;
  bool AutoSaveReplayOnMulti;
  bool SaveRoundsSeparately;
  bool ProposeSimpleEditor;
  uint EditorHelp;
  uint UnlockClickCount;
  bool UnlockTalkedToFriend;
  bool UnlockInvitedBuddy;
  bool UnlockHadBuddy;
  bool UnlockSponsoredBuddy;
  bool UnlockCreatedTrack;
  bool UnlockPlayedHotSeat;
  bool UnlockPlayedOnline;
  bool UnlockSentScore;
  float MouseAccelQuantity;
  float MouseSensitivity_Default;
  float MouseSensitivity_Laser;
};

struct CGamePlayerProfileChunk_InterfaceSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_InterfaceSettings();

  wstring MenuLeagueFilter;
  uint MenuInternetView;
};

struct CGamePlayerProfileChunk_InputBindingsConfig : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_InputBindingsConfig();

  CInputBindingsConfig* Config;
};

struct CGamePlayerProfileChunk_VehiclesSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_VehiclesSettings();

};

struct CGamePlayerProfileChunk_OldChallenge : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_OldChallenge();

  wstring ChallengeName;
};

struct CGamePlayerProfileChunk_OldCampaign : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_OldCampaign();

  CGameCtnCampaign* Campaign;
};

// File extension: 'GameCtnMediaBlockVehicleLight.gbx'
struct CGameCtnMediaBlockVehicleLight : public CGameCtnMediaBlock {
  CGameCtnMediaBlockVehicleLight();

};

struct CGamePlaygroundUIConfigMgrScript : public CMwNod {
  void ResetAll(); // Maniascript
  CGamePlaygroundUIConfig* const UIAll; // Maniascript
  const MwBuffer<CGamePlaygroundUIConfig*> UI; // Maniascript
  CGamePlaygroundUIConfig* GetUI_Player(CGameScriptPlayer* Player); // Maniascript
  CGamePlaygroundUIConfig* GetUI_User(CGamePlayerInfo* User); // Maniascript
  CGamePlaygroundUIConfig* GetUI_ConnectedClient(CGameConnectedClient* Client); // Maniascript
  const MwBuffer<CGameUILayer*> UILayers; // Maniascript
  CGameUILayer* UILayerCreate(); // Maniascript
  void UILayerDestroy(CGameUILayer* Layer); // Maniascript
  void UILayerDestroyAll(); // Maniascript
  const MwBuffer<CGameUILayer*> UIReplayLayers; // Maniascript
  uint UISequenceMaxDuration; // Maniascript
  bool HoldLoadingScreen; // Maniascript
  const MwBuffer<CGamePlaygroundUIConfigEvent*> PendingEvents; // Maniascript
  CGamePlaygroundUIConfig* const LocalPlayerConfig;
  CGamePlaygroundUIConfig* const LocalPlayerConfig1;
  CGamePlaygroundUIConfig* const LocalPlayerConfig2;
  CGamePlaygroundUIConfig* const LocalPlayerConfig3;
};

// File extension: 'Frame.Gbx'
struct CGamePlaygroundControlSmPlayers : public CControlFrame {
  CGamePlaygroundControlSmPlayers();

  uint ListLineCount;
  uint ListColumnCount;
  CControlFrame* CardModelPlayer;
  void EdClean();
};

// File extension: 'Frame.Gbx'
struct CGamePlaygroundControlMessages : public CControlFrame {
  CGamePlaygroundControlMessages();

  CControlContainer* MessageModel;
  uint LineCount;
  float LineHeight;
  uint DisplayDuration;
  uint MinDuration;
  float LastMessageBaseScale;
  uint ShowEffectDuration;
  float ShowEffectScale;
  uint HideEffectDuration;
  float HideEffectScale;
  float RatioElimination;
};

// Description: "Rules API for gamemodes."
struct CGamePlaygroundScript : public CMwNod {
  enum class EMedal {
    None = 0,
    Finished = 1,
    Bronze = 2,
    Silver = 3,
    Gold = 4,
    Author = 5,
  };
  enum class ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum class ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  CPlugFileTextScript* Script;
  wstring ModeStatusMessage; // Maniascript
  CGameManiaTitle* const LoadedTitle; // Maniascript
  const string ServerLogin; // Maniascript
  const wstring ServerName; // Maniascript
  const wstring ServerModeName; // Maniascript
  const wstring MapName; // Maniascript
  CGameCtnChallenge* const Map; // Maniascript
  const wstring MapPlayerModelName; // Maniascript
  const MwBuffer<CGamePlayerInfo*> Users; // Maniascript
  const MwBuffer<CGameTeamProfile*> Teams; // Maniascript
  string NeutralEmblemUrl; // Maniascript
  const string ForcedClubLinkUrl1; // Maniascript
  const string ForcedClubLinkUrl2; // Maniascript
  void TweakTeamColorsToAvoidHueOverlap(); // Maniascript
  string ClientManiaAppUrl; // Maniascript
  const uint Now; // Maniascript
  const uint Period; // Maniascript
  bool MatchEndRequested; // Maniascript
  const bool ServerShutdownRequested; // Maniascript
  const bool MapLoaded; // Maniascript
  void RequestLoadMap(); // Maniascript
  void RequestUnloadMap(); // Maniascript
  const MwBuffer<CGameCtnChallengeInfo*> MapList; // Maniascript
  uint NextMapIndex; // Maniascript
  CGamePlaygroundUIConfigMgrScript* const UIManager; // Maniascript
  void Hud_Load(wstring ModuleName); // Maniascript
  CGamePlaygroundModuleServerHud* const Hud; // Maniascript
  void PassOnModuleEvent(CGamePlaygroundUIConfigEvent* EventToPassOn); // Maniascript
  void DiscardModuleEvent(CGamePlaygroundUIConfigEvent* EventToDiscard); // Maniascript
  void Ladder_OpenMatch_Request(); // Maniascript
  void Ladder_AddPlayer(CGamePlaygroundScore* PlayerScore); // Maniascript
  void Ladder_OpenMatch_BeginRequest(); // Maniascript
  void Ladder_OpenMatch_AddPlayer(CGamePlaygroundScore* PlayerScore); // Maniascript
  void Ladder_OpenMatch_EndRequest(); // Maniascript
  void Ladder_CloseMatchRequest(); // Maniascript
  void Ladder_CancelMatchRequest(); // Maniascript
  const bool Ladder_RequestInProgress; // Maniascript
  void Ladder_SetResultsVersion(uint Version); // Maniascript
  void Ladder_SetMatchMakingMatchId(uint MatchId); // Maniascript
  void Ladder_EnableChallengeMode(bool Enable); // Maniascript
  bool Admin_KickUser(CGamePlayerInfo* User, wstring Reason); // Maniascript
  void Admin_SetLobbyInfo(bool IsLobby, int LobbyPlayerCount, int LobbyMaxPlayerCount, float LobbyPlayersLevel); // Maniascript
  CGameScriptServerAdmin* const ServerAdmin; // Maniascript
  void AutoTeamBalance(); // Maniascript
  void Solo_SetNewRecord(CGamePlaygroundScore* PlayerScore, EMedal PlayerScore); // Maniascript
  const bool Solo_NewRecordSequenceInProgress; // Maniascript
  CGameServerScriptXmlRpc* const XmlRpc; // Maniascript
  CXmlScriptParsingManager* const Xml; // Maniascript
  CNetScriptHttpManager* const Http; // Maniascript
  CInputScriptManager* const Input; // Maniascript
  CGameDataFileManagerScript* const DataFileMgr; // Maniascript
  CGameScoreAndLeaderBoardManagerScript* const ScoreMgr; // Maniascript
  CSystemPlatformScript* const System; // Maniascript
  const ESystemPlatform SystemPlatform; // Maniascript
  const ESystemSkuIdentifier SystemSkuIdentifier; // Maniascript
  int Synchro_AddBarrier(); // Maniascript
  bool Synchro_BarrierReached(int Barrier); // Maniascript
  bool Users_AreAllies(CGamePlayerInfo* User1, CGamePlayerInfo* User2); // Maniascript
  void Users_RequestSwitchToSpectator(CGamePlayerInfo* User); // Maniascript
  CGamePlayerInfo* Users_CreateFake(wstring NickName, int RequestedTeam); // Maniascript
  void Users_DestroyFake(CGamePlayerInfo* User); // Maniascript
  void Users_SetNbFakeUsers(int NbTeam1, int NbTeam2); // Maniascript
  void Users_DestroyAllFakes(); // Maniascript
  uint Users_EdNbFakeUsers;
  void ItemList_Begin(); // Maniascript
  bool ItemList_Begin2(); // Maniascript
  MwId ItemList_Add(wstring ModelName); // Maniascript
  MwId ItemList_AddWithSkin(wstring ModelName, wstring SkinNameOrUrl); // Maniascript
  void ItemList_End(); // Maniascript
  void DemoToken_StartUsingToken(); // Maniascript
  void DemoToken_StopUsingToken(); // Maniascript
  void DemoToken_GetAndUseToken(CGamePlayerInfo* User); // Maniascript
  void ActionList_Begin(); // Maniascript
  bool ActionList_Begin2(); // Maniascript
  MwId ActionList_Add(wstring ActionName); // Maniascript
  void ActionList_End(); // Maniascript
  bool UseMinimap; // Maniascript
  bool Replay_AutoStart; // Maniascript
  void Replay_Start(); // Maniascript
  void Replay_Stop(); // Maniascript
  CGameAchievementScriptManager* const AchievementsManager; // Maniascript
  CGameScriptMgrTurret* const TurretsManager; // Maniascript
  CGameScriptMgrVehicle* const VehiclesManager; // Maniascript
  CGameMgrAction* const ActionsManager; // Maniascript
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly); // Maniascript
};

// File extension: 'GameCtnMediaBlockFxCameraMap.gbx'
struct CGameCtnMediaBlockFxCameraMap : public CGameCtnMediaBlock {
  CGameCtnMediaBlockFxCameraMap();

  wstring FileName;
};

struct CGamePodium : public CMwNod {
  CSceneCamera* const PodiumCamera;
};

struct CGameControlCameraTrackManiaRace : public CGameControlCamera {
  CGameControlCameraTrackManiaRace();

};

struct CGamePlaygroundBasic : public CGamePlayground {
};

// Description: "This is the Maniaplanet plugins Manialink interface."
struct CGameScriptHandlerManiaPlanetPlugin : public CGameManialinkScriptHandler {
  CGameManiaPlanetScriptAPI* const ManiaPlanet; // Maniascript
  CGameManiaplanetPlugin* const ParentApp; // Maniascript
  CGamePluginInterfacesScript* const Plugins; // Maniascript
};

struct CGamePlayerProfileChunk_PackagesInfos : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_PackagesInfos();

  const uint PackagesInfosCount;
};

struct CGameCtnMediaBlockShoot : public CGameCtnMediaBlock {
  CGameCtnMediaBlockShoot();

};

struct CGamePlayerProfileChunk_GameScores : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GameScores();

  const uint GlobalSkillPoints;
  const MwBuffer<CGamePlayerProfileChunk_ChallengesScores*> ChallengesScoresChunks;
};

struct CGamePlayerProfileChunk_GameStats : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GameStats();

  const uint TotalTimePlay;
  const uint TotalTimeInSolo;
  const uint TotalTimeInSoloRace;
  const uint TotalTimeInSoloPuzzle;
  const uint TotalTimeInSoloPlatform;
  const uint TotalTimeInSoloScript;
  const uint TotalTimeInSplitScreen;
  const uint TotalTimeInHotSeat;
  const uint TotalTimeInNetwork;
  const uint TotalTimeInNetworkTimeAttack;
  const uint TotalTimeInNetworkRounds;
  const uint TotalTimeInNetworkLaps;
  const uint TotalTimeInNetworkStunts;
  const uint TotalTimeInNetworkCup;
  const uint TotalTimeInNetworkScript;
  const uint TotalTimeInEditChallenge;
  const uint TotalTimeInEditReplay;
  const uint TotalTimeInEditSkin;
  const uint TotalTimeInManiaLink;
  const uint TotalNbReset;
  const uint TotalNbFinish;
  const uint TotalNbChallenges;
  const uint AverageTimePlay;
  const uint AverageTimeInSolo;
  const uint AverageTimeInSoloRace;
  const uint AverageTimeInSoloPuzzle;
  const uint AverageTimeInSoloPlatform;
  const uint AverageTimeInSoloScript;
  const uint AverageTimeInSplitScreen;
  const uint AverageTimeInHotSeat;
  const uint AverageTimeInNetwork;
  const uint AverageTimeInNetworkTimeAttack;
  const uint AverageTimeInNetworkRounds;
  const uint AverageTimeInNetworkLaps;
  const uint AverageTimeInNetworkStunts;
  const uint AverageTimeInNetworkCup;
  const uint AverageTimeInNetworkScript;
  const uint AverageTimeInEditChallenge;
  const uint AverageNbReset;
  const uint AverageNbFinish;
  const uint MaxTimePlay;
  const uint MaxTimeInSolo;
  const uint MaxTimeInSoloRace;
  const uint MaxTimeInSoloPuzzle;
  const uint MaxTimeInSoloPlatform;
  const uint MaxTimeInSoloScript;
  const uint MaxTimeInSplitScreen;
  const uint MaxTimeInHotSeat;
  const uint MaxTimeInNetwork;
  const uint MaxTimeInNetworkTimeAttack;
  const uint MaxTimeInNetworkRounds;
  const uint MaxTimeInNetworkLaps;
  const uint MaxTimeInNetworkStunts;
  const uint MaxTimeInNetworkCup;
  const uint MaxTimeInNetworkScript;
  const uint MaxTimeInEditChallenge;
  const uint MaxNbReset;
  const uint MaxNbFinish;
  const wstring MostPlayed;
  const wstring MostRaced;
  const wstring MostEdited;
  const wstring MostNetted;
  const MwBuffer<CGamePlayerProfileChunk_ChallengesStats*> ChallengesStatsChunks;
};

struct CGamePlayerProfileChunk_ChallengesStats : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ChallengesStats();

  const uint ChallengesStatsCount;
};

struct CGamePlayerProfileChunk_ChallengesScores : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ChallengesScores();

  const uint ChallengesScoresCount;
};

struct CGameCtnMediaBlockSkel : public CGameCtnMediaBlock {
  CGameCtnMediaBlockSkel();

};

struct CGameEditorAnimClip : public CMwNod {
  CGameEditorAnimChar_Interface* const CharEditorInterface;
  CGameEditorAnimChar* const CharEditor;
  float ParticlesPosX;
  float ParticlesPosY;
  float ParticlesPosZ;
  float ParticlesVelX;
  float ParticlesVelY;
  float ParticlesVelZ;
  float ParticlesAnglesYaw;
  float ParticlesAnglesPitch;
  float ParticlesAnglesRoll;
  bool ParticlesOnMesh;
  bool UseCustomColor;
  float ParticlesScale; // Range: 0 - 5
  bool CustomKeyLinearHue;
  bool CustomKeyPos;
  bool CustomKeyAngles;
  bool CustomKeyVel;
  bool KeyVelInLocal;
  bool CustomKeyVolume;
  bool CustomKeyPitch;
  uint SoundVariant;
  float SoundVolume; // Range: 0 - 5
  float Pitch; // Range: 0 - 4
  bool Preview;
  float SoundPosX;
  float SoundPosY;
  float SoundPosZ;
  const wstring SpriteTextureFid;
  float SpritesPosX;
  float SpritesPosY;
  float SpritesPosZ;
  float SpritesSize; // Range: 0 - 25
  bool SpritesIsFree;
  bool UseRandomSoundVar;
  const string SoundVarName;
  wstring ActionDescription;
};

// File extension: 'EDTransition.Gbx'
struct CGameCtnBlockInfoTransition : public CGameCtnBlockInfo {
  CGameCtnBlockInfoTransition();

};

// File extension: 'ZoneTransition.Gbx'
struct CGameCtnZoneTransition : public CGameCtnZone {
  CGameCtnZoneTransition();

  enum class ZoneTransitionType {
    Custom = 0,
    TriZone = 1,
    Overlap = 2,
  };
  CGameCtnBlockInfoTransition* BlockInfoTransition;
  EZoneTransitionType TransitionType;
  MwId FrontierId_0To1;
  MwId FrontierId_0To2;
  MwId FrontierId_1To2;
  MwId FrontierId_Base;
  MwId FrontierId_Overlap;
  MwId FrontierId_BaseToOverlap;
  MwId ReplacementZoneId;
  UnnamedEnum Border_North;
  CGameCtnZoneGenealogy* const Genealogy_North;
  UnnamedEnum Border_East;
  CGameCtnZoneGenealogy* const Genealogy_East;
  UnnamedEnum Border_South;
  CGameCtnZoneGenealogy* const Genealogy_South;
  UnnamedEnum Border_West;
  CGameCtnZoneGenealogy* const Genealogy_West;
};

struct CGameMenuSkinChooser : public CMwNod {
  CGameMenuSkinChooser();

  CGameScene* GameScene;
  CPlugCamControlModel* CamModel;
};

struct CGameEditorTrigger : public CMwNod {
  CGameEditorTrigger();

};

// File extension: ''
struct CGameCtnZoneFusionInfo : public CMwNod {
  CGameCtnZoneFusionInfo();

  MwId CompatibleZoneId;
  MwId MergedZoneId;
  UnnamedEnum FusionType;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardBuddy : public CGameControlCard {
  CGameControlCardBuddy();

  const wstring StrLoginOrNickName;
  const wstring StrStatus;
  CPlugBitmap* AvatarOrLeague;
};

struct CGameBuddy : public CMwNod {
  CGameBuddy();

  string Login;
  wstring NickName;
  wstring Path;
  uint SkillsRank;
  uint SkillsPoints;
  uint LadderRank;
  uint LadderPoints;
  bool Invited;
  bool WaitingConfirmation;
  bool CanReceiveMessages;
  bool IsUsed;
  bool IsOnline;
  CGameNetServerInfo* Server;
  CGameAvatar* Avatar;
  CGameLeague* League;
};

struct CGameEditorPluginMapMapType : public CGameEditorPluginMap {
  enum class ValidationStatus {
    NotValidable = 0,
    Validable = 1,
    Validated = 2,
  };
  bool CustomEditAnchorData; // Maniascript
  void ClearMapMetadata(); // Maniascript
  EValidationStatus ValidationStatus; // Maniascript
  wstring ValidabilityRequirementsMessage; // Maniascript
  bool ValidationEndRequested; // Maniascript
  bool ValidationEndNoConfirm; // Maniascript
  void RequestEnterPlayground(); // Maniascript
  void RequestLeavePlayground(); // Maniascript
  const bool IsSwitchedToPlayground; // Maniascript
  CGamePlaygroundUIConfigMgrScript* const UIManager; // Maniascript
  const MwBuffer<CGamePlayerInfo*> Users; // Maniascript
};

struct CGameCursorItem : public CMwNod {
  CGameCursorItem();

  CSceneMobil* const HelperMobil;
  const vec3 CurrentPos;
};

struct CGameCtnMacroBlockJunction : public CMwNod {
  CGameCtnMacroBlockJunction();

  enum class ECardDir {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  int OffsetX;
  int OffsetY;
  int OffsetZ;
  ECardDir Dir;
  bool CanBeEntry;
  bool CanBeExit;
};

struct CGameActionMaker : public CGameEditorAsset {
  void Undo();
  void Redo();
  void Exit();
  void ModelLoad();
  void ActionNew();
  void ActionOpen();
  void ActionSaveAs();
  void SwitchFullScreen();
  void BlockSoundInsert();
  void BlockParticleInsert();
  void BlockSpriteInsert();
  void BlockRemove();
  void AdditionalTools();
  void SwitchToBlockMode();
  void SwitchToAnimMode();
  void SwitchToScriptMode();
  void AnimEdit();
  void AnimValidate();
  void BlocAnimValidate();
  void ScriptParamProjAdd();
  void ScriptParamProjSuppr();
  void ScriptParamProjEdit();
  void ScriptParamAnimEdit();
  void ScriptParamProjNext();
  void ScriptParamProjPrev();
  void ScriptParamUpdate();
  void ScriptParamCompil();
  void ScriptAdvancedParamCompil();
  void SoundTypePrev();
  void SoundTypeNext();
  void SoundVarPrev();
  void SoundVarNext();
  void ImportBullet();
  void ExportBullet();
  void Help();
  void ScriptAddAnimEffect();
  void ScriptAddProjEffect();
  void ScriptAddBuffEffect();
  void ScriptAddAoeEffect();
  void ScriptAddShieldEffect();
  void CreateResources();
  void ImportResources();
  void LibraryValidate();
  void ActionIsCustom();
  void ShowBulletEditor();
  void TestMode();
  void SwitchBulletState();
  void SubModelShowList();
  void SwitchSubModelVisibility();
  void SoloMode();
  void ModelValidate();
  void NextBulletPattern();
  void PrevBulletPattern();
  void NextBulletType();
  void PrevBulletType();
  void NextLaserType();
  void PrevLaserType();
  void EditModeBullet();
  void EditModeExplosion();
  void EditModeSound();
  void EditModeGameplay();
  void EditModeGauge();
  void SubModelTypeCore();
  void SubModelTypeTrail();
  void SubModelTypePower();
  void SubModelTypeSmokeDebris();
  void ProjectileSoundModeShooting();
  void ProjectileSoundModeExplosion();
  void ProjectileSoundModeProjectile();
  void ProjectileSoundModeRebound();
  void ProjectileSoundModeHoming();
  void ParamGameplayModeBullet();
  void ParamGameplayModeExplosion();
  void ParamLoadMesh();
  void DrawHelp();
  void SpriteTextureImport();
  CGameEditorAnimClip* const ClipEditor;
  CGameEditorBullet* const BulletEditor;
  CPlugAnimFile* const AnimFile;
  uint ClipIndex;
  CGameActionModel* Action;
  void TestMode_Start();
};

struct CGameCtnEditorScriptAnchoredObject : public CMwNod {
  enum class CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  const vec3 Position; // Maniascript
};

// Description: "Landmark of a map."
struct CGameCtnEditorScriptSpecialProperty : public CMwNod {
  enum class EWaypointType {
    Start = 0,
    Finish = 1,
    Checkpoint = 2,
    None = 3,
    StartFinish = 4,
    Dispenser = 5,
  };
  const string DefaultTag; // Maniascript
  const uint DefaultOrder; // Maniascript
  string Tag; // Maniascript
  uint Order; // Maniascript
  CGameCtnBlock* const Block; // Maniascript
  CGameCtnEditorScriptAnchoredObject* const Item; // Maniascript
  const EWaypointType WaypointType; // Maniascript
  const vec3 Position; // Maniascript
};

struct CGameCtnBlockInfoVariant : public CMwNod {
  enum class CardinalDirEnum {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  enum class MultiDirEnum {
    SameDir = 0,
    SymmetricalDirs = 1,
    AllDir = 2,
    OpposedDirOnly = 3,
    PerpendicularDirsOnly = 4,
    NextDirOnly = 5,
    PreviousDirOnly = 6,
  };
  enum class VariantBaseTypeEnum {
    Inherit = 0,
    None = 1,
    Conductor = 2,
    Generator = 3,
  };
  MwBuffer<CGameCtnBlockUnitInfo*> BlockUnitInfos;
  const MwId BlockInfoIdForLog;
  string Name; // Maniascript
  const bool IsAllUnderground; // Maniascript
  const bool IsPartUnderground; // Maniascript
  const nat3 Size; // Maniascript
  void AddSubMapSpot();
  void RemoveLastSubMapSpot();
  MwBuffer<iso4> SubMapSpot_Locations;
  CPlugSolid* HelperSolidFid;
  CPlugSolid* FacultativeHelperSolidFid;
  CMwNod* WaypointTriggerSolid;
  CMwNod* ScreenInteractionTriggerSolid;
  CGameGateModel* Gate;
  CGameTeleporterModel* Teleporter;
  CGameTurbineModel* Turbine;
  CPlugFlockModel* FlockModel;
  MwBuffer<CPlugEntitySpawner*> EntitySpawners;
  float FlockEmitterRadius;
  float FlockEmitterPower;
  uint FlockEmitterSpawnCount;
  bool FlockEmitterIsRepulsor;
  bool FlockEmitterIsLandingArea;
  iso4 FlockEmitterLoc;
  CGameSpawnModel* SpawnModel;
  CPlugProbe* Probe;
  bool HasManualSymmetryH;
  bool HasManualSymmetryV;
  bool HasManualSymmetryD1;
  bool HasManualSymmetryD2;
  const bool HasVolumeSymmetryH;
  const bool HasVolumeSymmetryV;
  const bool HasVolumeSymmetryD1;
  const bool HasVolumeSymmetryD2;
  const bool HasFreeClips;
  uint SymmetricalVariantIndex;
  ECardinalDirEnum CardinalDir;
  uint NoPillarBelowIndex;
  bool IsObsoleteVariant;
  bool IsFakeReplacement;
  bool AutoChangeVariantOff;
  bool DontPlaySound1;
  bool DontPlaySound2;
  bool IsNoPillarBelowVariant;
  EMultiDirEnum MultiDir;
  vec3 SpawnTrans;
  float SpawnYaw; // Range: -180 - 180
  float SpawnPitch; // Range: -90 - 90
  const int3 OffsetBoundingBoxMin; // Maniascript
  const int3 OffsetBoundingBoxMax; // Maniascript
  MwBuffer<CMwNod*> Mobils00;
  MwBuffer<CMwNod*> Mobils01;
  MwBuffer<CMwNod*> Mobils02;
  MwBuffer<CMwNod*> Mobils03;
  MwBuffer<CMwNod*> Mobils04;
  MwBuffer<CMwNod*> Mobils05;
  MwBuffer<CMwNod*> Mobils06;
  MwBuffer<CMwNod*> Mobils07;
  MwBuffer<CMwNod*> Mobils08;
  MwBuffer<CMwNod*> Mobils09;
  MwBuffer<CMwNod*> Mobils10;
  MwBuffer<CMwNod*> Mobils11;
  MwBuffer<CMwNod*> Mobils12;
  MwBuffer<CMwNod*> Mobils13;
  MwBuffer<CMwNod*> Mobils14;
  EVariantBaseTypeEnum VariantBaseType;
  void AddNewReplacedPillar();
  MwBuffer<CGameCtnBlockInfo*> ReplacedPillarBlockInfo_List;
  MwBuffer<nat3> ReplacedPillarOffset2D_List;
  MwBuffer<EMultiDirEnum> ReplacedPillarMultiDir_List;
  MwBuffer<bool> ReplacedPillarIsOnFlyingBase_List;
  const MwBuffer<bool> IsNewPillarPlacedBelow_List;
  void AddNewPlacedPillar();
  MwBuffer<CGameCtnBlockInfo*> PlacedPillarBlockInfo_List;
  MwBuffer<nat3> PlacedPillarOffset_List;
  MwBuffer<ECardinalDirEnum> PlacedPillarDir_List;
  CGameObjectPhyCompoundModel* CompoundModel;
  iso4 CompoundLoc;
  const MwBuffer<CGameCtnBlockUnitInfo*> BlockUnitModels; // Maniascript
};

struct CGameCtnBlockInfoVariantGround : public CGameCtnBlockInfoVariant {
  CGameCtnBlockInfoVariantGround();

  enum class EnumAutoTerrainPlaceType {
    Auto = 0,
    Force = 1,
    DoNotPlace = 2,
    DoNotDestroy = 3,
  };
  const MwBuffer<CGameCtnAutoTerrain*> AutoTerrains;
  bool AutoTerrainWithFrontiers;
  int AutoTerrainHeightOffset;
  EnumAutoTerrainPlaceType AutoTerrainPlaceType;
};

struct CGameCtnBlockInfoVariantAir : public CGameCtnBlockInfoVariant {
  CGameCtnBlockInfoVariantAir();

  CGameCtnBlockInfo* PillarsForCompatibility;
};

struct CGameTeamProfile : public CMwNod {
  wstring Name; // Maniascript
  wstring ZonePath; // Maniascript
  wstring City; // Maniascript
  string EmblemUrl; // Maniascript
  string PresentationManialinkUrl; // Maniascript
  string ClubLinkUrl; // Maniascript
  float ColorLinearHuePrimary; // Range: 0 - 1
  const vec3 ColorPrimaryAsColor;
  vec3 ColorPrimary; // Maniascript
  float ColorLinearHueSecondary; // Range: 0 - 1
  const vec3 ColorSecondaryAsColor;
  vec3 ColorSecondary; // Maniascript
  const wstring ColorText; // Maniascript
  const wstring ColorizedName; // Maniascript
  void UpdateCache();
};

// Description: "Events for Manialink page scripts."
struct CGameManialinkScriptEvent : public CScriptBaseConstEvent {
  enum class Type {
    KeyPress = 0,
    MouseClick = 1,
    MouseOver = 2,
    MouseOut = 3,
    EntrySubmit = 4,
    MenuNavigation = 5,
    PluginCustomEvent = 6,
  };
  enum class EMenuNavAction {
    Up = 0,
    Right = 1,
    Left = 2,
    Down = 3,
    Select = 4,
    Cancel = 5,
    PageUp = 6,
    PageDown = 7,
    AppMenu = 8,
    Action1 = 9,
    Action2 = 10,
    ScrollUp = 11,
    ScrollDown = 12,
  };
  const EType Type; // Maniascript
  const uint KeyCode; // Maniascript
  const string KeyName; // Maniascript
  const string CharPressed; // Maniascript
  const string ControlId; // Maniascript
  CGameManialinkControl* const Control; // Maniascript
  const EMenuNavAction MenuNavAction; // Maniascript
  const bool IsActionAutoRepeat; // Maniascript
  const wstring CustomEventType; // Maniascript
  const MwBuffer<wstring> CustomEventData; // Maniascript
  const wstring PluginCustomEventType; // Maniascript
  const MwBuffer<wstring> PluginCustomEventData; // Maniascript
};

// Description: "API for the plugins of the map editor."
struct CGameEditorPluginMap : public CGameManiaApp {
  enum class CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  enum class CardinalDirections8 {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
    NorthEast = 4,
    SouthEast = 5,
    SouthWest = 6,
    NorthWest = 7,
  };
  enum class RelativeDirections {
    Forward = 0,
    RightForward = 1,
    Right = 2,
    RightBackward = 3,
    Backward = 4,
    LeftBackward = 5,
    Left = 6,
    LeftForward = 7,
  };
  enum class PlaceMode {
    Unknown = 0,
    Terraform = 1,
    Block = 2,
    Macroblock = 3,
    Skin = 4,
    CopyPaste = 5,
    Test = 6,
    Plugin = 7,
    CustomSelection = 8,
    OffZone = 9,
    BlockProperty = 10,
    Path = 11,
    GhostBlock = 12,
    Item = 13,
    Light = 14,
  };
  enum class EditMode {
    Unknown = 0,
    Place = 1,
    FreeLook = 2,
    Erase = 3,
    Pick = 4,
    SelectionAdd = 5,
    SelectionRemove = 6,
  };
  enum class ShadowsQuality {
    NotComputed = 0,
    VeryFast = 1,
    Fast = 2,
    Default = 3,
    High = 4,
    Ultra = 5,
  };
  enum class ValidationStatus {
    NotValidable = 0,
    Validable = 1,
    Validated = 2,
  };
  const MwBuffer<CGameEditorPluginMapScriptEvent*> PendingEvents; // Maniascript
  CGameCtnChallenge* const Map; // Maniascript
  const wstring MapName; // Maniascript
  const wstring MapFileName; // Maniascript
  const bool IsEditorReadyForRequest; // Maniascript
  bool HoldLoadingScreen; // Maniascript
  void ComputeShadows(); // Maniascript
  void ComputeShadows1(EShadowsQuality ShadowsQuality); // Maniascript
  const EShadowsQuality CurrentShadowsQuality; // Maniascript
  const bool IsUltraShadowsQualityAvailable; // Maniascript
  void DisplayDefaultSetObjectivesDialog(); // Maniascript
  bool Undo(); // Maniascript
  bool Redo(); // Maniascript
  void Help(); // Maniascript
  void Validate(); // Maniascript
  void AutoSave(); // Maniascript
  void Quit(); // Maniascript
  void QuickQuit(); // Maniascript
  void QuitAndSetResult(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void QuickQuitAndSetResult(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void TestMapFromStart(); // Maniascript
  void TestMapFromCoord(int3 Coord, ECardinalDirections Dir); // Maniascript
  void TestMapWithMode(wstring RulesModeName); // Maniascript
  void TestMapWithMode2(wstring RulesModeName, string SettingsXml); // Maniascript
  void TestMapWithMode_SplitScreen(wstring RulesModeName); // Maniascript
  void TestMapWithMode_SplitScreen_n(wstring RulesModeName, uint ScreenCount); // Maniascript
  void TestMapWithMode_SplitScreen_n_m(wstring RulesModeName, uint ScreenCount, uint FakeCount, string SettingsXml); // Maniascript
  void StartTestMapWithMode(wstring RulesModeName); // Maniascript
  bool EnableMapTypeStartTest; // Maniascript
  void SaveMap(wstring FileName); // Maniascript
  void SaveMapCompat(wstring FileName, wstring Path); // Maniascript
  EPlaceMode PlaceMode; // Maniascript
  EditMode EditMode; // Maniascript
  bool UndergroundMode; // Maniascript
  bool BlockStockMode; // Maniascript
  nat3 CursorCoord; // Maniascript
  ECardinalDirections CursorDir; // Maniascript
  CGameCtnBlockInfo* CursorBlockModel; // Maniascript
  CGameCtnBlockInfo* CursorTerrainBlockModel; // Maniascript
  CGameCtnMacroBlockInfo* CursorMacroblockModel; // Maniascript
  CGameEditorGenericInventory* const Inventory; // Maniascript
  float CameraVAngle; // Maniascript
  float CameraHAngle; // Maniascript
  float CameraToTargetDistance; // Maniascript
  vec3 CameraTargetPosition; // Maniascript
  const vec3 CameraPosition; // Maniascript
  vec3 TargetedPosition; // Maniascript
  float ThumbnailCameraVAngle; // Maniascript
  float ThumbnailCameraHAngle; // Maniascript
  float ThumbnailCameraRoll; // Maniascript
  float ThumbnailCameraFovY; // Maniascript
  vec3 ThumbnailCameraPosition; // Maniascript
  bool GetRaceCamera(vec3 Position, float Yaw, float Pitch, float Roll, float FovY); // Maniascript
  bool EnableAirMapping; // Maniascript
  bool EnableMixMapping; // Maniascript
  void RemoveAllBlocks(); // Maniascript
  void RemoveAllTerrain(); // Maniascript
  void RemoveAllOffZone(); // Maniascript
  void RemoveAllObjects(); // Maniascript
  void RemoveAll(); // Maniascript
  void RemoveAllBlocksAndTerrain(); // Maniascript
  void ShowCustomSelection(); // Maniascript
  void HideCustomSelection(); // Maniascript
  void CopyPaste_Copy(); // Maniascript
  void CopyPaste_Cut(); // Maniascript
  void CopyPaste_Remove(); // Maniascript
  void CopyPaste_SelectAll(); // Maniascript
  void CopyPaste_ResetSelection(); // Maniascript
  void OpenToolsMenu(); // Maniascript
  void EditMediatrackIngame(); // Maniascript
  void PreloadAllBlocks(); // Maniascript
  void PreloadAllItems(); // Maniascript
  bool CanPlaceBlock(CGameCtnBlockInfo* BlockModel, int3 Coord, ECardinalDirections Dir, bool OnGround, uint VariantIndex); // Maniascript
  bool PlaceBlock(CGameCtnBlockInfo* BlockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool CanPlaceBlock_NoDestruction(CGameCtnBlockInfo* BlockModel, int3 Coord, ECardinalDirections Dir, bool OnGround, uint VariantIndex); // Maniascript
  bool PlaceBlock_NoDestruction(CGameCtnBlockInfo* BlockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool CanPlaceRoadBlocks(CGameCtnBlockInfo* BlockModel, int3 StartCoord, int3 EndCoord); // Maniascript
  bool PlaceRoadBlocks(CGameCtnBlockInfo* BlockModel, int3 StartCoord, int3 EndCoord); // Maniascript
  bool CanPlaceTerrainBlocks(CGameCtnBlockInfo* BlockModel, int3 StartCoord, int3 EndCoord); // Maniascript
  bool PlaceTerrainBlocks(CGameCtnBlockInfo* BlockModel, int3 StartCoord, int3 EndCoord); // Maniascript
  bool PlaceTerrainBlocks_NoDestruction(CGameCtnBlockInfo* BlockModel, int3 StartCoord, int3 EndCoord); // Maniascript
  bool CanPlaceMacroblock(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool PlaceMacroblock(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool CanPlaceMacroblock_NoDestruction(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool PlaceMacroblock_NoDestruction(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool CanPlaceMacroblock_NoTerrain(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool PlaceMacroblock_NoTerrain(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool RemoveMacroblock(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool RemoveMacroblock_NoTerrain(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  CGameCtnBlock* GetBlock(int3 Coord); // Maniascript
  CGameCtnBlock* GetBlockSafe(CGameCtnBlockInfo* BlockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool IsBlockModelSkinnable(CGameCtnBlockInfo* BlockModel); // Maniascript
  uint GetNbBlockModelSkins(CGameCtnBlockInfo* BlockModel); // Maniascript
  wstring GetBlockModelSkin(CGameCtnBlockInfo* BlockModel, uint SkinIndex); // Maniascript
  wstring GetSkinDisplayName(wstring SkinFileName); // Maniascript
  wstring GetBlockSkin(CGameCtnBlock* Block); // Maniascript
  void SetBlockSkin(CGameCtnBlock* Block, wstring SkinFileName); // Maniascript
  bool IsMacroblockModelSkinnable(CGameCtnMacroBlockInfo* BlockModel); // Maniascript
  bool SetMacroblockSkin(CGameEditorMapMacroBlockInstance* Macroblock, wstring SkinFileName); // Maniascript
  bool OpenBlockSkinDialog(CGameCtnBlock* Block); // Maniascript
  bool RemoveBlock(int3 Coord); // Maniascript
  bool RemoveBlockSafe(CGameCtnBlockInfo* BlockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool RemoveTerrainBlocks(int3 StartCoord, int3 EndCoord); // Maniascript
  uint GetBlockGroundHeight(CGameCtnBlockInfo* BlockModel, int CoordX, int CoordZ, ECardinalDirections Dir); // Maniascript
  uint GetGroundHeight(int CoordX, int CoordZ); // Maniascript
  int3 GetMouseCoordOnGround(); // Maniascript
  int3 GetMouseCoordAtHeight(uint CoordY); // Maniascript
  CGameCtnBlock* GetStartLineBlock(); // Maniascript
  bool RemoveItem(CGameCtnEditorScriptSpecialProperty* Item); // Maniascript
  void CopyPaste_AddOrSubSelection(int3 StartCoord, int3 EndCoord); // Maniascript
  bool CopyPaste_Symmetrize(); // Maniascript
  void SaveMacroblock(CGameCtnMacroBlockInfo* MacroblockModel); // Maniascript
  CGameCtnMacroBlockInfo* GetMacroblockModelFromName(wstring MacroblockModelName); // Maniascript
  CGameCtnMacroBlockInfo* GetMacroblockModelFromFilePath(wstring MacroblockModelFilePath); // Maniascript
  CGameCtnBlockInfo* GetTerrainBlockModelFromName(wstring TerrainBlockModelName); // Maniascript
  CGameCtnBlockInfo* GetBlockModelFromName(wstring BlockModelName); // Maniascript
  CGameEditorMapScriptClipList* CreateFrameClipList(); // Maniascript
  CGameEditorMapScriptClipList* CreateFixedClipList(); // Maniascript
  void UnvalidateMetadata(); // Maniascript
  void UnvalidateGameplayInfo(); // Maniascript
  void UnvalidatePlayfield(); // Maniascript
  bool RemoveMacroblock_NoTerrain_NoUnvalidate(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  bool PlaceMacroblock_NoTerrain_NoUnvalidate(CGameCtnMacroBlockInfo* MacroblockModel, int3 Coord, ECardinalDirections Dir); // Maniascript
  void GetConnectResults(CGameCtnBlock* ExistingBlock, CGameCtnBlockInfo* NewBlock); // Maniascript
  void GetConnectResultsBlockToMacroBlock(CGameCtnBlock* ExistingBlock, CGameCtnMacroBlockInfo* NewBlock); // Maniascript
  void GetConnectResultsMacroBlockToBlock(CGameEditorMapMacroBlockInstance* ExistingBlock, CGameCtnBlockInfo* NewBlock); // Maniascript
  void GetConnectResultsMacroBlockToMacroBlock(CGameEditorMapMacroBlockInstance* ExistingBlock, CGameCtnMacroBlockInfo* NewBlock); // Maniascript
  int GetStartBlockCount(bool IncludeMultilaps); // Maniascript
  int GetFinishBlockCount(bool IncludeMultilaps); // Maniascript
  int GetMultilapBlockCount(); // Maniascript
  int GetCheckpointBlockCount(); // Maniascript
  CGameEditorMapMacroBlockInstance* CreateMacroblockInstance(CGameCtnMacroBlockInfo* MacroblockModel, nat3 Coord, ECardinalDirections Dir); // Maniascript
  CGameEditorMapMacroBlockInstance* CreateMacroblockInstanceWithUserData(CGameCtnMacroBlockInfo* MacroblockModel, nat3 Coord, ECardinalDirections Dir, int UserData); // Maniascript
  CGameEditorMapMacroBlockInstance* CreateMacroblockInstanceWithClipList(CGameCtnMacroBlockInfo* MacroblockModel, nat3 Coord, ECardinalDirections Dir, CGameEditorMapScriptClipList* DefaultClipList); // Maniascript
  CGameEditorMapMacroBlockInstance* CreateMacroblockInstanceWithClipListAndUserData(CGameCtnMacroBlockInfo* MacroblockModel, nat3 Coord, ECardinalDirections Dir, CGameEditorMapScriptClipList* DefaultClipList, int UserData); // Maniascript
  CGameEditorMapMacroBlockInstance* GetMacroblockInstanceFromOrder(uint Order); // Maniascript
  CGameEditorMapMacroBlockInstance* GetMacroblockInstanceFromUnitCoord(int3 Coord); // Maniascript
  CGameEditorMapMacroBlockInstance* GetLatestMacroblockInstance(); // Maniascript
  CGameEditorMapMacroBlockInstance* GetLatestMacroblockInstanceWithOffset(uint Offset); // Maniascript
  CGameEditorMapMacroBlockInstance* GetMacroblockInstanceConnectedToClip(CGameEditorMapScriptClip* Clip); // Maniascript
  bool RemoveMacroblockInstance(CGameEditorMapMacroBlockInstance* MacroblockInstance); // Maniascript
  bool RemoveMacroblockInstanceFromOrder(uint Order); // Maniascript
  bool RemoveMacroblockInstanceFromUnitCoord(uint Order); // Maniascript
  bool RemoveMacroblockInstancesByUserData(int UserData); // Maniascript
  void ResetAllMacroblockInstances(); // Maniascript
  uint GetMaxOrder(); // Maniascript
  bool SetMapType(wstring MapType); // Maniascript
  wstring GetMapType(); // Maniascript
  void SetMapStyle(wstring MapStyle); // Maniascript
  wstring GetMapStyle(); // Maniascript
  void SetMapIsCreatedWithPartyEditor(bool IsCreatedWithPartyEditor); // Maniascript
  wstring GetAvailableMapName(); // Maniascript
  vec3 GetVec3FromCoord(nat3 Coord); // Maniascript
  CGameEditorPluginCameraAPI* const Camera; // Maniascript
  CGameEditorPluginCursorAPI* const Cursor; // Maniascript
  const MwBuffer<CGameCtnEditorScriptAnchoredObject*> Items; // Maniascript
  const MwBuffer<wstring> MediatrackIngameClips; // Maniascript
  uint MediatrackIngameEditedClipIndex; // Maniascript
  const MwBuffer<CGameCtnBlock*> Blocks; // Maniascript
  const MwBuffer<CGameCtnBlockInfo*> BlockModels; // Maniascript
  const MwBuffer<CGameCtnBlockInfo*> TerrainBlockModels; // Maniascript
  const MwBuffer<CGameCtnMacroBlockInfo*> MacroblockModels; // Maniascript
  const MwBuffer<CGameCtnBlock*> ClassicBlocks; // Maniascript
  const MwBuffer<CGameCtnBlock*> TerrainBlocks; // Maniascript
  const MwArray<CGameEditorMapScriptClipList*> FixedClipLists; // Maniascript
  const MwArray<CGameEditorMapScriptClipList*> FrameClipLists; // Maniascript
  const MwArray<CGameEditorMapScriptClipList*> MacroblockInstanceClipLists; // Maniascript
  const MwArray<CGameEditorMapMacroBlockInstance*> MacroblockInstances; // Maniascript
  const MwBuffer<CGameEditorPluginMapConnectResults*> ConnectResults; // Maniascript
  const MwBuffer<CGameCtnEditorScriptSpecialProperty*> AnchorData; // Maniascript
  MwBuffer<nat3> CustomSelectionCoords; // Maniascript
  vec3 CustomSelectionRGB; // Maniascript
  bool EnableEditorInputsCustomProcessing; // Maniascript
  bool EnableCursorShowingWhenInterfaceIsFocused; // Maniascript
  bool HideEditorInterface; // Maniascript
  bool HideBlockHelpers; // Maniascript
  bool ShowPlacementGrid; // Maniascript
  float CursorBrightnessFactor; // Maniascript
  bool HideAlwaysCursorDirectionalArrow; // Maniascript
  const bool IsTesting; // Maniascript
  const bool IsValidating; // Maniascript
  const bool EditorInputIsDown_Menu; // Maniascript
  const bool EditorInputIsDown_SwitchToRace; // Maniascript
  const bool EditorInputIsDown_Undo; // Maniascript
  const bool EditorInputIsDown_Redo; // Maniascript
  const bool EditorInputIsDown_CursorUp; // Maniascript
  const bool EditorInputIsDown_CursorRight; // Maniascript
  const bool EditorInputIsDown_CursorDown; // Maniascript
  const bool EditorInputIsDown_CursorLeft; // Maniascript
  const bool EditorInputIsDown_CursorRaise; // Maniascript
  const bool EditorInputIsDown_CursorLower; // Maniascript
  const bool EditorInputIsDown_CursorTurn; // Maniascript
  const bool EditorInputIsDown_CursorPick; // Maniascript
  const bool EditorInputIsDown_CursorPlace; // Maniascript
  const bool EditorInputIsDown_CursorDelete; // Maniascript
  const bool EditorInputIsDown_CameraUp; // Maniascript
  const bool EditorInputIsDown_CameraRight; // Maniascript
  const bool EditorInputIsDown_CameraDown; // Maniascript
  const bool EditorInputIsDown_CameraLeft; // Maniascript
  const bool EditorInputIsDown_CameraZoomNext; // Maniascript
  const bool EditorInputIsDown_Camera0; // Maniascript
  const bool EditorInputIsDown_Camera1; // Maniascript
  const bool EditorInputIsDown_Camera3; // Maniascript
  const bool EditorInputIsDown_Camera7; // Maniascript
  const bool EditorInputIsDown_Camera9; // Maniascript
  const bool EditorInputIsDown_PivotChange; // Maniascript
  const bool EditorInputIsDown_CursorTurnSlightly; // Maniascript
  const bool EditorInputIsDown_CursorTurnSlightlyAntiClockwise; // Maniascript
  const bool EditorInputIsDown_IconUp; // Maniascript
  const bool EditorInputIsDown_IconRight; // Maniascript
  const bool EditorInputIsDown_IconDown; // Maniascript
  const bool EditorInputIsDown_IconLeft; // Maniascript
  const bool EditorInputIsDown_RemoveAll; // Maniascript
  const bool EditorInputIsDown_Save; // Maniascript
  const bool EditorInputIsDown_SaveAs; // Maniascript
  const bool EditorInputIsDown_MapStyle; // Maniascript
  const bool EditorInputIsDown_ClassicMapEditor; // Maniascript
  const float CollectionSquareSize; // Maniascript
  const float CollectionSquareHeight; // Maniascript
  const uint CollectionGroundY; // Maniascript
  const EValidationStatus ValidationStatus; // Maniascript
  string ManialinkText; // Maniascript
  CGameManialinkPage* const ManialinkPage; // Maniascript
  uint GetInterfaceNumber(CGameCtnCollector* Collector); // Maniascript
  void SetInterfaceNumber(CGameCtnCollector* Collector, uint NewValue); // Maniascript
};

struct CGameCtnMediaBlockCameraEffectScript : public CGameCtnMediaBlockCameraEffect {
  CGameCtnMediaBlockCameraEffectScript();

  const float Now; // Maniascript
  const float A; // Maniascript
  const float B; // Maniascript
  const float C; // Maniascript
  vec3 OffsetPos; // Maniascript
  vec3 OffsetRot; // Maniascript
};

// Description: "API for server control when playing online."
struct CGameScriptServerAdmin : public CMwNod {
  enum class ESpecMode {
    Selectable = 0,
    SpectatorForced = 1,
    PlayerForced = 2,
    SpectatorSelectable = 3,
    PlayerSelectable = 4,
  };
  CGameCtnNetServerInfo* const ServerInfo; // Maniascript
  void AutoTeamBalance(); // Maniascript
  bool Kick1(CGamePlayerInfo* User, wstring Reason); // Maniascript
  bool Kick2(CGameConnectedClient* Client, wstring Reason); // Maniascript
  bool KickUser(CGamePlayerInfo* User, wstring Reason); // Maniascript
  bool Ban1(CGamePlayerInfo* User, wstring Reason); // Maniascript
  bool Ban2(CGameConnectedClient* Client, wstring Reason); // Maniascript
  bool ForceSpectator1(CGamePlayerInfo* User, ESpecMode SpecMode); // Maniascript
  bool ForceSpectator2(CGameConnectedClient* Client, ESpecMode SpecMode); // Maniascript
  bool ForcePlayerRequestedTeam1(CGamePlayerInfo* User, int Team); // Maniascript
  bool ForcePlayerRequestedTeam2(CGameConnectedClient* Client, int Team); // Maniascript
  bool IsDisableChangeTeams; // Maniascript
  void SetLobbyInfo(bool IsLobby, int LobbyPlayerCount, int LobbyMaxPlayerCount, float LobbyPlayersLevel); // Maniascript
  void SendToServerAfterMatch(string ServerUrl); // Maniascript
  void CustomizeQuitDialog(string ManialinkPage, string SendToServerUrl, bool ProposeAddToFavorites, uint ForceDelay); // Maniascript
  void Authentication_GetToken(MwId UserId, string AppLogin); // Maniascript
  const bool Authentication_GetTokenResponseReceived; // Maniascript
  const uint Authentication_ErrorCode; // Maniascript
  const string Authentication_Token; // Maniascript
};

struct CGamePlayerProfileChunk_EditorSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_EditorSettings();

  const uint MapEditorCoppersLimit;
};

struct CGameEditorPluginMapScriptEvent : public CGameManiaAppScriptEvent {
  enum class Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    CursorSelectionBegin = 4,
    CursorSelectionEnd = 5,
    CursorChange = 6,
    MapModified = 7,
    EditorInput = 8,
    MapSavedOrSaveCancelled = 9,
    EditAnchor = 10,
    EditObjectives = 11,
    StartValidation = 12,
    StartTest = 13,
  };
  enum class EInput {
    Unknown = 0,
    Menu = 1,
    SwitchToRace = 2,
    Undo = 3,
    Redo = 4,
    CursorUp = 5,
    CursorRight = 6,
    CursorDown = 7,
    CursorLeft = 8,
    CursorRaise = 9,
    CursorLower = 10,
    CursorTurn = 11,
    CursorPick = 12,
    CursorPlace = 13,
    CursorDelete = 14,
    CameraUp = 15,
    CameraRight = 16,
    CameraDown = 17,
    CameraLeft = 18,
    CameraZoomNext = 19,
    Camera0 = 20,
    Camera1 = 21,
    Camera3 = 22,
    Camera7 = 23,
    Camera9 = 24,
    PivotChange = 25,
    CursorTurnSlightly = 26,
    CursorTurnSlightlyAntiClockwise = 27,
    IconUp = 28,
    IconRight = 29,
    IconDown = 30,
    IconLeft = 31,
    RemoveAll = 32,
    Save = 33,
    SaveAs = 34,
    MapStyle = 35,
    ClassicMapEditor = 36,
  };
  const EType Type; // Maniascript
  const EInput Input; // Maniascript
  const MwId EditedAnchorDataId; // Maniascript
  const bool IsFromPad; // Maniascript
  const bool IsFromMouse; // Maniascript
  const bool IsFromKeyboard; // Maniascript
  const bool OnlyScriptMetadataModified; // Maniascript
  const bool MapSavedOrSaveCancelled; // Maniascript
};

// File extension: 'GameCtnMediaBlockDirtyLens.gbx'
struct CGameCtnMediaBlockDirtyLens : public CGameCtnMediaBlock {
  CGameCtnMediaBlockDirtyLens();

  void SwitchOn();
};

struct CGameCtnMediaBlockCameraEffectInertialTracking : public CGameCtnMediaBlockCameraEffect {
  CGameCtnMediaBlockCameraEffectInertialTracking();

  bool TrackingEnabled;
  bool AutoFocusEnabled;
  bool AutoZoomEnabled;
  float AutoZoomMinDist;
  float AutoZoomMaxDist;
  float AutoZoomMinFov;
  float AutoZoomMaxFov;
};

struct CGameEditorPacks : public CMwNod {
  const bool PackInfo_IsTitlePack;
  bool PackInfo_IsCreditedPack;
  uint PackInfo_Price;
  const uint PackInfo_PriceIncluded;
  const uint PackInfo_PriceTotal;
  string PackInfo_Url;
  wstring PackInfo_PackName;
  wstring PackInfo_Comment;
  void PackInfo_EditTitle();
  void PackInfo_EditTitle_OnOk();
  void PackInfo_EditContents();
  void PackInfo_TestTitle();
  const wstring Contents_Contents;
  const wstring Contents_IncludedContents;
  void Contents_OnAdd();
  void Contents_OnClear();
  const wstring Title_BaseTitle;
  void Title_ChooseBaseTitle();
  const MwId Title_PlayerModel;
  void Title_OnOpenInExplorer();
  void Title_OnButtonPreview();
  const wstring Title_MusicFolder;
  void Title_ChooseMusicFolder();
  void Title_ClearMusicFolder();
  string Title_CollectionGroup;
  int Title_SortOrder;
  string Title_StationManialinkUrl;
  void Title_ChooseStationManialinkUrl();
  void Title_ClearStationManialinkUrl();
  string Title_BoxCaseManialinkUrl;
  void Title_ChooseBoxCaseManialinkUrl();
  void Title_ClearBoxCaseManialinkUrl();
  const wstring Title_Mod;
  void Title_ChooseMod();
  void Title_ClearMod();
  const wstring Title_Hud3dFontFileName;
  const wstring Title_HudDefaultModuleScriptName;
  const wstring TitleMenu_ReplayName;
  void TitleMenu_ChooseReplayName();
  void TitleMenu_ClearReplayName();
  const wstring TitleMenu_MusicName;
  void TitleMenu_ChooseMusicName();
  void TitleMenu_ClearMusicName();
  string TitleMenu_ManialinkUrl;
  void TitleMenu_ChooseManialinkUrl();
  void TitleMenu_ClearManialinkUrl();
  vec3 TitleMenu_Color;
  const wstring TitleEditor_MapType;
  void TitleEditor_ChooseMapType();
  void TitleEditor_ClearMapType();
  const wstring TitleEditor_SimpleEditorMap;
  void TitleEditor_ChooseSimpleEditorMap();
  void TitleEditor_ClearSimpleEditorMap();
  const wstring TitleSolo_Mode;
  void TitleSolo_ChooseMode();
  void TitleSolo_ClearMode();
  const wstring TitleSolo_CampaignName;
  void TitleSolo_ChooseCampaignName();
  void TitleSolo_ClearCampaignName();
  const wstring TitleSolo_PlaylistFileName;
  void TitleSolo_ChoosePlaylistFileName();
  void TitleSolo_ClearPlaylistFileName();
  const wstring TitleNet_Mode;
  void TitleNet_ChooseMode();
  void TitleNet_ClearMode();
  const wstring TitleNet_PlaylistFileName;
  void TitleNet_ChoosePlaylistFileName();
  void TitleNet_ClearPlaylistFileName();
  void OpenDialogChooseName_Yes();
  void OpenDialogChooseFolder_Yes();
};

// File extension: 'GamePodiumInfo.Gbx'
struct CGamePodiumInfo : public CMwNod {
  CGamePodiumInfo();

  const MwBuffer<CGameCtnMediaClip*> MediaClipFids;
};

struct CGameCtnMediaBlockBulletFx_Deprecated : public CGameCtnMediaBlock {
  CGameCtnMediaBlockBulletFx_Deprecated();

};

struct CGameCtnMediaBlockCharVis_Deprecated : public CGameCtnMediaBlock {
  CGameCtnMediaBlockCharVis_Deprecated();

};

struct CGameServerScriptXmlRpc : public CMwNod {
  const MwBuffer<CGameServerScriptXmlRpcEvent*> PendingEvents; // Maniascript
  void SendCallback(wstring Param1, wstring Param2); // Maniascript
  void SendCallbackArray(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void SendCallback_BeginRound(); // Maniascript
  void SendCallback_EndRound(); // Maniascript
};

// File extension: 'GameCtnMediaBlockColoringCapturable.gbx'
struct CGameCtnMediaBlockColoringCapturable : public CGameCtnMediaBlock {
  CGameCtnMediaBlockColoringCapturable();

  uint CapturableIndex;
};

// File extension: 'GameCtnMediaBlockFxCameraBlend.gbx'
struct CGameCtnMediaBlockFxCameraBlend : public CGameCtnMediaBlock {
  CGameCtnMediaBlockFxCameraBlend();

  float Intensity;
};

// File extension: 'GameCoverFlow.Gbx'
struct CGameCoverFlowDesc : public CMwNod {
  CGameCoverFlowDesc();

  CScene3d* SceneFid;
  CPlugGameSkin* GameSkin;
  CSystemFidsFolder* GameSkinFolder;
  float TimeRemapped;
  CGameManialink3dStyle* Style;
  float SpeedChangeGroup;
  float SpeedZ;
  float TransitionRotateAngleDegPrev;
  float TransitionRotateAngleDegNext;
  const MwBuffer<CSceneLocationCamera*> CameraLocs;
  iso4 BoxesGroup_RelLoc;
  iso4 StationsGroup_HomeManialinkRelLoc;
  iso4 StationsGroup_MainRelLoc;
  iso4 StationsGroup_ListRelLoc;
  const string LinearSeparator0;
  float LinearOffsetX;
  float LinearOffsetY;
  float LinearOffsetZ;
  float LinearStepX;
  float LinearStepY;
  float LinearStepZ0;
  float LinearStepZ1;
  float LinearAngleMax0;
  float LinearAngleMax1;
  float LinearSpeedMove;
  float LinearSpeedFocus;
  float LinearBumpY;
  float LinearZoomDistance;
  uint LinearTransitionDuration0;
  uint LinearTransitionDuration1;
  uint LinearTransitionDuration2;
  const string GridSeparator0;
  float GridOffsetX;
  float GridOffsetY;
  float GridOffsetZ;
  float GridStepX;
  float GridStepY;
  float GridStepZ0;
  float GridStepZ1;
  float GridAngleMax0;
  float GridAngleMax1;
  float GridSpeedMove;
  float GridSpeedFocus;
  float GridBumpY;
  float GridZoomDistance;
  uint GridTransitionDuration0;
  uint GridTransitionDuration1;
  uint GridTransitionDuration2;
  const string FreeSeparator0;
  float FreeOffsetX;
  float FreeOffsetY;
  float FreeOffsetZ;
  float FreeStepX;
  float FreeStepY;
  float FreeStepZ0;
  float FreeStepZ1;
  float FreeAngleMax0;
  float FreeAngleMax1;
  float FreeSpeedMove;
  float FreeSpeedFocus;
  float FreeBumpY;
  float FreeZoomDistance;
  uint FreeTransitionDuration0;
  uint FreeTransitionDuration1;
  uint FreeTransitionDuration2;
  const string LinearSeparator1;
  CPlugSound* LinearSound_FocusGained;
  CPlugSound* LinearSound_FocusLoop;
  CPlugSound* LinearSound_FocusLost;
  CPlugSound* LinearSound_Select;
  CPlugSound* LinearSound_Edit;
  CPlugSound* LinearSound_Clear;
  CPlugSound* LinearSound_GroupEnter;
  CPlugSound* LinearSound_GroupLoop;
  CPlugSound* LinearSound_GroupLeave;
  CPlugSound* LinearSound_TransitionBump;
  CPlugSound* LinearSound_TransitionZoomIn;
  CPlugSound* LinearSound_TransitionZoomOut;
  const string GridSeparator1;
  CPlugSound* GridSound_FocusGained;
  CPlugSound* GridSound_FocusLoop;
  CPlugSound* GridSound_FocusLost;
  CPlugSound* GridSound_Select;
  CPlugSound* GridSound_Edit;
  CPlugSound* GridSound_Clear;
  CPlugSound* GridSound_GroupEnter;
  CPlugSound* GridSound_GroupLoop;
  CPlugSound* GridSound_GroupLeave;
  CPlugSound* GridSound_TransitionBump;
  CPlugSound* GridSound_TransitionZoomIn;
  CPlugSound* GridSound_TransitionZoomOut;
  const string FreeSeparator1;
  CPlugSound* FreeSound_FocusGained;
  CPlugSound* FreeSound_FocusLoop;
  CPlugSound* FreeSound_FocusLost;
  CPlugSound* FreeSound_Select;
  CPlugSound* FreeSound_Edit;
  CPlugSound* FreeSound_Clear;
  CPlugSound* FreeSound_GroupEnter;
  CPlugSound* FreeSound_GroupLoop;
  CPlugSound* FreeSound_GroupLeave;
  CPlugSound* FreeSound_TransitionBump;
  CPlugSound* FreeSound_TransitionZoomIn;
  CPlugSound* FreeSound_TransitionZoomOut;
};

struct CGamePlayerProfileChunk_ScriptPersistentTraits : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ScriptPersistentTraits();

  CScriptTraitsPersistent* ScriptPersistentTraits;
};

struct CGamePlayerProfileCompatibilityChunk : public CMwNod {
  CGamePlayerProfileCompatibilityChunk();

  const uint ClassId;
  const string ChunkName;
  const string GameName;
  const string Checksum;
  const uint TimeStamp;
};

// File extension: 'GameCtnMediaBlockColoringBase.gbx'
struct CGameCtnMediaBlockColoringBase : public CGameCtnMediaBlock {
  CGameCtnMediaBlockColoringBase();

  uint BaseIndex;
};

struct CGameCtnMediaClipConfigScriptContext : public CMwNod {
  float SmShieldSizeScale; // Maniascript
};

struct CGameServerScriptXmlRpcEvent : public CScriptBaseConstEvent {
  enum class EType {
    Unknown = 0,
    Callback = 1,
    CallbackArray = 2,
  };
  const EType Type; // Maniascript
  const wstring Param1; // Maniascript
  const wstring Param2; // Maniascript
  const wstring ParamArray1; // Maniascript
  const MwBuffer<wstring> ParamArray2; // Maniascript
};

// Description: "This is the Manialink browser interface."
struct CGameScriptHandlerBrowser : public CGameManialinkScriptHandler {
  enum class EBuddyAction {
    Add = 0,
    Invite = 1,
    Remove = 2,
  };
  enum class EBuddyResult {
    Ok = 0,
    Error = 1,
    NotFinished = 2,
  };
  CGameManiaPlanetScriptAPI* const ManiaPlanet; // Maniascript
  CGameManiaAppBrowser* const ParentApp; // Maniascript
  CGameCtnChallenge* const CurMap; // Maniascript
  void ShowCurMapCard(); // Maniascript
  void BuddyDo(EBuddyAction Action, string BuddyLogin, bool IsSilent); // Maniascript
  const EBuddyResult BuddyDoResult; // Maniascript
  const wstring BuddyDoErrorMessage; // Maniascript
  const bool IsInBrowser; // Maniascript
  void BrowserBack(); // Maniascript
  void BrowserQuit(); // Maniascript
  void BrowserHome(); // Maniascript
  void BrowserReload(); // Maniascript
  wstring BrowserFocusedFrameId; // Maniascript
  void SetLocalUserClubLink(string ClubLink); // Maniascript
};

struct CGameCtnEditorBody : public CMwNod {
  void StartBodiesPreview();
  void StopBodiesPreview();
  void SwitchToGhostPathMode();
  void SwitchToStraightPathMode();
  void SwitchToRemoveMode();
  void SwitchToPathSpotsMode();
  void SwitchMarkersVisible();
  float BotSpeed;
  uint GhostSamplingPeriod;
  float ShootmanSpeed;
  void SweepPathsAndSave();
  string BotPathFrameTag;
  uint BotPathFrameOrder;
  uint BotPathFrameKind;
  bool BotPathFrameIsAutonomous;
  bool BotPathFrameIsRecorded;
  void RecordItemPath();
  string BotPathCurrentIndexString;
  const uint BotPathCount;
  void PrevBotPath();
  void NextBotPath();
};

struct CGameManialinkPlayerList : public CGameManialinkControl {
};

struct CGamePlayerProfileChunk_GlobalInterfaceSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GlobalInterfaceSettings();

  uint WarnUserForAvatars;
  bool EnableAvatars;
  bool EnableChat;
  bool OpenWebLinksInSteamOverlay;
  bool SynchonizeSteamWorkshopFiles;
  bool PreferSteamScreenshots;
};

struct CGameAnimSet : public CMwNod {
  CGameAnimSet();

  const string ZipName;
  CGameAnimClipNod* Idle;
  CGameAnimClipNod* RunF;
  CGameAnimClipNod* RunB;
  CGameAnimClipNod* TurnR_90;
  CGameAnimClipNod* TurnL_90;
  CGameAnimClipNod* Jump;
  CGameAnimClipNod* FrontFlip;
  CGameAnimClipNod* BackFlip;
  CGameAnimClipNod* Air;
  CGameAnimClipNod* AirToIdle;
  CGameAnimClipNod* AirToRunF;
  CGameAnimClipNod* AirToRunB;
  CGameAnimClipNod* Slide;
  CGameAnimClipNod* Glide;
  CGameAnimClipNod* SwimI;
  CGameAnimClipNod* SwimF;
  CGameAnimClipNod* SwimB;
  CGameAnimClipNod* SneakF;
  CGameAnimClipNod* SneakI;
  CGameAnimClipNod* SneakB;
  CGameAnimClipNod* Sneak_TurnR_90;
  CGameAnimClipNod* Sneak_TurnL_90;
  CGameAnimClipNod* Fire;
  CGameAnimClipNod* Gesture;
};

// Description: "Manager of buddies instant messaging."
struct CGameScriptChatManager : public CMwNod {
  enum class EConnectionStatus {
    Offline = 0,
    Online = 1,
    Connecting = 2,
  };
  enum class EDesiredConnectionStatus {
    Offline = 0,
    Online = 1,
  };
  enum class EPresenceShow {
    Available = 0,
    WantToChat = 1,
    DoNotDisturb = 2,
    Away = 3,
    ExtendedAway = 4,
  };
  const MwBuffer<CGameScriptChatContact*> DebugContacts;
  const EConnectionStatus CurrentConnectionStatus; // Maniascript
  EDesiredConnectionStatus DesiredConnectionStatus; // Maniascript
  const bool SteamIsEnabled; // Maniascript
  void SendMessage(CGameScriptChatContact* Buddy, wstring Body); // Maniascript
  void SendMessage2(CGameScriptChatContact* Buddy, wstring Body, wstring Link, wstring Metadata); // Maniascript
  void OpenSteamChat(CGameScriptChatContact* Buddy); // Maniascript
  void PresenceSet(EPresenceShow Show, wstring Status); // Maniascript
  const EPresenceShow Presence_Show; // Maniascript
  const wstring Presence_Status; // Maniascript
  void Room_SendMessage(CGameScriptChatRoom* Room, wstring Body); // Maniascript
  const string CurrentServerLogin; // Maniascript
  const wstring CurrentServerName; // Maniascript
  const string CurrentServerJoinLink; // Maniascript
  const wstring CurrentServerModeName; // Maniascript
  const wstring CurrentServerModeStatus; // Maniascript
  const uint CurrentServerPlayerCount; // Maniascript
  const uint CurrentServerPlayerCountMax; // Maniascript
  const bool CurrentServer_IsFull; // Maniascript
  const bool CurrentServer_IsFullSpec; // Maniascript
  const bool CurrentServer_IsPrivate; // Maniascript
  const bool CurrentServer_IsPrivateSpec; // Maniascript
  const bool CurrentServer_IsHidden; // Maniascript
  const bool CurrentServer_IsLobby; // Maniascript
  const bool CurrentServer_IsRelay; // Maniascript
  const bool CurrentServer_IsFavourite; // Maniascript
  const bool CurrentServer_IsWarmUp; // Maniascript
  CGameScriptChatContact* GetContactFromLogin(string Login); // Maniascript
  wstring Filter_SearchText; // Maniascript
  bool Filter_PlayingOnline; // Maniascript
  const MwBuffer<CGameScriptChatContact*> Contacts; // Maniascript
  const MwBuffer<CGameScriptChatContact*> Buddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> FilteredBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> OnlineBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> PlayingOnlineBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> OfflineBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> XmppBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> XmppOnlineBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> XmppOfflineBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> SteamBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> SteamOnlineBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> SteamOfflineBuddies; // Maniascript
  const MwBuffer<CGameScriptChatContact*> IncomingBuddyRequests; // Maniascript
  const MwBuffer<CGameScriptChatContact*> OutgoingBuddyRequests; // Maniascript
  const MwBuffer<CGameScriptChatEvent*> PendingEvents; // Maniascript
  void AddBuddy(string Login); // Maniascript
  void RemoveBuddy(CGameScriptChatContact* Buddy); // Maniascript
  void AcceptBuddy(CGameScriptChatContact* Buddy); // Maniascript
  void AddBuddySlot(); // Maniascript
  const MwBuffer<CGameScriptChatHistory*> Histories; // Maniascript
  CGameScriptChatHistory* History_Create(); // Maniascript
  CGameScriptChatHistory* History_Create_Contact(CGameScriptChatContact* Contact); // Maniascript
  CGameScriptChatHistory* History_Create_Room(CGameScriptChatRoom* Room); // Maniascript
  void History_Destroy(CGameScriptChatHistory* History); // Maniascript
  void History_DestroyAll(); // Maniascript
  const MwBuffer<CGameScriptChatRoom*> Channels; // Maniascript
  void Channel_Join(string ChannelName); // Maniascript
  void Channel_Leave(CGameScriptChatRoom* Channel); // Maniascript
  CGameScriptChatRoom* const Squad; // Maniascript
  const wstring Squad_PreferredServer; // Maniascript
  void Squad_Invite(string Login); // Maniascript
  void Squad_Leave(); // Maniascript
  const MwBuffer<CGameScriptChatSquadInvitation*> Squad_Invitations; // Maniascript
  void Squad_Invitation_Accept(CGameScriptChatSquadInvitation* Invitation); // Maniascript
  void Squad_Invitation_Decline(CGameScriptChatSquadInvitation* Invitation); // Maniascript
};

// Description: "A buddy from the buddy list."
struct CGameScriptChatContact : public CMwNod {
  enum class ESubscriptionStatus {
    None = 0,
    RequestFrom = 1,
    RequestTo = 2,
    Both = 3,
  };
  enum class ESubscription {
    None = 0,
    Pending = 1,
    Accepted = 2,
  };
  enum class EPresenceShow {
    Offline = 0,
    Available = 1,
    WantToChat = 2,
    DoNotDisturb = 3,
    Away = 4,
    ExtendedAway = 5,
  };
  const string Login; // Maniascript
  const wstring Name; // Maniascript
  const wstring Description; // Maniascript
  const wstring ZonePath; // Maniascript
  const EPresenceShow PresenceShow; // Maniascript
  const wstring PresenceStatus; // Maniascript
  const ESubscriptionStatus SubscriptionStatus; // Maniascript
  const ESubscription Subscription_From; // Maniascript
  const ESubscription Subscription_To; // Maniascript
  const bool IsXmpp; // Maniascript
  const bool IsSteam; // Maniascript
  const bool IsLegacy; // Maniascript
  const bool IsOnline; // Maniascript
  const bool IsOnlineInLegacy; // Maniascript
  const bool IsOnlineInXmpp; // Maniascript
  const bool IsOnlineInSteam; // Maniascript
  const bool IsBuddyInManiaPlanet; // Maniascript
  bool IsAlly; // Maniascript
  const string CurrentServerLogin; // Maniascript
  const wstring CurrentServerName; // Maniascript
  const string CurrentServerJoinLink; // Maniascript
  const wstring CurrentServerModeName; // Maniascript
  const wstring CurrentServerModeStatus; // Maniascript
  const uint CurrentServerPlayerCount; // Maniascript
  const uint CurrentServerPlayerCountMax; // Maniascript
  const bool CurrentServer_IsFull; // Maniascript
  const bool CurrentServer_IsFullSpec; // Maniascript
  const bool CurrentServer_IsPrivate; // Maniascript
  const bool CurrentServer_IsPrivateSpec; // Maniascript
  const bool CurrentServer_IsHidden; // Maniascript
  const bool CurrentServer_IsLobby; // Maniascript
  const bool CurrentServer_IsRelay; // Maniascript
  const bool CurrentServer_IsFavourite; // Maniascript
  const bool CurrentServer_IsWarmUp; // Maniascript
  void NotifyInteraction(); // Maniascript
  CPlugBitmap* const Avatar; // Maniascript
  const string AvatarUrl; // Maniascript
};

// Description: "Event from the BuddiesManager."
struct CGameScriptChatEvent : public CScriptBaseConstEvent {
  enum class EType {
    Message = 0,
    ChatRoomMessage = 1,
    PresenceChange = 2,
    BuddyChange = 3,
    AddBuddyResult = 4,
    RemoveBuddyResult = 5,
    JoinRoomResult = 6,
    ConnectionStatusUpdate = 7,
    HistoryUpdate = 8,
    ContactListChange = 9,
    AddBuddySlotResult = 10,
    SquadInviteResult = 11,
    SquadInvitationReceived = 12,
  };
  enum class ESubscriptionStatus {
    None = 0,
    RequestFrom = 1,
    RequestTo = 2,
    Both = 3,
  };
  enum class ESubscription {
    None = 0,
    Pending = 1,
    Accepted = 2,
  };
  enum class EPresenceShow {
    Offline = 0,
    Available = 1,
    WantToChat = 2,
    DoNotDisturb = 3,
    Away = 4,
    ExtendedAway = 5,
  };
  enum class EAddBuddySlotStatus {
    Success = 0,
    AlreadyBuddy = 1,
    NotConnected = 2,
    UnknownLogin = 3,
    RosterFull = 4,
    SubscriptionsFull = 5,
    Timeout = 6,
    Invalid = 7,
    ParentalLock = 8,
  };
  const EType Type; // Maniascript
  CGameScriptChatContact* const Sender; // Maniascript
  const string SenderResource; // Maniascript
  const wstring MessageBody; // Maniascript
  CGameScriptChatRoom* const ChatRoom; // Maniascript
  const wstring SenderNickname; // Maniascript
  CGameScriptChatContact* const Buddy; // Maniascript
  const bool PreviousIsOnline; // Maniascript
  const EPresenceShow PreviousShow; // Maniascript
  const wstring PreviousStatus; // Maniascript
  const string PreviousServerLogin; // Maniascript
  const wstring PreviousServerName; // Maniascript
  const string PreviousServerJoinLink; // Maniascript
  const wstring PreviousServerModeName; // Maniascript
  const wstring PreviousServerModeStatus; // Maniascript
  const uint PreviousServerPlayerCount; // Maniascript
  const uint PreviousServerPlayerCountMax; // Maniascript
  const ESubscriptionStatus PreviousSubscriptionStatus; // Maniascript
  const ESubscription PreviousSubscription_From; // Maniascript
  const ESubscription PreviousSubscription_To; // Maniascript
  const wstring PreviousNickname; // Maniascript
  const wstring PreviousDescription; // Maniascript
  const bool ContactList; // Maniascript
  const bool ContactListBuddies; // Maniascript
  const bool ContactListPlayingOnlineBuddies; // Maniascript
  const bool ContactListOnlineBuddies; // Maniascript
  const bool ContactListOfflineBuddies; // Maniascript
  const bool ContactListXmppBuddies; // Maniascript
  const bool ContactListXmppOnlineBuddies; // Maniascript
  const bool ContactListXmppOfflineBuddies; // Maniascript
  const bool ContactListSteamBuddies; // Maniascript
  const bool ContactListSteamOnlineBuddies; // Maniascript
  const bool ContactListSteamOfflineBuddies; // Maniascript
  const bool ContactListIncomingBuddyRequest; // Maniascript
  const bool ContactListOutgoingBuddyRequest; // Maniascript
  const string BuddyLogin; // Maniascript
  const EAddBuddySlotStatus Status; // Maniascript
  const string RoomName; // Maniascript
  const bool Success; // Maniascript
  const wstring ErrorMessage; // Maniascript
  CGameScriptChatHistory* const History; // Maniascript
  CGameScriptChatSquadInvitation* const Invitation; // Maniascript
};

struct CGameManialink3dMood : public CMwNod {
  CGameManialink3dMood();

  vec3 LAmbient_LinearRgb;
  vec3 LDir0_LinearRgb;
  float LDir0_Intens;
  float LDir0_DirTheta; // Range: 0 - 180
  float LDir0_DirPhi; // Range: -180 - 180
  vec3 LDir1_LinearRgb;
  float LDir1_Intens;
  float LDir1_DirTheta; // Range: 0 - 180
  float LDir1_DirPhi; // Range: -180 - 180
  vec3 LBall_LinearRgb;
  float LBall_Intens;
  float LBall_Radius;
  vec3 CloudsRgbMinLinear;
  float CloudsRgbMinScale;
  vec3 CloudsRgbMaxLinear;
  float CloudsRgbMaxScale;
  vec3 FogColorSrgb;
  float SkyGradientV_Scale;
  CPlugFileImg* FidImageSkyGradientV;
  CPlugFileImg* FidImageCloudsMinMaxDayTime;
  vec3 SelfIllumColor;
};

struct CGameManialink3dWorld : public CMwNod {
  CGameManialink3dWorld();

  CGameManialink3dStyle* Style;
};

struct CGamePlayerProfileChunk_ManiaPlanetStations : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ManiaPlanetStations();

  bool IsFirstLaunch;
  bool HasSeenWelcomePage;
  MwId LatestTitleIdLoaded;
  uint StationsCount;
};

struct CGameManialink3dStyle : public CMwNod {
  CGameManialink3dStyle();

  CGameManialink3dMood* Mood;
};

// Description: "API for Maniaplanet plugins."
struct CGameManiaplanetPlugin : public CGameManiaApp {
  enum class EContext {
    MenuStartUp = 0,
    MenuManiaPlanet = 1,
    MenuManiaTitleMain = 2,
    MenuProfile = 3,
    MenuSolo = 4,
    MenuLocal = 5,
    MenuMulti = 6,
    MenuEditors = 7,
    EditorPainter = 8,
    EditorTrack = 9,
    EditorMediaTracker = 10,
    Solo = 11,
    SoloLoadScreen = 12,
    Multi = 13,
    MultiLoadScreen = 14,
    MenuCustom = 15,
    Unknown = 16,
  };
  enum class EBuyTitleMode {
    OpenStore = 0,
    BuyIfNeeded = 1,
    Ask = 2,
  };
  enum class EUISound {
    Alert = 0,
    ShowDialog = 1,
    HideDialog = 2,
  };
  const MwBuffer<CGameManiaAppScriptEvent*> PendingEvents; // Maniascript
  const MwBuffer<CGameManiaTitle*> TitlesAvailable; // Maniascript
  const MwBuffer<CGameManiaTitle*> TitlesBases; // Maniascript
  const MwBuffer<string> TitleIdsInstalled; // Maniascript
  const MwBuffer<string> TitleIdsPayed; // Maniascript
  const uint CurrentAppId; // Maniascript
  const string CurrentServerLogin; // Maniascript
  const wstring CurrentServerName; // Maniascript
  const wstring CurrentServerModeName; // Maniascript
  const string CurrentServerJoinLink; // Maniascript
  const MwBuffer<CGamePlayerInfo*> CurrentServerPlayers; // Maniascript
  CGameCtnChallenge* const CurrentMap; // Maniascript
  const EContext ActiveContext; // Maniascript
  const string ActiveContext_MenuFrame; // Maniascript
  const string ActiveContext_DialogFrame; // Maniascript
  const string ActiveContext_SystemDialogFrame; // Maniascript
  const bool ActiveContext_ClassicDialogDisplayed; // Maniascript
  const uint ActiveContext_GameWill; // Maniascript
  const bool ActiveContext_ManialinkBrowserDisplayed; // Maniascript
  bool PrivateSession; // Maniascript
  CGameScriptChatManager* const ChatManager; // Maniascript
  CGameScriptChatManager* const BuddiesManager; // Maniascript
  CGamePlaygroundClientScriptAPI* const Playground; // Maniascript
  CGameAchievementScriptManager* const AchievementsManager; // Maniascript
  CGameScriptNotificationsProducer* const NotificationsProducer; // Maniascript
  CGameScriptNotificationsConsumer* const Notifications; // Maniascript
  bool ToolBarForceShow; // Maniascript
  const bool ToolBarIsActive; // Maniascript
  bool ToolBarClockVisible; // Maniascript
  bool ToolBarPlanetsVisible; // Maniascript
  bool ToolBarBrowserVisible; // Maniascript
  bool ToolBarSoundVisible; // Maniascript
  bool ToolBarSettingsVisible; // Maniascript
  float MusicVolume; // Range: 0 - 1 // Maniascript
  void HackSetCurMenuControlVisible(string ControlId, bool Visible); // Maniascript
  bool HackIsCurMenuControlVisible(string ControlId); // Maniascript
  bool RequestStartUpFreeze; // Maniascript
  void ClipboardSet(wstring ClipboardText); // Maniascript
  void QuitGameAndOpenLink(string Url); // Maniascript
  void ShowTitle(string TitleId, bool ShowStation); // Maniascript
  void EnterTitle(string TitleId); // Maniascript
  void ShowCurMapCard(); // Maniascript
  CGameDialogs* const SystemDialogs; // Maniascript
  void Dialog_EnterGameKey(); // Maniascript
  void Dialog_BuyTitleDialog(string TitleId, string OverrideBuyUrl, int OverrideActionAfterBuy); // Maniascript
  void Dialog_BuyTitleEx(string TitleId, EBuyTitleMode Mode, string OverrideBuyUrl, int OverrideActionAfterBuy); // Maniascript
  void Dialog_GenerateGameKeys(string TitleId, uint FeaturesLevel, uint NbToGenerate, bool AddBuddyOnRegistration); // Maniascript
  const bool Dialog_IsFinished; // Maniascript
  const bool Dialog_Success; // Maniascript
  const bool Dialog_Aborted; // Maniascript
  const bool UseAllies; // Maniascript
  const uint TotalTimePlay; // Maniascript
  bool LoadingScreenRequireKeyPressed; // Maniascript
  void SetLocalUserClubLink(string ClubLink); // Maniascript
  void SetLocalUserNickName(wstring NickName); // Maniascript
  void FlashWindow(); // Maniascript
  const uint Messenger_MessagesCount; // Maniascript
  void PlaySound(EUISound Sound, uint SoundVariant); // Maniascript
  CGameManialinkBrowser* const ManialinkBrowser; // Maniascript
  CGameManiaplanetPluginInterface* const Interface;
  void CustomEvent(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void SendExternalCustomEvent(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  CGamePluginInterfacesScript* const Plugins; // Maniascript
  void Dialog_ShowEnterGameKeyDialog();
  void Dialog_ShowBuyTitleDialog();
  void Dialog_ShowGenerateGameKeysDialog();
};

struct CGameCtnInterfaceViewer : public CMwNod {
  bool Hit;
  bool Elimination;
  uint Score;
};

struct CGameManialinkGauge : public CGameManialinkControl {
  string Style; // Maniascript
  void SetRatio(float NewRatio); // Maniascript
  void SetClan(uint NewClan); // Maniascript
  float Ratio; // Range: 0 - 1 // Maniascript
  float GradingRatio; // Range: 0 - 1 // Maniascript
  uint Clan; // Maniascript
  vec3 Color; // Maniascript
  bool DrawBackground; // Maniascript
  bool DrawBlockBackground; // Maniascript
  bool CenteredBar; // Maniascript
};

// File extension: 'GameCtnMediaBlockColorGrading.gbx'
struct CGameCtnMediaBlockColorGrading : public CGameCtnMediaBlock {
  CGameCtnMediaBlockColorGrading();

  CPlugFileImg* Image;
};

// Description: "API for plugins to get playground info."
struct CGamePlaygroundClientScriptAPI : public CMwNod {
  CGameCtnChallenge* const Map; // Maniascript
  const int GameTime; // Maniascript
  CGamePlayerInfo* const LocalUser; // Maniascript
  CGamePlaygroundUIConfig* const UI; // Maniascript
  CGameCtnNetServerInfo* const ServerInfo; // Maniascript
  const MwId SettingsPlayerModelId; // Maniascript
  const bool IsSpectator; // Maniascript
  const bool IsSpectatorClient; // Maniascript
  const bool UseClans; // Maniascript
  const bool UseForcedClans; // Maniascript
  const bool IsLoadingScreen; // Maniascript
  void QuitServer(bool Silent); // Maniascript
  void QuitServerAndSetResult(bool Silent, wstring Type, MwBuffer<wstring>& Data); // Maniascript
  const bool IsInGameMenuDisplayed; // Maniascript
  void JoinTeam1(); // Maniascript
  void JoinTeam2(); // Maniascript
  const MwBuffer<CGameTeamProfile*> Teams; // Maniascript
  void RequestSpectatorClient(bool Spectator); // Maniascript
  void SetSpectateTarget(string Player); // Maniascript
  void ShowProfile(string Player); // Maniascript
  bool DisablePlayingStateTracking; // Maniascript
};

struct CGameCtnMediaBlockScenery : public CGameCtnMediaBlock {
  CGameCtnMediaBlockScenery();

};

struct CGameControlCameraVehicleInternal : public CGameControlCamera {
  CGameControlCameraVehicleInternal();

  CPlugVehicleCameraInternalModel* m_Model;
};

struct CGameMgrObjectVis : public CSceneMgrVis {
  CGameMgrObjectVis();

  MwBuffer<CGameObjectModel*> ModelLib;
};

struct CGamePlaygroundResources : public CMwNod {
  const MwBuffer<CGameItemModel*> m_AllGameItemModels;
  const MwBuffer<CSystemPackDesc*> EntModelSkins;
  const MwBuffer<CGameObjectVisModel*> ObjectLib;
  CPlugAnimFile* const CinematicLib;
};

struct CGameMgrObjectPhy : public CSceneMgrPhy {
};

struct CGameMgrActionFxVis : public CSceneMgrVis {
  const uint cActionFxVis;
};

struct CGameEditorAsset : public CGameCtnEditor {
};

struct CGameManialinkGraph : public CGameManialinkControl {
  vec2 CoordsMin; // Maniascript
  vec2 CoordsMax; // Maniascript
  CGameManialinkGraphCurve* AddCurve(); // Maniascript
  void RemoveCurve(CGameManialinkGraphCurve* Curve); // Maniascript
  MwBuffer<CGameManialinkGraphCurve*> Curves; // Maniascript
};

struct CGameManialinkGraphCurve : public CMwNod {
  MwBuffer<vec2> Points; // Maniascript
  vec3 Color; // Maniascript
  void SortPoints(); // Maniascript
  string Style; // Maniascript
  float Width; // Range: 0 - 50 // Maniascript
};

struct CGameCtnBlockInfoMobilLink : public CMwNod {
  CGameCtnBlockInfoMobilLink();

  MwId SocketId;
  CGameObjectModel* Model;
};

struct CGameManiaplanetPluginInterface : public CMwNod {
  const wstring Name; // Maniascript
  void CustomEvent(wstring Type, MwBuffer<wstring>& Data); // Maniascript
  const MwBuffer<CGameManiaplanetPluginInterfaceEvent*> PendingEvents; // Maniascript
};

struct CGameManiaplanetPluginInterfaceEvent : public CScriptBaseConstEvent {
  enum class EType {
    PluginCustomEvent = 0,
  };
  const EType Type; // Maniascript
  const wstring EventType; // Maniascript
  const MwBuffer<wstring> EventData; // Maniascript
};

// File extension: 'GameCtnMediaBlockInterface.gbx'
struct CGameCtnMediaBlockInterface : public CGameCtnMediaBlock {
  CGameCtnMediaBlockInterface();

  const bool ShowInterface;
};

// File extension: 'GameCtnMediaBlockObject.gbx'
struct CGameCtnMediaBlockObject : public CGameCtnMediaBlock {
  CGameCtnMediaBlockObject();

  const bool ShowObjects;
};

struct CGameScriptCloudManager : public CMwNod {
};

struct CGameEditorBullet : public CMwNod {
  CPlugParticleEmitterModel* ParticleEmitterModel;
  CPlugBeamEmitterModel* BeamEmitterModel;
  CPlugBeamEmitterSubModel* BaseSubModel;
  float SubModelSphereRadMax;
  float SubModelSphereThickness;
  float SubModelViscosity;
  float SubModelFriction;
  float SubModelLength;
  float SubModelLengthVar;
  float SubModelRotation;
  float SubModelRotationVar;
  float SubModelLife;
  float SubModelLifeVar;
  float SubModelParticlesCount;
  float SubModelSize;
  float SubModelSizeSlider; // Range: 0 - 1
  float SubModelSizeVar;
  float SubModelSizeEndScale;
  float SubModelIntensVar;
  float SubModelIntens;
  float SubModelIntensSlider; // Range: 0 - 1
  float SubModelWeight;
  float SubModelPersistence;
  float SubModelEmitterCoef;
  float SubModelDiscMaxZ;
  float SubModelDiscVelRad;
  float SubModelDiscVelLong;
  float SubModelDiscRadMax;
  float SubModelDiscThickness;
  uint SubModelParticlesCountSplash;
  float SubModelLengthPitchMin;
  float SubModelLengthPitchMax;
  float SubModelIntensFadeIn;
  float SubModelIntensFadeOut;
  bool SubModelUseCustomColor;
  bool SubModelCameraSpace;
  string BulletName;
  float BulletScale;
  string BulletSubModelName;
  float BulletSpeed;
  float BulletMass;
  float BulletFluidFriction; // Range: 0 - 2
  float BulletHitboxRadius;
  float BulletLifeTime;
  float BulletLifeTimeAfterFirstImpact;
  wstring BulletPattern;
  bool BulletExplodeOnEndLife;
  uint BulletRebounds;
  bool BulletBounceOnTechWall;
  float BulletImpactBouncingN;
  float BulletImpactBouncingT;
  wstring BulletType;
  float BulletHomingDist;
  float BulletHomingPeriod;
  float BulletHomingAngularSpeed;
  uint BulletHomingLockDuration;
  float BulletGuidedAngularSpeed;
  uint BulletGuidedMinLifeTime;
  bool BulletShowPlayerExplosion;
  bool BulletShowDebris;
  bool BulletShowPlayerLaserExplosion;
  bool BulletShowLaserDebris;
  bool BulletLaserModifyFOV;
  bool BulletModifyFOV;
  uint PatternBulletCount;
  float PatternBulletRadius;
  float PatternBulletSpinSecond;
  float PatternBulletBlendDuration;
  uint NoPatternBulletCount;
  float NoPatternBulletDispersionAngle;
  float NoPatternBulletSpeedCoef;
  float PatternBulletMinApexTime;
  bool PatternBulletApexRegroup;
  bool PatternBulletRandomRotations;
  float BulletEDRResting;
  float BulletEDRFlying;
  float BulletBlowRadius;
  float BulletBlowStrength;
  float BulletBlowVerticalScale;
  float BulletDamageRadius;
  float BulletBlowAttenuation; // Range: 0 - 1
  uint BulletDamageDirectHit;
  uint BulletDamage;
  float BulletDamageAttenuation; // Range: 0 - 1
  bool BulletExplosionOnAllPlayers;
  bool BulletIsFlare;
  float BulletFlareAttractionRadius;
  float BulletFlareExplosionRadius;
  bool BulletIsWard;
  float BulletWardRadius;
  const wstring IsLaser;
  const wstring LaserType;
  float LaserUVScale;
  float LaserUSpeed;
  float LaserVSpeed;
  uint LaserCylinderSideCount;
  bool LaserBackface;
  uint LaserDuration;
  float LaserRadius;
  float LaserRadiusAtOneMeter0;
  float LaserRadiusAtOneMeter1;
  uint LaserDamage;
  uint HelixVerticesCountPerTurn;
  float HelixTurnLength;
  float HelixOutterRadius;
  float HelixInnerRadius;
  float HelixStartAngle;
  uint HelixMaxHelixCount;
  bool HelixClockWise;
  float DoubleHelixStartAngle;
  bool DoubleHelixClockWise;
  uint BWSNbRadialSubDiv;
  uint BWSNbVerticalSubDiv;
  uint BWSNbSpheresPerMeter;
  float BWSRadius;
  float BWSStartDistance;
  float BWSStepAngle;
  float BWSEndDistance;
  float BWSSpeed;
  uint BWCNbSubDiv;
  float BWCStepSize;
  float BWCOutterRadius;
  float BWCInnerRadius;
  float BWCHalfWidth;
  float BWCTimeStartFade;
  float BWCFadeSpeed;
  uint LightningcBeam;
  float LightningDistStep;
  float LightningMaxJitterDistPerStep;
  float LightningJitterRadius;
  float LightningLenMax;
  float LightningFadeTimeScale;
  float LightningFadeTimeOffset;
  float SoundParamVolume; // Range: 0 - 1
  void ParamModePoint();
  void ParamModeSphereFull();
  void ParamModeSphereEmpty();
  void ParamModeDisc();
  void ParamModeCircle();
  const MwBuffer<CPlugBulletModel*> BulletModels;
};

// File extension: 'GameCtnMediaBlockFog.gbx'
struct CGameCtnMediaBlockFog : public CGameCtnMediaBlock {
  CGameCtnMediaBlockFog();

  void SwitchOn();
};

struct CGameEditorActionScript : public CMwNod {
  wstring EditorActionScript;
  uint ScriptCooldown;
  float ScriptReloadTime;
  uint ScriptEnergyNbBullets;
  bool ScriptAdvancedMode;
  float ScriptEffectOffset;
  bool ScriptAnimOnPlayer;
  float ScriptAnimPosX;
  float ScriptAnimPosY;
  float ScriptAnimPosZ;
  float ScriptAnimDirX;
  float ScriptAnimDirY;
  float ScriptAnimDirZ;
  bool ScriptProjByPlayer;
  float ScriptProjPosX;
  float ScriptProjPosY;
  float ScriptProjPosZ;
  float ScriptProjDirX;
  float ScriptProjDirY;
  float ScriptProjDirZ;
  bool ScriptEffectIsArea;
  bool ScriptAoeIsArea;
  float ScriptBuffDuration;
  string ScriptBuffName;
  bool ScriptAoeOnPlayer;
  float ScriptAoePosX;
  float ScriptAoePosY;
  float ScriptAoePosZ;
  string ScriptAoeName;
  float ScriptAoeDuration;
  float ScriptAoeTickTime;
  uint ScriptAoeTickValue;
  float ScriptAoeRadius;
  bool ScriptAoeOnlyAllies;
  bool ScriptAoeOnlyEnemies;
  bool ScriptAoeAffectsOwner;
  string ScriptProjName;
};

struct CGameEditorItem : public CGameEditorAsset {
  void Exit();
  void FileOpen();
  void FileSaveAs();
  void FileNew();
  void Help();
  void SwitchFullScreen();
  void EditCapsuleTrigger();
  void EditDiscTrigger();
  void EditCylinderObjectTrigger();
  void EditTimeTrigger();
  void EditMeshTrigger();
  void EditCapsuleObjectTrigger();
  void CreateAABBShape();
  void CreateSphereShape();
  void CreateCylinderShape();
  void ImportResources();
  void CreateResources();
  void TriggerValidate();
  void SwitchActionMaker();
  void SwitchParticleModel();
  void SwitchVehicleEditor();
  void SwitchMeshModeler();
  void CenterCamera();
  void PrevInput();
  void NextInput();
  void PrevLinkedAction();
  void NextLinkedAction();
  void AddEmptyMesh();
  CGameCtnApp* const Game;
  float TimeTriggerPeriod;
  const string TriggerInput;
  const string LinkedAction;
  float SpritePosX;
  float SpritePosY;
  float SpritePosZ;
  float SpriteSize; // Range: 0 - 25
  bool SpriteIsFree;
  float ShapeAABBWidth;
  float ShapeAABBHeight;
  float ShapeAABBDepth;
  float ShapeSphereRadius;
  float ShapeCylinderHeight;
  float ShapeCylinderRadius;
  bool PlacementParamSwitchPivotManually;
  float PlacementParamFlyStep;
  float PlacementParamFlyOffset;
  float PlacementParamGridHorizontalSize;
  float PlacementParamGridHorizontalOffset;
  float PlacementParamGridVerticalSize;
  float PlacementParamGridVerticalOffset;
  float PlacementParamCubeSize;
  float PlacementParamCubeCenterX;
  float PlacementParamCubeCenterY;
  float PlacementParamCubeCenterZ;
  bool PlacementParamYawOnly;
  bool PlacementParamNotOnObject;
  bool PlacementParamAutoRotation;
  float PlacementParamPivotSnapDistance;
  CGameItemModel* ItemModel;
};

struct CGameManialinkMiniMap : public CGameManialinkControl {
  vec3 WorldPosition; // Maniascript
  vec2 MapPosition; // Maniascript
  float MapYaw; // Maniascript
  float ZoomFactor; // Range: 0.5 - 10 // Maniascript
  bool Underground; // Maniascript
  bool DisableAutoUnderground; // Maniascript
  void Fog_SetAll(float Value); // Maniascript
  void Fog_ClearDisk(vec3 WorldCenter, float Radius, float FadeSize); // Maniascript
};

struct CGameMgrGatePhy : public CSceneMgrPhy {
};

struct CGameMgrGateVis : public CSceneMgrVis {
  uint ArmorAnimTime;
  float ArmorAnimExp;
};

struct CGameEditorManialink : public CGameEditorBase {
  CGameEditorManialink();

  void GenerateMetadataTree();
  void ButExit();
  void ButAddQuad();
  void ButAddFrame();
  void ButAddFrameModel();
  void ButAddFrameInstance();
  void ButAddFormat();
  void ButAddLabel();
  void ButAddAudio();
  void ButAddEntry();
  void ButAddTextEdit();
  void ButAddFileEntry();
  void ButAddVideo();
  void ButAddGauge();
  void ButAddGraph();
  void ButDeleteTag();
  void ButLockControl();
  void ButUnlockControl();
  void ButIndent();
  void ButHelp();
  void ButAdvancedOptions();
  void ButUndo();
  void ButRedo();
  void ButToggleStyles();
  void ButTogglePreview();
  void ButReloadResources();
  void ButQuadImage();
  void ButQuadImageFocus();
  void ButQuadStyle();
  void ButTextStyle();
  void ButTextTextFont();
  void ButGaugeStyle();
  void ButMediaData();
  void OnTextFontChoosen();
  void OnMediaChoosen();
  void OnImageChoosen();
  void ButQuadColor();
  void ButTextColorColor();
  void ButBgColorColor();
  void ButColorHelperOk();
  void ButFocusAreaColor1Color();
  void ButFocusAreaColor2Color();
  void ButGaugeColorColor();
  void ButColorHelperCancel();
  wstring Params;
  wstring PosnX;
  wstring PosnY;
  wstring PosnZ;
  wstring Scale;
  wstring Rot;
  wstring Id;
  wstring Class;
  bool ButtonHidden;
  wstring SizenWidth;
  wstring SizenHeight;
  wstring Halign;
  wstring Valign;
  wstring FrameModelId;
  wstring ModelId;
  wstring Image;
  wstring ImageFocus;
  wstring Style;
  wstring Substyle;
  wstring Colorize;
  wstring ModulateColor;
  wstring KeepRatio;
  bool ButtonStyleSelected;
  bool ButtonAutoscale;
  bool ButtonAutoscaleFixedWidth;
  wstring StyleText;
  wstring TextColor;
  wstring TextSize;
  wstring TextFont;
  wstring FocusAreaColor1;
  wstring FocusAreaColor2;
  wstring Url;
  wstring Manialink;
  wstring Text;
  wstring TextId;
  wstring Action;
  wstring TextPrefix;
  wstring MaxLine;
  wstring Opacity;
  wstring LineSpacing;
  bool ButtonTextEmboss;
  bool ButtonTranslate;
  wstring Default;
  wstring Name;
  bool ButtonSelectText;
  wstring TextEditDefault;
  wstring TextEditMaxLine;
  bool ButtonShowLineNumbers;
  wstring TextFormat;
  wstring Data;
  wstring Volume;
  bool ButtonLooping;
  bool ButtonPlay;
  bool ButtonMusic;
  bool ButtonScriptEvents;
  wstring BgColor;
  bool ButtonAutoNewLine;
  wstring Folder;
  wstring Type;
  wstring Style3d;
  wstring Grading;
  wstring Ratio;
  wstring StyleGauge;
  wstring GaugeColor;
  wstring Clan;
  bool ButtonCentered;
  bool ButtonDrawBg;
  bool ButtonDrawBlockBg;
  void ButHalignNextInput();
  void ButHalignPrevInput();
  void ButValignNextInput();
  void ButValignPrevInput();
  void ButKeepRatioNextInput();
  void ButKeepRatioPrevInput();
  void ButClanNextInput();
  void ButClanPrevInput();
  void ButTypeNextInput();
  void ButTypePrevInput();
  void ButXmlTypeNextInput();
  void ButXmlTypePrevInput();
  void ButTextFormatNextInput();
  void ButTextFormatPrevInput();
  void ButActionNext();
  void ButActionPrev();
  void ButUIBaseChoose();
  void ButUIBaseUp();
  void ButUIBaseDown();
  void ButUIBaseDelete();
  void OnUIBaseChoosen();
  void ToggleScriptEditorSize();
  bool ButtonGrid;
  bool ButtonSnap;
  wstring Step;
  wstring RotationStep;
  float ColorHelperOpacity; // Range: 0 - 1
  CControlFrame* const FrameLayoutEditor;
};

// Description: "API for titles in edition mode."
struct CGameManiaTitleEditionScriptAPI : public CMwNod {
  enum class EDrive {
    TitleReadable = 0,
    Title = 1,
    User = 2,
  };
  CGameManiaTitle* const TitleMaker; // Maniascript
  CGamePackCreatorScript* const PackCreator; // Maniascript
  const string EditedTitleId; // Maniascript
  CGamePackCreator_TitleInfoScript* const EditedTitleInfo; // Maniascript
  void File_ImportFromUser(wstring FileName); // Maniascript
  void File_Move(wstring OrigName, wstring DestNameOrFolder, bool KeepOriginalCopy); // Maniascript
  bool File_Exists(wstring FileName, EDrive InDrive); // Maniascript
  void File_Delete(wstring Name); // Maniascript
  void File_WriteText(wstring FileName, wstring Text); // Maniascript
  wstring File_ReadText(wstring FileName); // Maniascript
  void Dialog_ImportFiles(); // Maniascript
  const bool Dialog_IsFinished; // Maniascript
  const bool Dialog_Success; // Maniascript
  const bool Dialog_Aborted; // Maniascript
  void OpenTitleFolderInExplorer(); // Maniascript
  void ReloadTitleDesc(); // Maniascript
  void SaveTitleDesc(); // Maniascript
  void SetTitleCampaign(uint CampaignNum, string ScoreContext, wstring MapsFolderNameOrPlayListName, bool OfficialRecordEnabled); // Maniascript
  void SetTitleCampaign2(uint CampaignNum, string ScoreContext, wstring MapsFolderNameOrPlayListName, bool OfficialRecordEnabled, bool DisableUnlockSystem); // Maniascript
};

struct CGameEditorBase : public CMwNod {
};

struct CGameEditorPropertyList : public CMwNod {
};

struct CGameEditorFileToolBar : public CMwNod {
};

// Description: "API for Maniaplanet client scripts."
struct CGameManiaApp : public CMwNod {
  enum class ELinkType {
    ExternalBrowser = 0,
    ManialinkBrowser = 1,
  };
  enum class ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum class ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  const string ManiaAppUrl; // Maniascript
  const string ManiaAppBaseUrl; // Maniascript
  const int Now; // Maniascript
  const bool IsVisible; // Maniascript
  const uint CurrentDate; // Maniascript
  const string CurrentLocalDateText; // Maniascript
  const wstring CurrentTimezone; // Maniascript
  uint LayersDefaultManialinkVersion; // Maniascript
  CGamePlayerInfo* const LocalUser; // Maniascript
  CGameManiaTitle* const LoadedTitle; // Maniascript
  const ESystemPlatform SystemPlatform; // Maniascript
  const ESystemSkuIdentifier SystemSkuIdentifier; // Maniascript
  bool EnableMenuNavigationInputs; // Maniascript
  const float MouseX; // Maniascript
  const float MouseY; // Maniascript
  const MwBuffer<CGameUILayer*> UILayers; // Maniascript
  CGameUILayer* UILayerCreate(); // Maniascript
  void UILayerDestroy(CGameUILayer* Layer); // Maniascript
  void UILayerDestroyAll(); // Maniascript
  void LayerCustomEvent(CGameUILayer* Layer, wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void OpenLink(string Url, ELinkType LinkType); // Maniascript
  bool OpenFileInExplorer(wstring FileName); // Maniascript
  void Dialog_Message(wstring Message); // Maniascript
  CXmlScriptParsingManager* const Xml; // Maniascript
  CNetScriptHttpManager* const Http; // Maniascript
  CGameVideoScriptManager* const Video; // Maniascript
  CAudioScriptManager* const Audio; // Maniascript
  CInputScriptManager* const Input; // Maniascript
  CGameDataFileManagerScript* const DataFileMgr; // Maniascript
  CGameScoreAndLeaderBoardManagerScript* const ScoreMgr; // Maniascript
  CGameUserPrivilegesManagerScript* const PrivilegeMgr; // Maniascript
  CGameMasterServerRichPresenceManagerScript* const PresenceMgr; // Maniascript
  CGameUserManagerScript* const UserMgr; // Maniascript
  CSystemPlatformScript* const System; // Maniascript
  CGameManiaPlanetScriptAPI* const ManiaPlanet; // Maniascript
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly); // Maniascript
};

struct CGameManiaAppScriptEvent : public CScriptBaseConstEvent {
  enum class EType {
    LayerCustomEvent = 0,
    KeyPress = 1,
    ExternalCustomEvent = 2,
    MenuNavigation = 3,
  };
  enum class EMenuNavAction {
    Up = 0,
    Right = 1,
    Left = 2,
    Down = 3,
    Select = 4,
    Cancel = 5,
    PageUp = 6,
    PageDown = 7,
    AppMenu = 8,
    Action1 = 9,
    Action2 = 10,
    ScrollUp = 11,
    ScrollDown = 12,
  };
  const EType Type; // Maniascript
  CGameUILayer* const CustomEventLayer; // Maniascript
  const wstring CustomEventType; // Maniascript
  const MwBuffer<wstring> CustomEventData; // Maniascript
  const wstring ExternalEventType; // Maniascript
  const MwBuffer<wstring> ExternalEventData; // Maniascript
  const EMenuNavAction MenuNavAction; // Maniascript
  const bool IsActionAutoRepeat; // Maniascript
  const uint KeyCode; // Maniascript
  const string KeyName; // Maniascript
};

// Description: "API for game interface client scripts"
struct CGameManiaAppPlaygroundCommon : public CGameManiaApp {
  const MwBuffer<CGameManiaAppPlaygroundScriptEvent*> PendingEvents; // Maniascript
  CGamePlaygroundClientScriptAPI* const Playground; // Maniascript
  CGameCtnChallenge* const Map; // Maniascript
  CGamePlaygroundUIConfig* UI; // Maniascript
  CGamePlaygroundUIConfig* ClientUI; // Maniascript
  const uint SplitScreenCount; // Maniascript
  void SplitScreenAssignLayer(CGameUILayer* UILayer, uint ScreenNum); // Maniascript
};

struct CGameManialinkCamera : public CGameManialinkControl {
};

struct CGameReplayObjectVisData : public CMwNod {
  CGameReplayObjectVisData();

};

// Description: "API for a Title main menu."
struct CGameManiaAppTitle : public CGameManiaApp {
  const MwBuffer<CGameManiaAppScriptEvent*> PendingEvents; // Maniascript
  void Menu_Quit(); // Maniascript
  void Menu_Home(); // Maniascript
  void Menu_Solo(); // Maniascript
  void Menu_Local(); // Maniascript
  void Menu_Internet(); // Maniascript
  void Menu_Editor(); // Maniascript
  void Menu_Profile(); // Maniascript
  void PlayMap(wstring Map); // Maniascript
  bool LoadingScreenRequireKeyPressed; // Maniascript
  bool DontScaleMainMenuForHMD; // Maniascript
  CGameManiaTitleControlScriptAPI* const TitleFlow; // Maniascript
  CGameManiaTitleControlScriptAPI* const TitleControl; // Maniascript
  CGameManiaTitleEditionScriptAPI* const TitleEdition; // Maniascript
  CGameScriptNotificationsConsumer* const Notifications; // Maniascript
  const wstring ExternalRequest_Type; // Maniascript
  const MwBuffer<wstring> ExternalRequest_Data; // Maniascript
  void ExternalRequest_Clear(); // Maniascript
  CGameAchievementScriptManager* const AchievementsManager; // Maniascript
  CGameManagerBadgeScript* const BadgeManager; // Maniascript
  CGameMatchSettingsManagerScript* const MatchSettingsManager; // Maniascript
  void Authentication_GetToken(MwId UserId, string AppLogin); // Maniascript
  const bool Authentication_GetTokenResponseReceived; // Maniascript
  const uint Authentication_ErrorCode; // Maniascript
  const string Authentication_Token; // Maniascript
};

// File extension: 'GameCtnMediaBlockDecal2d.gbx'
struct CGameCtnMediaBlockDecal2d : public CGameCtnMediaBlock {
  CGameCtnMediaBlockDecal2d();

};

struct CGameCtnMediaBlockEditorDecal2d : public CGameCtnMediaBlockEditor {
  CGameCtnMediaBlockEditorDecal2d();

  void ChooseImage();
  const wstring ImgDiffuseA;
  float Depth; // Range: 0 - 5
  float Opacity; // Range: 0 - 1
  bool FlipU;
  bool ForcePreview;
  CPlugDecalModel* DecalModel;
  CControlFrame* Frame;
};

struct CGameManiaAppBrowser : public CGameManiaApp {
  const MwBuffer<CGameManiaAppScriptEvent*> PendingEvents; // Maniascript
  void BrowserBack(); // Maniascript
  void BrowserQuit(); // Maniascript
  void BrowserHome(); // Maniascript
  void BrowserReload(); // Maniascript
  wstring BrowserFocusedFrameId; // Maniascript
};

// Description: "API for titles menus to control the main loop."
struct CGameManiaTitleControlScriptAPI : public CMwNod {
  enum class ESplitScreenLayout {
    Horizontal = 0,
    Vertical = 1,
    Four = 2,
  };
  enum class EResult {
    Success = 0,
    Error_Internal = 1,
    Error_DataMgr = 2,
    Error_Net_ServerNotFound = 3,
    Error_Net_ServerUnreachable = 4,
    Error_Net_Disconnected = 5,
    Error_Net_WrongPassword = 6,
    Error_Network_OnlineExpired = 7,
    Error_Network_ServerFull = 8,
    Error_Abort = 9,
  };
  enum class EEditorType {
    ActionMaker = 0,
    ChallengeEditor = 1,
    ItemEditor = 2,
    InterfaceDesigner = 3,
    MeshModeler = 4,
    ModuleStudio = 5,
    PixelArt = 6,
    EditorEditor = 7,
    VehicleAssembler = 8,
    MaterialEditor = 9,
  };
  void Dbg_GetServerInfoObj();
  void Dbg_Join_GetServerInfo_Result();
  void Dbg_PlayMatchSettingsObject();
  void Dbg_PlaySplitScreenObj();
  void Dbg_PlayMultiOnSameScreenObj();
  const bool IsReady; // Maniascript
  const EResult LatestResult; // Maniascript
  const wstring CustomResultType; // Maniascript
  const MwBuffer<wstring> CustomResultData; // Maniascript
  void PlayMap(wstring Map, wstring Mode, string SettingsXml); // Maniascript
  void PlayCampaign(CGameCtnCampaign* Campaign, CGameCtnChallengeInfo* MapInfo, wstring Mode, string SettingsXml); // Maniascript
  void PlayMapList(MwBuffer<wstring>& MapList, wstring Mode, string SettingsXml); // Maniascript
  void PlayPlaylist(wstring Playlist, wstring OverrideMode, string OverrideSettingsXml); // Maniascript
  void PlayMatchSettingsFile(wstring MatchSettingsFilePath, wstring OverrideMode, string OverrideSettingsXml); // Maniascript
  void PlayMatchSettingsObject(CGameMatchSettingsScript* MatchSettings, wstring OverrideMode, string OverrideSettingsXml); // Maniascript
  void PlaySplitScreen(ESplitScreenLayout LayoutType, MwBuffer<wstring>& MapList, wstring Mode, string SettingsXml); // Maniascript
  void PlayMultiOnSameScreen(MwBuffer<wstring>& MapList, wstring Mode, string SettingsXml); // Maniascript
  void PlaySplitScreenObj(ESplitScreenLayout LayoutType, CGameMatchSettingsScript* MatchSettings); // Maniascript
  void PlayMultiOnSameScreenObj(CGameMatchSettingsScript* MatchSettings); // Maniascript
  void ViewReplay(wstring Replay); // Maniascript
  void OpenEditor(wstring EditorName, string MainPluginSettings); // Maniascript
  void OpenEditor2(EEditorType EditorType); // Maniascript
  void EditSkins(); // Maniascript
  void EditReplay(MwBuffer<wstring>& ReplayList); // Maniascript
  void EditGhosts(wstring Map); // Maniascript
  void EditAsset(wstring EditorName, string MainPluginSettingsXml, wstring RelativeFileName); // Maniascript
  void EditMap(wstring Map, wstring EditorPluginScript, string EditorPluginArgument); // Maniascript
  void EditNewMap1(string Environment, string Decoration, wstring ModNameOrUrl, wstring PlayerModel, wstring MapType, wstring EditorPluginScript, string EditorPluginArgument); // Maniascript
  void EditNewMap2(string Environment, string Decoration, wstring ModNameOrUrl, wstring PlayerModel, wstring MapType, bool UseSimpleEditor, wstring EditorPluginScript, string EditorPluginArgument); // Maniascript
  void EditNewMapFromBaseMap(wstring BaseMapName, wstring ModNameOrUrl, wstring PlayerModel, wstring MapType, wstring EditorPluginScript, string EditorPluginArgument); // Maniascript
  void EditBadges(); // Maniascript
  void EditBadgesOld(MwId UserId DEPRECATED); // Maniascript
  const bool CanPublishFiles; // Maniascript
  void PublishFile(wstring FileName); // Maniascript
  void ProcessManiaCodeXml(string ManiaCodeXml); // Maniascript
  const MwBuffer<CGameCtnNetServerInfo*> LocalServers; // Maniascript
  const MwBuffer<CGameCtnNetServerInfo*> LocalServers_CurrentTitle; // Maniascript
  void DiscoverLocalServers(); // Maniascript
  void CreateServer1(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, MwBuffer<wstring>& MapList, wstring Mode, string ScriptsSettingsXml); // Maniascript
  void CreateServer2(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, wstring MatchSettingsFileName); // Maniascript
  void CreateServer2Obj(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, CGameMatchSettingsScript* MatchSettings, string PasswordSpectators); // Maniascript
  void CreateServer3(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, bool LocalOnly, MwBuffer<wstring>& MapList, wstring Mode, string ScriptsSettingsXml); // Maniascript
  void CreateServer4(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, bool LocalOnly, wstring MatchSettingsFileName); // Maniascript
  void CreateServer4Obj(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, CGameMatchSettingsScript* MatchSettings, bool LocalOnly); // Maniascript
  void GetServerInfo(string ServerLogin); // Maniascript
  void GetServerInfoObj(CGameCtnNetServerInfo* LocalServer); // Maniascript
  void GetServerInfo_Abort(); // Maniascript
  CGameCtnNetServerInfo* const GetServerInfo_Result; // Maniascript
  void Join_GetServerInfo_Result(bool AsSpectator, string Password); // Maniascript
  void JoinServer(string ServerLogin, bool AsSpectator, string Password); // Maniascript
  void JoinServer_Abort(); // Maniascript
  CGameCtnNetServerInfo* const JoinServer_ServerInfo; // Maniascript
  void JoinServer_GetInfo(string ServerLogin); // Maniascript
  void JoinServer_GetInfoPwd(string ServerLogin, string ServerPassword); // Maniascript
  void JoinServer_GetInfoObj(CGameCtnNetServerInfo* Server); // Maniascript
  void JoinServer_GetInfoObjPwd(CGameCtnNetServerInfo* Server, string ServerPassword); // Maniascript
  void JoinServer_Join(bool AsSpectator); // Maniascript
  void Quit(); // Maniascript
};

// Description: "This is the title menus Manialink interface."
struct CGameManiaAppTitleLayerScriptHandler : public CGameManialinkScriptHandler {
  CGameManiaAppTitle* const ParentApp; // Maniascript
  CGameManiaTitleControlScriptAPI* const TitleControl; // Maniascript
  CGameManiaTitleControlScriptAPI* const TitleFlow; // Maniascript
};

struct CGameEditorPluginMapLayerScriptHandler : public CGameManialinkScriptHandler {
  CGameEditorPluginMap* const Editor; // Maniascript
};

// Description: "A Notification."
struct CGameScriptNotificationsConsumerNotification : public CMwNod {
  enum class ENotificationPriority {
    Memo = 0,
    Notice = 1,
    Alarm = 2,
  };
  const wstring Title; // Maniascript
  const wstring Description; // Maniascript
  const wstring ImageUrl; // Maniascript
  const ENotificationPriority Priority; // Maniascript
  const bool HasBeenRead; // Maniascript
  const bool HasBeenActivated; // Maniascript
  void SetRead(); // Maniascript
  void SetActivated(); // Maniascript
};

// Description: "Notifications Producing manager."
struct CGameScriptNotificationsProducer : public CMwNod {
  enum class ENotificationLifeSpan {
    Game = 0,
    Session = 1,
    NeverEnding = 2,
  };
  enum class ENotificationPriority {
    Memo = 0,
    Notice = 1,
    Alarm = 2,
  };
  const MwBuffer<CGameScriptNotificationsProducerEvent*> Events; // Maniascript
  void SendNotification(MwBuffer<wstring>& CallbackParams, wstring Title, wstring Description, wstring ImageUrl, ENotificationLifeSpan LifeSpan, ENotificationPriority Priority); // Maniascript
};

// Description: "Manager of buddies instant messaging."
struct CGameScriptNotificationsConsumer : public CMwNod {
  enum class EFilterPriority {
    All = 0,
    MoreThanMemo = 1,
    MoreThanNotice = 2,
  };
  const MwBuffer<CGameScriptNotificationsConsumerEvent*> Events; // Maniascript
  const MwBuffer<CGameScriptNotificationsConsumerNotification*> Notifications; // Maniascript
  const MwBuffer<CGameScriptNotificationsConsumerNotification*> FilteredNotifications; // Maniascript
  EFilterPriority Filter_Priority; // Maniascript
};

// Description: "An event."
struct CGameScriptNotificationsProducerEvent : public CMwNod {
  enum class EType {
    NotificationHasBeenActivated = 0,
  };
  const EType Type; // Maniascript
};

// Description: "An event."
struct CGameScriptNotificationsConsumerEvent : public CMwNod {
  enum class EType {
    NewNotification = 0,
    NotificationChanged = 1,
  };
  const EType Type; // Maniascript
  CGameScriptNotificationsConsumerNotification* const Notification; // Maniascript
};

// Description: "Manialink entry."
struct CGameManialinkTextEdit : public CGameManialinkControl {
  enum class EControlScriptEditorTextFormat {
    Basic = 0,
    Script = 1,
    Password = 2,
    Newpassword = 3,
  };
  wstring Value; // Maniascript
  void StartEdition(); // Maniascript
  int MaxLine; // Maniascript
  bool AutoNewLine; // Maniascript
  bool ShowLineNumbers; // Maniascript
  float LineSpacing; // Maniascript
  const uint ValueLineCount; // Maniascript
  float Opacity; // Maniascript
  vec3 TextColor; // Maniascript
  float TextSizeReal; // Maniascript
  uint TextSize; // Maniascript
  EControlScriptEditorTextFormat TextFormat; // Maniascript
};

struct CGameUserFileList : public CMwNod {
  CGameUserFileList();

};

struct CGameManialinkStylesheet : public CMwNod {
  CGameManialinkStylesheet();

};

struct CGameMasterServerOnlineSignalsManager : public CMwNod {
  const MwBuffer<CGameMasterServerUserOnlineSignals*> UsersOnlineSignals; // Maniascript
  CGameMasterServerUserOnlineSignals* GetUserOnlineSignals(MwId UserId); // Maniascript
};

struct CGameMasterServerOnlineSignal : public CMwNod {
  const uint OnlineSignalId; // Maniascript
  const string SenderLogin; // Maniascript
  const string SenderDisplayName; // Maniascript
  const uint TimeStamp; // Maniascript
};

struct CGameMasterServerOnlineSignal_RecordBeaten : public CGameMasterServerOnlineSignal {
  const string BeatenLogin; // Maniascript
  const wstring BeatenDisplayName; // Maniascript
  const string Context; // Maniascript
  const string ChallengeUid; // Maniascript
  const wstring ChallengeName; // Maniascript
  const uint RecordScore; // Maniascript
  const uint RecordScoreBeaten; // Maniascript
};

struct CGameManiaAppMinimal : public CGameManiaApp {
  const MwBuffer<CGameManiaAppScriptEvent*> PendingEvents; // Maniascript
};

struct CGameVideoScriptManager : public CMwNod {
  CGameVideoScriptVideo* CreateVideo(string Url, bool IsLooping, bool AutoProcessing); // Maniascript
  void DestroyVideo(CGameVideoScriptVideo* Video); // Maniascript
  const MwBuffer<CGameVideoScriptVideo*> Videos; // Maniascript
};

// Description: "Ghost"
struct CGameGhostScript : public CMwNod {
  const MwId Id; // Maniascript
  CTmRaceResultNod* const Result; // Maniascript
  wstring Nickname; // Maniascript
};

// Description: "Description of a race run."
struct CTmRaceResultNod : public CMwNod {
  enum class ETmRaceResultCriteria {
    Time = 0,
    Stunts = 1,
    NbRespawns = 2,
    CheckpointsProgress = 3,
    None = 4,
  };
  int Time; // Maniascript
  int Score; // Maniascript
  int StuntsScore; // Maniascript
  int NbRespawns; // Maniascript
  MwBuffer<int> Checkpoints; // Maniascript
  int Compare(CTmRaceResultNod* Other, ETmRaceResultCriteria Criteria); // Maniascript
};

// Description: ""
struct CGameEditorModule : public CGameCtnEditor {
  enum class EModuleType {
    Undefined = 0,
    Hud = 1,
    Inventory = 2,
    Store = 3,
    ScoresTable = 4,
    Equipment = 5,
    MenuBase = 6,
    MenuPage = 7,
    Chrono = 8,
    SpeedMeter = 9,
    PlayerState = 10,
    TeamState = 11,
  };
  void Exit();
  void FileNew();
  void FileOpen();
  void FileSave();
  void FileSaveAs();
  void SwitchToPreview();
  void SwitchFromPreview();
  void AdvancedParameters();
  void CustomMode();
  void ActionIsPowerup();
  void SwitchInterfaceDesigner();
  CGameCtnApp* const Game;
  void EditHudModule_OnBack();
  void EditSubpart_OnBack();
  void EditScoresTableColumn_OnNextTextHalign();
  void EditScoresTableColumn_OnPrevTextHalign();
  void EditMenuLadderRankings_OnNextMode();
  void EditMenuLadderRankings_OnPrevMode();
  void EditInventoryCategory_LoadIconUrl();
  float EditHudModulePosX;
  float EditHudModulePosY;
  float EditHudModuleZIndex;
  float EditHudModuleScale;
  string EditActionName;
  string EditActionDesc;
  uint EditActionMaxLevel;
  uint EditActionPrice;
  uint EditActionPrice1;
  uint EditActionPrice2;
  uint EditActionPrice3;
  uint EditActionPrice4;
  uint EditActionPrice5;
  string EditItemName;
  string EditItemDesc;
  uint EditItemPrice;
  string EditCategoryName;
  string EditCategoryDesc;
  wstring EditCategoryIconUrl;
  string EditColumnName;
  string EditColumnId;
  string EditColumnDefaultValue;
  float EditColumnWidth;
  string EditColumnTextStyle;
  float EditColumnTextSize;
  string EditPageName;
  MwBuffer<string> EditedPageButtonsValues;
  void NewModule(EModuleType ModuleType); // Maniascript
  void OpenModule(wstring Path); // Maniascript
  void Save(); // Maniascript
  void SaveAs(wstring Path); // Maniascript
  void SaveCopyAs(wstring Path); // Maniascript
  void ForceExit(); // Maniascript
  CGameModuleMenuModel* const EditedMenu; // Maniascript
  CGameModuleMenuPageModel* const EditedMenuPage; // Maniascript
  CGameModulePlaygroundPlayerStateModel* const EditedPlaygroundPlayerState; // Maniascript
  CGameModulePlaygroundHudModel* const EditedPlaygroundHud; // Maniascript
  void EditedPlaygroundHud_SetPreviewContext(MwId ContextId); // Maniascript
  bool GetControlRect(MwId ElementId, vec2 Center, vec2 Size); // Maniascript
  void FileBrowser_Open(); // Maniascript
  const bool FileBrowser_IsRunning; // Maniascript
  const wstring FileBrowser_FilePath; // Maniascript
  const MwBuffer<CGameEditorPluginModuleScriptEvent*> PendingEvents; // Maniascript
  const bool IsPreviewMode; // Maniascript
};

struct CGameMgrItem : public CMwNod {
  CGameMgrItem();

};

struct CGameHighScoreList : public CMwNod {
  const MwBuffer<CGameHighScore*> HighScores; // Maniascript
  const bool IsReady; // Maniascript
  const bool ErrorOccured; // Maniascript
};

// Description: "Manager of achievements."
struct CGameAchievementScriptManager : public CMwNod {
  const MwBuffer<CGameAchievementScriptEvent*> PendingEvents; // Maniascript
  const MwBuffer<CGameAchievementScriptAchievement*> Achievements; // Maniascript
  const MwBuffer<CGameAchievementScriptStat*> Stats; // Maniascript
  const MwBuffer<CGameAchievementScriptAchievementDesc*> AchievementDescriptions; // Maniascript
  const MwBuffer<CGameAchievementScriptStatDesc*> StatDescriptions; // Maniascript
  void SendEvent(MwId UserId, string Mnemo, MwBuffer<int>& Params); // Maniascript
};

// Description: "Event concerning achievements."
struct CGameAchievementScriptEvent : public CScriptBaseConstEvent {
  enum class EType {
    NewAchievement = 0,
  };
  const EType Type; // Maniascript
  CGameAchievementScriptAchievement* const Achievement; // Maniascript
};

// Description: "An achievement earned by a user."
struct CGameAchievementScriptAchievement : public CMwNod {
  const MwId UserId; // Maniascript
  CGameAchievementScriptAchievementDesc* const AchievementDesc; // Maniascript
};

// Description: "Achievement stat."
struct CGameAchievementScriptStat : public CMwNod {
  const MwId UserId; // Maniascript
  CGameAchievementScriptStatDesc* const StatDesc; // Maniascript
  const uint Value; // Maniascript
};

struct CGamePlaygroundModuleClientInventory : public CGamePlaygroundModuleClient {
  CGameUILayer* const InventoryLayer; // Maniascript
};

struct CGamePlaygroundModuleClientScoresTable : public CGamePlaygroundModuleClient {
};

struct CGamePlaygroundModuleManagerClient : public CMwNod {
};

struct CGameManiaAppPlaygroundScriptEvent : public CGameManiaAppScriptEvent {
  enum class Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    PlaygroundScriptEvent = 4,
  };
  const wstring PlaygroundScriptEventType; // Maniascript
  const MwBuffer<wstring> PlaygroundScriptEventData; // Maniascript
};

struct CGameBadgeScript : public CMwNod {
  vec3 PrimaryColor; // Maniascript
  wstring SkinName; // Maniascript
  wstring StickerSlot_Get(string Slot); // Maniascript
  void StickerSlot_Set(string Slot, wstring Sticker); // Maniascript
  void StickerSlot_Clear(); // Maniascript
  MwBuffer<wstring> Layers; // Maniascript
};

struct CGameUserProfile : public CMwNod {
  CGameUserProfile();

  ECamName CamName;
};

struct CGameUIAnimManager : public CMwNod {
};

struct CGameControlCameraTrackManiaRace3 : public CGameControlCameraTarget {
  CGameControlCameraTrackManiaRace3();

  CPlugVehicleCameraRace3Model* m_Model;
};

struct CGameControlCameraTrackManiaRace2 : public CGameControlCameraTarget {
  CGameControlCameraTrackManiaRace2();

  CPlugVehicleCameraRace2Model* m_Model;
};

struct CGameEditorBadge : public CGameEditorBase {
  CGameEditorBadgeScript* const ScriptAPI;
  uint DisplayTextureSize_Log2; // Range: 6 - 12
};

struct CGameEditorBadgeScript : public CGameManiaAppMinimal {
  CGameEditorBadge* const Game;
  void Leave(); // Maniascript
  CGameBadgeScript* DisplayCurrentBadge; // Maniascript
  vec2 DisplayPosN; // Maniascript
  vec2 DisplaySize; // Maniascript
  float DisplayFoV; // Maniascript
  float CameraTransitionDuration; // Range: 0.1 - 10 // Maniascript
  float MeshRotation_MaxSpeed; // Range: -10 - 10 // Maniascript
  float MeshRotation_Acceleration; // Range: 0.1 - 10 // Maniascript
  MwId DisplayCurrentMeshId; // Maniascript
  const MwBuffer<MwId> MeshIds; // Maniascript
  void MeshId_Next(); // Maniascript
  void MeshId_Previous(); // Maniascript
  const MwBuffer<CGameBadgeScript*> Badges; // Maniascript
  CGameBadgeScript* BadgeCreate(); // Maniascript
  void BadgeDestroy(CGameBadgeScript* Badge); // Maniascript
  void BadgeCopy(CGameBadgeScript* Source, CGameBadgeScript* Destination); // Maniascript
  void BadgeReadFromProfile(CGameBadgeScript* Badge, MwId UserId); // Maniascript
  void BadgeWriteToProfile(CGameBadgeScript* Badge, MwId UserId); // Maniascript
};

struct CGamePlaygroundModuleClientStore : public CGamePlaygroundModuleClient {
  CGameUILayer* const StoreLayer; // Maniascript
};

struct CGamePlaygroundModuleConfig : public CMwNod {
};

// Description: "Masterserver user info."
struct CGameMasterServerUserInfo : public CNetMasterServerUserInfo {
  const bool NeedToChangeZone; // Maniascript
  const uint ZoneLevelCount; // Maniascript
  wstring GetZone(uint ZoneLevel); // Maniascript
  const uint MultiInternetPlayTimeLeft; // Maniascript
};

// File extension: 'StickerSlots.Gbx'
struct CGameBadgeStickerSlots : public CMwNod {
  CGameBadgeStickerSlots();

  const uint MeshCount;
};

struct CGamePlaygroundModuleClient : public CGameManiaAppPlaygroundCommon {
};

// Description: "This is the client ManiaApp for game modes."
struct CGameManiaAppPlayground : public CGameManiaAppPlaygroundCommon {
  void SendCustomEvent(wstring Type, MwBuffer<wstring>& Data); // Maniascript
};

// Description: "This is a video playback handle."
struct CGameVideoScriptVideo : public CMwNod {
  enum class ETextureFilter {
    Default = 0,
    Point = 1,
  };
  CPlugBitmap* const Image; // Maniascript
  bool IsLooping; // Maniascript
  const bool DownloadInProgress; // Maniascript
  const float PlayLength; // Maniascript
  void BeginProcessing(); // Maniascript
  void EndProcessing(); // Maniascript
  const bool IsProcessing; // Maniascript
  bool AutoProcessing; // Maniascript
  void Play(); // Maniascript
  void Pause(); // Maniascript
  void Stop(); // Maniascript
  const bool IsPlaying; // Maniascript
  float PlayCursor; // Maniascript
  ETextureFilter TextureFilter; // Maniascript
};

// Description: "SystemUser from the platform."
struct CGameUserScript : public CMwNod {
  const string SystemName; // Maniascript
  const wstring DisplayName; // Maniascript
  const vec3 Color; // Maniascript
  const bool PersistentIsReady; // Maniascript
  void PersistentSave(); // Maniascript
  void SavePersistent(); // Maniascript
  CGameUserProfileWrapper* const Config; // Maniascript
};

// Description: "API for local users/profiles."
struct CGameUserManagerScript : public CMwNod {
  CGameUserProfileWrapper* const MainUserProfile; // Maniascript
  const MwBuffer<CWebServicesTaskResult*> TaskResults; // Maniascript
  void TaskResult_Release(MwId TaskId); // Maniascript
  CWebServicesTaskResult_StringIntList* GetGroups(MwId UserId); // Maniascript
  void RequestMainUserChange(); // Maniascript
  const MwBuffer<CGameUserScript*> Users; // Maniascript
  CInputScriptPad* const MainUserPad; // Maniascript
  const bool MainUserLogged; // Maniascript
  CGameUserScript* const MainUser; // Maniascript
  const bool Intro; // Maniascript
  bool CanSkipIntro; // Maniascript
  void SetSkipIntro(); // Maniascript
  void DevSetSkipIntro(); // Maniascript
  const bool MainUser_CanUseVoiceChat; // Maniascript
  bool VoiceChat_MuteAll; // Maniascript
  void ShowProfile(MwId UserId, string ProfileLogin); // Maniascript
};

// Description: "Results for comparison of challenge records with all the buddies."
struct CWebServicesTaskResult_BuddiesChallengeRecordsComparison : public CWebServicesTaskResult {
  const string Login; // Maniascript
  const MwBuffer<CGameHighScoreComparisonSummary*> BuddiesComparison; // Maniascript
  void SortByPlayerCount(); // Maniascript
  void SortByOpponentLogin(); // Maniascript
  void SortByOpponentCount(); // Maniascript
  void SortByOpponentDate(); // Maniascript
  void SortByOpponentDisplayName(); // Maniascript
};

struct CGameCtnMasterServerTask_GetChallengeRecordsComparisonSummaries : public CNetMasterServerRequestTask {
};

// Description: "Results for comparison of challenge records between a user and one of its buddy."
struct CWebServicesTaskResult_BuddyChallengeRecordsComparison : public CWebServicesTaskResult {
  const string Login; // Maniascript
  const string BuddyLogin; // Maniascript
  const MwBuffer<CGameHighScoreComparison*> PlayerBestRecordsComparison; // Maniascript
  const MwBuffer<CGameHighScoreComparison*> BuddyBestRecordsComparison; // Maniascript
  void SortByMapName(); // Maniascript
  void SortByRecordTime(); // Maniascript
  void SortByRecordTimeDiff(); // Maniascript
  void SortByRecordDate(); // Maniascript
};

struct CGameCtnMasterServerTask_ChallengeRecords_GetBuddyRecordComparison : public CNetMasterServerRequestTask {
};

struct CGameHighScoreComparison : public CMwNod {
  CGameCtnChallengeInfo* const MapInfo; // Maniascript
  const string Login; // Maniascript
  const uint RecordScore; // Maniascript
  const uint RecordTime; // Maniascript
  const uint RecordRespawnCount; // Maniascript
  const uint RecordDate; // Maniascript
  const string RecordDateString; // Maniascript
  const uint RecordElapsedTime; // Maniascript
  const uint RecordCount; // Maniascript
  const string OpponentLogin; // Maniascript
  const wstring OpponentDisplayName; // Maniascript
  const string OpponentRecordUrl; // Maniascript
  const uint OpponentRecordScore; // Maniascript
  const uint OpponentRecordTime; // Maniascript
  const uint OpponentRecordRespawnCount; // Maniascript
  const uint OpponentRecordDate; // Maniascript
  const string OpponentRecordDateString; // Maniascript
  const uint OpponentRecordElapsedTime; // Maniascript
  const uint OpponentRecordCount; // Maniascript
};

struct CGameHighScoreComparisonSummary : public CMwNod {
  const string Login; // Maniascript
  const uint BestRecordCount; // Maniascript
  const uint BestRecordLastDate; // Maniascript
  const string BestRecordLastDateString; // Maniascript
  const uint BestRecordElapsedTime; // Maniascript
  const string OpponentLogin; // Maniascript
  const wstring OpponentDisplayName; // Maniascript
  const uint OpponentBestRecordCount; // Maniascript
  const uint OpponentBestRecordLastDate; // Maniascript
  const string OpponentBestRecordLastDateString; // Maniascript
  const uint OpponentBestRecordElapsedTime; // Maniascript
};

// Description: ""
struct CGameModuleMenuBase : public CGameManiaAppTitle {
  CGameModuleMenuPage* GetFirstPage(wstring PageId); // Maniascript
  void Menu_Goto(wstring PageId); // Maniascript
  void Menu_Back(); // Maniascript
  void Menu_Previous(); // Maniascript
  void Menu_Quit(); // Maniascript
};

struct CGameModuleMenuBrowser : public CGameModuleMenuComponent {
  enum class EFileType {
    Maps = 0,
    Skins = 1,
    Items = 2,
    Blocks = 3,
    Scripts = 4,
    Images = 5,
    Manialinks = 6,
    Packs = 7,
    Actions = 8,
    Modules = 9,
    Meshes = 10,
    Replays = 11,
  };
  enum class EFileAction {
    Select = 0,
    Save = 1,
    MultiSelect = 2,
  };
  const bool HasFinished; // Maniascript
  const MwBuffer<wstring> Selection; // Maniascript
  void SetFileType(EFileType FileType); // Maniascript
  void SetFileAction(EFileAction FileAction); // Maniascript
};

struct CGameHapticDevice : public CMwNod {
};

// Description: "Script API to communicate with plugins."
struct CGamePluginInterfacesScript : public CMwNod {
  CGameManiaplanetPluginInterface* GetInterface(wstring Name); // Maniascript
  const MwBuffer<CGameManiaplanetPluginInterface*> Interfaces; // Maniascript
};

struct CGameModuleMenuComponent : public CMwNod {
  CGameUILayer* const ComponentLayer; // Maniascript
  void Hide(); // Maniascript
  void Show(); // Maniascript
};

struct CGameScoreAndLeaderBoardManager : public CMwNod {
};

struct CGameCampaignScoreManager : public CMwNod {
};

struct CGameCampaignScoreManager_MapRecord : public CGameCampaignScoreManager {
};

struct CGameCampaignScoreManager_MultiAsyncLevel : public CGameCampaignScoreManager {
};

struct CGameScoreComputer_MultiAsyncLevel : public CMwNod {
  CGameScoreComputer_MultiAsyncLevel();

};

struct CGameMultiplayerScoreManager : public CMwNod {
};

struct CGameGlobalScoreManager : public CMwNod {
};

struct CGameLeaderBoard : public CMwNod {
};

struct CGameNaturalLeaderBoard : public CGameLeaderBoard {
};

struct CGameRealLeaderBoard : public CGameLeaderBoard {
};

struct CGameCampaignLeaderBoard : public CGameNaturalLeaderBoard {
};

struct CGameMapLeaderBoard : public CGameNaturalLeaderBoard {
};

struct CGameMultiplayerLeaderBoard : public CGameRealLeaderBoard {
};

struct CGameGlobalLeaderBoard : public CGameRealLeaderBoard {
};

struct CGameScoreTask_UpdateData : public CWebServicesTaskSequence {
};

struct CGameScoreTask_UpdateMultiAsyncLevelComputer : public CGameScoreTask_UpdateData {
};

struct CGameScoreTask_LoadPlayerScores : public CWebServicesTaskSequence {
};

struct CGameScoreTask_SynchronizePlayerScore : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_MapBestRecords : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetCampaignMapRecords : public CNetMasterServerRequestTask {
};

struct CGameEditorPluginModuleScriptEvent : public CGameManiaAppScriptEvent {
  enum class Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    Exit = 4,
    FileNew = 5,
    FileOpen = 6,
    FileSave = 7,
    FileSaveAs = 8,
  };
  const EType Type; // Maniascript
  void Eat(); // Maniascript
};

struct CWebServicesTaskResult_PlayerMapRecords : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetCampaignPlayerRecords : public CNetMasterServerRequestTask {
};

struct CGameModuleMenuLadderRankings : public CGameModuleMenuComponent {
};

struct CGameScriptHandlerPlaygroundModuleStore : public CGameManialinkScriptHandler {
  const uint CurrentMoney; // Maniascript
  const MwBuffer<CGameModuleScriptStoreCategory*> StoreContent; // Maniascript
  void SetCategory(uint CategoryIndex); // Maniascript
  void SelectItem(uint ItemIndex); // Maniascript
  void BuySelectedItem(); // Maniascript
  void ClearItemSelection(); // Maniascript
  void Quit(); // Maniascript
  const MwBuffer<wstring> BlockedItemsUrls; // Maniascript
};

struct CGameModuleMenuServerBrowser : public CGameModuleMenuComponent {
};

struct CGamePlaygroundModuleClientHud : public CGameManiaAppPlaygroundCommon {
  void ToggleStore(); // Maniascript
  void ToggleInventory(); // Maniascript
};

struct CGamePlaygroundModuleServer : public CMwNod {
  void Hide(); // Maniascript
  void Hide2(CGamePlaygroundUIConfig* UIConfig); // Maniascript
  void Show(); // Maniascript
  void Show2(CGamePlaygroundUIConfig* UIConfig); // Maniascript
  bool IsVisible(CGamePlaygroundUIConfig* UIConfig); // Maniascript
};

struct CGameMasterServerOnlineSignalTask_GetPlayerOnlineSignals : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_OnlineSignals : public CWebServicesTaskResult {
};

struct CGameScriptHandlerTitleModuleMenu : public CGameManiaAppTitleLayerScriptHandler {
  const MwBuffer<CGameModuleMenuComponent*> Components; // Maniascript
  CGameModuleMenuComponent* GetFirstComponent(string Name); // Maniascript
};

struct CGameEditorAnimChar : public CMwNod {
  bool DbgDrawJointCurves;
  bool DbgIKs;
  bool DbgTestIK;
  float DbgIKTolerance;
  int DbgJoint;
  int DbgSkel;
  bool DrawBoneInfos;
  bool DrawRefBox;
  bool Collisions;
  bool DrawJointWeights;
  uint IKChainLength;
};

struct CGameScriptHandlerPlaygroundModuleInventory : public CGameManialinkScriptHandler {
  const MwBuffer<CGameModuleInventoryCategory*> InventoryContent; // Maniascript
  void Quit(); // Maniascript
  void DropSelectedSlot(); // Maniascript
  void EquipSelectedSlot(); // Maniascript
  void ClearSlotSelection(); // Maniascript
  void SetCategory(uint CategoryIndex); // Maniascript
  void SelectSlot(uint SlotIndex); // Maniascript
};

struct CGameModuleInventoryCategory : public CMwNod {
  const string Name; // Maniascript
  const string Description; // Maniascript
  const uint ItemClass; // Maniascript
  const wstring IconUrl; // Maniascript
  const MwBuffer<CGameModuleScriptItem*> SlotsItems; // Maniascript
  const MwBuffer<uint> SlotsItemsQuantity; // Maniascript
};

struct CGameModuleScriptItem : public CMwNod {
  const wstring Url; // Maniascript
  const string IconUrl; // Maniascript
  const string Name; // Maniascript
  const string Description; // Maniascript
  const uint Occupation; // Maniascript
  void IsItem(); // Maniascript
  void HasAction(); // Maniascript
};

struct CGameMasterServerTask_SetBuddies : public CNetMasterServerRequestTask {
};

struct CGameCtnMasterServerTask_GetRealLeaderBoard : public CNetMasterServerRequestTask {
};

struct CGameCtnMasterServerTask_UploadPlayerRecord : public CNetMasterServerRequestTask {
};

struct CGameScoreTask_SetNewMapRecord : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Timestamp : public CWebServicesTaskResult {
};

// Description: "An playground Store module."
struct CGamePlaygroundModuleServerStore : public CGamePlaygroundModuleServer {
  void Reset(); // Maniascript
  void Reset2(CGameScriptPlayer* Player); // Maniascript
  void SetMoney(CGameScriptPlayer* Player, uint Amount); // Maniascript
  uint GetMoney(CGameScriptPlayer* Player); // Maniascript
  bool AddMoney(CGameScriptPlayer* Player, uint Amount); // Maniascript
  bool SubMoney(CGameScriptPlayer* Player, uint Amount); // Maniascript
  void SetActionLevel(CGameScriptPlayer* Player, wstring ActionUrl, uint ActionLevel); // Maniascript
  uint GetActionLevel(CGameScriptPlayer* Player, wstring ActionUrl); // Maniascript
  bool SetPlayerData(CGameScriptPlayer* Player, string Data); // Maniascript
  string GetPlayerData(CGameScriptPlayer* Player); // Maniascript
  void SetItemCanBeBought(CGameScriptPlayer* Player, wstring ActionUrl, bool CanBeBought); // Maniascript
  bool GetItemCanBeBought(CGameScriptPlayer* Player, wstring ActionUrl); // Maniascript
  MwBuffer<wstring>& Hack_GetAllItemsUrls(); // Maniascript
};

struct CGamePlaygroundModuleServerHud : public CMwNod {
  CGamePlaygroundModuleServerInventory* Inventory; // Maniascript
  CGamePlaygroundModuleServerStore* Store; // Maniascript
  CGamePlaygroundModuleServerScoresTable* ScoresTable; // Maniascript
  CGamePlaygroundModuleServerChrono* Chrono; // Maniascript
  CGamePlaygroundModuleServerSpeedMeter* SpeedMeter; // Maniascript
  CGamePlaygroundModuleServerPlayerState* PlayerState; // Maniascript
  CGamePlaygroundModuleServerTeamState* TeamState; // Maniascript
  const MwBuffer<CGamePlaygroundModuleServer*> Modules; // Maniascript
  void SwitchContext(CGameScriptPlayer* Player, string ContextName); // Maniascript
  void SetDefaultContext(CGameScriptPlayer* Player); // Maniascript
  MwId RetrieveModuleId(string ModuleName); // Maniascript
};

struct CGamePlaygroundModuleManagerServer : public CMwNod {
};

struct CGamePlaygroundModuleServerInventory : public CGamePlaygroundModuleServer {
  uint AddItem(CGameScriptPlayer* Player, wstring Url, uint Quantity); // Maniascript
  bool AddAction(CGameScriptPlayer* Player, wstring Url); // Maniascript
  uint RemoveInventoryItem(CGameScriptPlayer* Player, wstring Url, uint Quantity); // Maniascript
  uint GetInventoryItemQuantity(CGameScriptPlayer* Player, wstring Url); // Maniascript
  bool IsInventoryItemStored(CGameScriptPlayer* Player, wstring Url); // Maniascript
  MwBuffer<wstring>& GetStoredItemsList(CGameScriptPlayer* Player); // Maniascript
  MwBuffer<wstring>& GetStoredActionsList(CGameScriptPlayer* Player); // Maniascript
};

struct CGamePlaygroundModuleServerScoresTable : public CGamePlaygroundModuleServer {
  enum class EColumnType {
    CustomString = 0,
    CustomNatural = 1,
    CustomInteger = 2,
    CustomReal = 3,
    CustomTime = 4,
    Avatar = 5,
    Name = 6,
    ManiaStars = 7,
    Tools = 8,
    Tags = 9,
    TMBestTime = 10,
    TMPrevTime = 11,
    TMBestLapTime = 12,
    TMStunts = 13,
    TMRespawns = 14,
    TMCheckpoints = 15,
    TMPoints = 16,
    TMPrevRaceDeltaPoints = 17,
    SMPoints = 18,
    SMRoundPoints = 19,
  };
  enum class EScoreSortOrder {
    Default = 0,
    Name = 1,
    LadderRanking = 2,
    TMPoints = 3,
    TMBestTime = 4,
    TMStunts = 5,
    TMRespawns = 6,
    TMCheckpoints = 7,
    TMPrevTime = 8,
    SMPoints = 9,
    SMRoundPoints = 10,
  };
  void SetFooterText(wstring FooterText); // Maniascript
  void ResetTargetCustomColumns(CGamePlaygroundScore* Score); // Maniascript
  void ResetCustomColumns(); // Maniascript
  void Scores_Sort(EScoreSortOrder SortOrder); // Maniascript
  void SetColumnValueString(CGamePlaygroundScore* Score, string ColumnId, string ColumnValue); // Maniascript
  void SetColumnValueInteger(CGamePlaygroundScore* Score, string ColumnId, int ColumnValue); // Maniascript
  void SetColumnValueReal(CGamePlaygroundScore* Score, string ColumnId, float ColumnValue); // Maniascript
  void SetColumnVisibility(EColumnType Type, bool Visibility); // Maniascript
  void SetCustomColumnVisibility(string ColumnId, bool Visibility); // Maniascript
  void SetColor(CGamePlaygroundScore* Score, vec3 Color); // Maniascript
  void ResetColor(CGamePlaygroundScore* Score); // Maniascript
};

struct CWebServicesTaskResult_RealLeaderBoardInfoList : public CWebServicesTaskResult {
};

// Description: "Ranking item of a leaderboard."
struct CGameRealLeaderBoardInfoScript : public CMwNod {
  const uint Rank; // Maniascript
  const MwId UserId; // Maniascript
  const string Login; // Maniascript
  const wstring DisplayName; // Maniascript
  const float Score; // Maniascript
  const wstring FileName; // Maniascript
  const string ReplayUrl; // Maniascript
};

struct CGameScoreTask_GetRealLeaderBoardPlayerList : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Ghost : public CWebServicesTaskResult {
};

struct CGameScoreTask_GetCampaignMapRecordGhost : public CWebServicesTaskSequence {
};

// Description: "Score and leaderboard manager."
struct CGameScoreAndLeaderBoardManagerScript : public CMwNod {
  enum class ELocalScoreStatus {
    None = 0,
    Loading = 1,
    NotLoaded = 2,
    Loaded = 3,
  };
  enum class EMasterServerScoreStatus {
    None = 0,
    Synchronizing = 1,
    NotSynchronized = 2,
    Synchronized = 3,
  };
  const MwBuffer<CWebServicesTaskResult*> TaskResults; // Maniascript
  void TaskResult_Release(MwId TaskId); // Maniascript
  void ReleaseTaskResult(MwId TaskId); // Maniascript
  ELocalScoreStatus ScoreStatus_GetLocalStatus(MwId UserId); // Maniascript
  EMasterServerScoreStatus ScoreStatus_GetMasterServerStatus(MwId UserId); // Maniascript
  void ReleaseGhost(MwId GhostId); // Maniascript
  CGameGhostScript* Playground_GetPlayerGhost(CGameScriptPlayer* GamePlayer); // Maniascript
  CWebServicesTaskResult* Map_SetNewRecord(MwId UserId, string MapUid, string Context, CGameGhostScript* Ghost); // Maniascript
  uint Map_GetRecord(MwId UserId, string MapUid, string Context); // Maniascript
  CWebServicesTaskResult_GhostScript* Map_GetRecordGhost(MwId UserId, string MapUid, string Context); // Maniascript
  uint Map_GetMultiAsyncLevel(MwId UserId, string MapUid, string Context); // Maniascript
  uint Map_GetMultiAsyncLevelRecord(string MapUid, string Context, uint MultiAsyncLevel); // Maniascript
  CWebServicesTaskResult_GhostScript* Map_GetMultiAsyncLevelRecordGhost(string MapUid, string Context, uint MultiAsyncLevel); // Maniascript
  uint Map_GetSkillPoints(MwId UserId, string MapUid, string Context); // Maniascript
  uint MapLeaderBoard_GetPlayerRanking(MwId UserId, string MapUid, string Context, wstring Zone); // Maniascript
  uint MapLeaderBoard_GetPlayerCount(string MapUid, string Context, wstring Zone); // Maniascript
  CWebServicesTaskResult_NaturalLeaderBoardInfoListScript* MapLeaderBoard_GetPlayerList(MwId UserId, string MapUid, string Context, wstring Zone, uint FromIndex, uint Count); // Maniascript
  uint Campaign_GetMultiAsyncLevel(MwId UserId, string CampaignId); // Maniascript
  uint Campaign_GetMultiAsyncLevelCount(MwId UserId, string CampaignId, uint MultiAsyncLevel); // Maniascript
  uint Campaign_GetSkillPoints(MwId UserId, string CampaignId); // Maniascript
  CWebServicesTaskResult_MapRecordListScript* Campaign_GetOpponentRecords(MwId UserId, string CampaignId, string OpponentLogin); // Maniascript
  CWebServicesTaskResult_BuddiesChallengeRecord* Campaign_GetBuddiesMapRecord(MwId UserId, string CampaignId, string MapUid); // Maniascript
  bool Campaign_IsBuddiesMapRecordDirty(MwId UserId, string CampaignId, string MapUid); // Maniascript
  CWebServicesTaskResult_BuddiesChallengeRecordsComparison* Campaign_GetBuddiesMapRecordsComparison(MwId UserId, string CampaignId); // Maniascript
  CWebServicesTaskResult_BuddyChallengeRecordsComparison* Campaign_GetBuddyMapRecordsComparison(MwId UserId, string OpponentLogin, string CampaignId); // Maniascript
  uint CampaignLeaderBoard_GetPlayerRanking(MwId UserId, string CampaignId, wstring Zone, bool UseSkillPoints); // Maniascript
  uint CampaignLeaderBoard_GetPlayerCount(string CampaignId, wstring Zone, bool UseSkillPoints); // Maniascript
  CWebServicesTaskResult_NaturalLeaderBoardInfoListScript* CampaignLeaderBoard_GetPlayerList(MwId UserId, string CampaignId, wstring Zone, bool UseSkillPoints, uint FromIndex, uint Count); // Maniascript
  void Multiplayer_AddToScore(MwId UserId, float ScoreDiff, uint Timestamp); // Maniascript
  uint MultiplayerLeaderBoard_GetPlayerRanking(MwId UserId, wstring Zone); // Maniascript
  uint MultiplayerLeaderBoard_GetPlayerCount(wstring Zone); // Maniascript
  uint GlobalLeaderBoard_GetPlayerRanking(MwId UserId, wstring Zone); // Maniascript
  uint GlobalLeaderBoard_GetPlayerCount(wstring Zone); // Maniascript
  CWebServicesTaskResult_RealLeaderBoardInfoListScript* GlobalLeaderBoard_GetPlayerList(MwId UserId, wstring Zone, uint FromIndex, uint Count); // Maniascript
};

struct CGameCtnMasterServerTask_GetDisplayNameScript : public CWebServicesTaskSequence {
};

// Description: "Results of task requesting the display name of registered login."
struct CWebServicesTaskResult_GetDisplayNameScriptResult : public CWebServicesTaskResult {
  void AddLogin(string Login); // Maniascript
  void StartTask(); // Maniascript
  wstring GetDisplayName(string Login); // Maniascript
};

struct CGameEditorTimeLine : public CMwNod {
  const uint Time;
  void TimeStop();
  void TimeSlowForward();
  void TimeNormalForward();
  void TimeFirstFrame();
  void TimeLastFrame();
  void TimePlayStop();
  void TimeLineShowFull();
  void KeyInsert();
  void KeyRemove();
  void KeysSelectAll();
  void KeyPrev();
  void KeyNext();
  void Copy();
  void KeyCut();
  void Paste();
  void TimeLineNext();
  void TimeLinePrev();
  void KeysRemoveAll();
};

struct CGameEditorAnimChar_Interface : public CMwNod {
  CScene2d* const Scene2d;
  float EntryParamTransitionDuration;
  const float Duration;
};

struct CGameMasterServerOnlineSignalTask_NotifyBuddiesAboutNewOnlineSignals : public CWebServicesTaskSequence {
};

struct CGameMasterServerUserOnlineSignals : public CMwNod {
  const MwId Id; // Maniascript
  const MwBuffer<CGameMasterServerOnlineSignal*> OnlineSignals; // Maniascript
  void RemoveOnlineSignal(uint OnlineId); // Maniascript
};

struct CGameEditorAnimSet : public CGameEditorBase {
  CGameAnimSet* const AnimSet;
};

struct CGameAnimClipNod : public CMwNod {
  CGameAnimClipNod();

};

struct CGameUserPrivilegeTask_CheckPlayMultiplayerMode : public CWebServicesTaskSequence {
};

// Description: "Achievement stat."
struct CGameAchievementScriptStatDesc : public CMwNod {
  const string TitleId; // Maniascript
  const wstring DisplayName; // Maniascript
  const wstring Description; // Maniascript
};

// Description: "An achievement's description."
struct CGameAchievementScriptAchievementDesc : public CMwNod {
  const string TitleId; // Maniascript
  const wstring DisplayName; // Maniascript
  const wstring Description; // Maniascript
  const wstring IconUrl; // Maniascript
};

struct CGameEditorVehicle : public CGameEditorParent {
};

struct CGameEditorParent : public CGameSwitcherModule {
  CGameScene* const GameScene;
  CGameCamera* const GameCamera;
  CGameEditorPluginAPI* const PluginAPI;
};

// Description: "Results containing a list of child zones of a specified zone."
struct CWebServicesTaskResult_ZoneList : public CWebServicesTaskResult {
  const wstring Path; // Maniascript
  const uint ZoneCount; // Maniascript
  const MwBuffer<CGameLeagueScript*> Zones; // Maniascript
};

struct CGameCtnMasterServerTask_ZoneGetChilds : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_GetLeagues : public CNetMasterServerRequestTask {
};

struct CGameLeagueScript : public CMwNod {
  const wstring Name; // Maniascript
  const wstring Path; // Maniascript
  const wstring FullPath; // Maniascript
  const string FlagUrl; // Maniascript
};

struct CGameMasterServerTask_Connect : public CNetMasterServerTask_Connect {
};

// Description: "Uplay action."
struct CGameAchievementScriptUplayAction : public CMwNod {
  const string ActionId; // Maniascript
  const wstring Name; // Maniascript
  const wstring Description; // Maniascript
  const uint Value; // Maniascript
};

// Description: "Online presence"
struct CGameMasterServerPlayerOnlinePresence : public CMwNod {
  const string Login; // Maniascript
  const wstring DisplayName; // Maniascript
  const string ServerLogin; // Maniascript
  const bool IsOnline; // Maniascript
};

struct CWebServicesTaskResult_OnlinePresenceList : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetOnlinePresenceForPlayers : public CNetMasterServerRequestTask {
};

// Description: "Results of task requesting the list of servers where the logins are playing."
struct CGameMasterServerRichPresenceTaskResult_GetOnlinePresenceForPlayersScript : public CGameMasterServerRichPresenceTaskResult_PlayerOnlinePresenceList {
  const MwBuffer<CGameMasterServerPlayerOnlinePresence*> OnlinePresences; // Maniascript
  void AddLogin(string Login); // Maniascript
  void StartTask(); // Maniascript
};

struct CGameMasterServerRichPresenceManager : public CMwNod {
};

struct CGameMasterServerRichPresenceTask_UpdatePresence : public CWebServicesTaskSequence {
};

// Description: "User privileges manager."
struct CGameUserPrivilegesManagerScript : public CMwNod {
  enum class EPrivilege {
    PlayMultiplayerMode = 0,
    PlayMultiplayerSession = 1,
    UploadUserCreatedContent = 2,
    ViewOnlinePresence = 3,
    ViewUserCreatedContent = 4,
    ViewUserCreatedContentRequired = 5,
    ViewUserGameHistory = 6,
    VoiceChat = 7,
    PlayMultiplayerAsync = 8,
    DownloadUserCreatedContent = 9,
  };
  const MwBuffer<CWebServicesTaskResult*> TaskResults; // Maniascript
  void ReleaseTaskResult(MwId TaskId); // Maniascript
  CWebServicesTaskResult* CheckPrivilege(MwId UserId, EPrivilege Privilege); // Maniascript
  CWebServicesTaskResult* CheckPrivilegeForAllUsers(EPrivilege Privilege); // Maniascript
  CWebServicesTaskResult_CheckTargetedPrivilegeResultScript* CheckTargetedPrivilege(MwId UserId, EPrivilege Privilege); // Maniascript
  CWebServicesTaskResult_CheckTargetedPrivilegeResultScript* CheckTargetedPrivilegeForAllUsers(EPrivilege Privilege); // Maniascript
};

struct CGameUserPrivilegeTask_CheckUploadUserCreatedContent : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_CheckTargetedPrivilegeResult : public CWebServicesTaskResult {
};

struct CGameUserPrivilegeTask_CheckViewOnlinePresence : public CWebServicesTaskSequence {
};

// Description: "Results of task requesting if the registered login have a privilege."
struct CWebServicesTaskResult_CheckTargetedPrivilegeResultScript : public CWebServicesTaskResult_CheckTargetedPrivilegeResult {
  void AddLogin(string Login); // Maniascript
  void StartTask(); // Maniascript
  bool HasPrivilege(string Login); // Maniascript
  wstring GetDenyReason(string Login); // Maniascript
};

struct CGameUserPrivilegeTask_CheckTargetedViewUserCreatedContent : public CWebServicesTaskSequence {
};

struct CGameMasterServerRichPresenceTask_GetOnlinePresence : public CWebServicesTaskSequence {
};

struct CGameMasterServerRichPresenceTaskResult_PlayerOnlinePresenceList : public CWebServicesTaskResult {
};

struct CGameMasterServerRichPresenceManagerScript : public CMwNod {
  enum class ERichPresence {
    Undefined = 0,
    MainMenu = 1,
    Solo = 2,
    Multi = 3,
    Party = 4,
    Create = 5,
  };
  const MwBuffer<CWebServicesTaskResult*> TaskResults; // Maniascript
  void ReleaseTaskResult(MwId TaskId); // Maniascript
  void SetPresence(MwId UserId, ERichPresence UplayFlow); // Maniascript
  CGameMasterServerRichPresenceTaskResult_GetOnlinePresenceForPlayersScript* GetOnlinePresenceForPlayers(MwId UserId); // Maniascript
};

struct CGameUserPrivilegeTask_CheckViewUserCreatedContent : public CWebServicesTaskSequence {
};

struct CGameManagerBadgeScript : public CMwNod {
  const MwBuffer<CGameBadgeScript*> Badges; // Maniascript
  CGameBadgeScript* BadgeCreate(); // Maniascript
  void BadgeDestroy(CGameBadgeScript* Badge); // Maniascript
  void BadgeCopy(CGameBadgeScript* Source, CGameBadgeScript* Destination); // Maniascript
  void BadgeReadFromProfile(CGameBadgeScript* Badge, MwId UserId); // Maniascript
  void BadgeWriteToProfile(CGameBadgeScript* Badge, MwId UserId); // Maniascript
  bool ProfileIsReady(MwId UserId); // Maniascript
};

struct CGameUserPrivilegeTask_CheckPlayMultiplayerSession : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_BuyFullGame : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckVoiceChat : public CWebServicesTaskSequence {
};

struct CGameNetFormVoiceChat : public CGameNetForm {
  CGameNetFormVoiceChat();

};

struct CGameMasterServerTask_ChangeZone : public CNetMasterServerRequestTask {
};

struct CGameUserPrivilegeTask_CheckPlayMultiplayerAsync : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_LaunchUplay : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckDownloadUserCreatedContent : public CWebServicesTaskSequence {
};

struct CGameScoreTask_UploadNewMapRecord : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckTargetedViewUserGameHistory : public CWebServicesTaskSequence {
};

struct CGameScoreTask_BuddiesChallengeRecordsComparison : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_ChallengeRecordsComparisonSummaries : public CWebServicesTaskResult {
};

// Description: "Results of task launching Uplay and completing action at registration."
struct CWebServicesTaskResult_LaunchUplayScriptResult : public CWebServicesTaskResult {
  void AddActionToComplete(string ActionId); // Maniascript
  void StartTask(); // Maniascript
};

struct CGameUserPrivilegeTask_CheckTargetedViewUserCreatedContentForAllUsers : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckPrivilegeForAllUsers : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_ChallengeRecords_GetBuddiesRecord : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_ChallengeRecords_BuddiesRecord : public CWebServicesTaskResult {
};

struct CGameScoreTask_BuddiesChallengeRecordsForMap : public CWebServicesTaskSequence {
};

// Description: "List of all buddies record for a map."
struct CWebServicesTaskResult_BuddiesChallengeRecord : public CWebServicesTaskResult {
  const string Login; // Maniascript
  const MwBuffer<CGameHighScoreComparison*> BuddiesChallengeRecord; // Maniascript
  void SortByOpponentCount(); // Maniascript
  void SortByOpponentDisplayName(); // Maniascript
  void SortByOpponentLogin(); // Maniascript
  void SortByOpponentRecordDate(); // Maniascript
  void SortByOpponentRecordTime(); // Maniascript
};

struct CGameScoreTask_BuddyChallengeRecordsComparison : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_ChallengeRecords_BuddyRecordComparison : public CWebServicesTaskResult {
};

struct CGameCtnMediaBlockCheatEmptyCars : public CGameCtnMediaBlock {
  CGameCtnMediaBlockCheatEmptyCars();

};

struct CGameModuleScriptStoreItem : public CGameModuleScriptItem {
  const string StoreName; // Maniascript
  const string StoreDesc; // Maniascript
  const uint CurrentLevel; // Maniascript
  const MwBuffer<uint> Prices; // Maniascript
};

struct CGameModuleScriptStoreCategory : public CMwNod {
  const string Name; // Maniascript
  const MwBuffer<CGameModuleScriptStoreItem*> Items; // Maniascript
};

struct CGameMgrMap : public CMwNod {
};

struct CWebServicesTaskResult_NaturalLeaderBoardSummaries : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetNaturalLeaderBoardSummaries : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_RealLeaderBoardSummaries : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetRealLeaderBoardSummaries : public CNetMasterServerRequestTask {
};

struct CGameEditorMainPlugin : public CGameEditorPlugin {
  enum class EMeshEditorAPI {
    Materials = 0,
    Interactions = 1,
    Display = 2,
    Global = 3,
    Sets = 4,
    Voxel = 5,
    PickInfo = 6,
    UndoRedo = 7,
  };
  void Help_Open(); // Maniascript
  void Help_Close(); // Maniascript
  CGameEditorPluginHandle* GetPluginHandle(string Name); // Maniascript
  void SendPluginEvent(CGameEditorPluginHandle* Handle, wstring Type, MwBuffer<wstring>& Data); // Maniascript
  void Context_SetActive(wstring ContextName, bool IsActive); // Maniascript
  bool Context_IsActive(wstring ContextName); // Maniascript
  bool Binding_IsActive(wstring BindingName); // Maniascript
  bool Binding_IsActiveInContext(wstring ContextName, wstring BindingName); // Maniascript
  void Plugin_SetClearance_MeshEditor(CGameEditorPluginHandle* Handle, EMeshEditorAPI API, bool IsAllowed); // Maniascript
  const MwBuffer<CGameEditorPluginHandle*> Plugins; // Maniascript
};

struct CGameMgrConstraintPhy : public CSceneMgrPhy {
};

// Description: "UIConfig Event"
struct CGamePlaygroundUIConfigEvent : public CScriptBaseEvent {
  enum class EType {
    Unknown = 0,
    OnModuleCustomEvent = 1,
    OnModuleShowRequest = 2,
    OnModuleHideRequest = 3,
    OnModuleStorePurchase = 4,
    OnModuleInventoryDrop = 5,
    OnModuleInventoryEquip = 6,
    OnLayerCustomEvent = 7,
  };
  enum class EModuleType {
    Undefined = 0,
    Hud = 1,
    Inventory = 2,
    Store = 3,
    ScoresTable = 4,
    Equipment = 5,
    MenuBase = 6,
    MenuPage = 7,
    Chrono = 8,
    SpeedMeter = 9,
    PlayerState = 10,
    TeamState = 11,
  };
  const EType Type; // Maniascript
  CGamePlaygroundUIConfig* const UI; // Maniascript
  CGamePlaygroundUIConfig* const UIConfig; // Maniascript
  const EModuleType ModuleType; // Maniascript
  const wstring Param1; // Maniascript
  const MwBuffer<wstring> Param2; // Maniascript
  CGameUILayer* const CustomEventLayer; // Maniascript
  const wstring CustomEventType; // Maniascript
  const MwBuffer<wstring> CustomEventData; // Maniascript
  const wstring ItemUrl; // Maniascript
  const uint Quantity; // Maniascript
};

struct CGameMgrShieldPhy : public CSceneMgrPhy {
};

struct CGameMgrShieldVis : public CSceneMgrVis {
  CSceneMgrParticle* const MgrParticle;
  const MwBuffer<CPlugShieldModel*> ShieldModels;
};

// Description: "Script API to create Packs (can be Titlepacks or plain ManiaCredited data), and generate new builds of these packs."
struct CGamePackCreatorScript : public CMwNod {
  void RegisterPackForEditedTitle(); // Maniascript
  const bool RegisterPack_IsInProgess; // Maniascript
  CGamePackCreator_PackScript* const CurrentPack; // Maniascript
  MwId Build_Begin(CGamePackCreator_PackScript* Pack, CGamePackCreator_TitleInfoScript* TitleInfo); // Maniascript
  void Build_AddFile(MwId BuildId, wstring FileName); // Maniascript
  void Build_AddFolder(MwId BuildId, wstring FolderName); // Maniascript
  void Build_AddFile_Ex(MwId BuildId, wstring FileName, bool IsPublic, bool IsInternal, bool NoAutomaticDeps); // Maniascript
  void Build_AddFolder_Ex(MwId BuildId, wstring FolderName, bool IsPublic, bool IsInternal, bool NoRecursion, bool NoAutomaticDeps); // Maniascript
  void Build_Generate(MwId BuildId, bool Upload); // Maniascript
  bool Build_IsGenerated(MwId BuildId); // Maniascript
  wstring Build_ErrorMessage(MwId BuildId); // Maniascript
  void Build_End(MwId BuildId); // Maniascript
};

// Description: "A pack"
struct CGamePackCreator_PackScript : public CMwNod {
  const MwId PackId; // Maniascript
  const MwId CreatorId; // Maniascript
  const bool IsTitlePack; // Maniascript
  void Recipients_Add(string Login, uint UseCost, uint GetCost); // Maniascript
  void Recipients_Remove(string Login); // Maniascript
  const MwBuffer<CGamePackCreator_RecipientScript*> Recipients; // Maniascript
};

// Description: "Script API to create Pack files (can be Titlepack or plain ManiaCredited data)."
struct CGamePackCreator_TitleInfoScript : public CMwNod {
  const MwId TitleId; // Maniascript
  const MwId MakerTitleId; // Maniascript
  wstring DisplayName; // Maniascript
  wstring Description; // Maniascript
  string InfoUrl; // Maniascript
  string DownloadUrl; // Maniascript
  string TitleVersion; // Maniascript
  string AllowedClientTitleVersion; // Maniascript
  string BaseTitleIds; // Maniascript
  wstring ForcedPlayerModel; // Maniascript
  wstring Packaging_ImageFileName; // Maniascript
  wstring Packaging_LogosFileName; // Maniascript
  wstring Packaging_Group; // Maniascript
  string Station_ManialinkUrl; // Maniascript
  wstring Menus_BgReplayFileName; // Maniascript
  string Menus_ManiaAppFileName; // Maniascript
  wstring Menus_MusicFileName; // Maniascript
  const bool Solo_HasCampaign; // Maniascript
  wstring Hud3dFontFileName; // Maniascript
  wstring HudDefaultModuleScriptName; // Maniascript
  wstring MusicFolder; // Maniascript
};

// Description: "A recipient included in the bill for a Pack."
struct CGamePackCreator_RecipientScript : public CMwNod {
  const string Login; // Maniascript
  const uint GetCost; // Maniascript
  const uint UseCost; // Maniascript
};

// File extension: 'DecorationMaterialModifiers.Gbx'
struct CGameCtnDecorationMaterialModifiers : public CMwNod {
  CGameCtnDecorationMaterialModifiers();

  CGameCtnDecorationTerrainModifier* LowHeightMaterialModifier;
  MwBuffer<float> Rules_MinHeights;
  MwBuffer<CGameCtnDecorationTerrainModifier*> Rules_MaterialModifiers;
};

struct CGameModuleMenuPage : public CMwNod {
  const wstring Name; // Maniascript
  const MwBuffer<CGameModuleMenuComponent*> Components; // Maniascript
};

// Description: "API for editor plugins."
struct CGameEditorPlugin : public CGameManiaApp {
  enum class EInteractionStatus {
    Active = 0,
    Closed = 1,
    Aborted = 2,
  };
  const MwBuffer<CGameManiaAppScriptEvent*> PendingEvents; // Maniascript
  CGameEditorModule* const ModuleEditor; // Maniascript
  CGameEditorMesh* const MeshEditor; // Maniascript
  CGameEditorEditor* const EditorEditor; // Maniascript
  const EInteractionStatus InteractionStatus; // Maniascript
};

struct CGameManialinkAnimManager : public CMwNod {
  enum class EAnimManagerEasing {
    Linear = 0,
    QuadIn = 1,
    QuadOut = 2,
    QuadInOut = 3,
    CubicIn = 4,
    CubicOut = 5,
    CubicInOut = 6,
    QuartIn = 7,
    QuartOut = 8,
    QuartInOut = 9,
    QuintIn = 10,
    QuintOut = 11,
    QuintInOut = 12,
    SineIn = 13,
    SineOut = 14,
    SineInOut = 15,
    ExpIn = 16,
    ExpOut = 17,
    ExpInOut = 18,
    CircIn = 19,
    CircOut = 20,
    CircInOut = 21,
    BackIn = 22,
    BackOut = 23,
    BackInOut = 24,
    ElasticIn = 25,
    ElasticOut = 26,
    ElasticInOut = 27,
    ElasticIn2 = 28,
    ElasticOut2 = 29,
    ElasticInOut2 = 30,
    BounceIn = 31,
    BounceOut = 32,
    BounceInOut = 33,
  };
  void AddFromXml(CGameManialinkControl* Control, string XmlTarget, uint StartTime, uint Duration, EAnimManagerEasing EasingFunc); // Maniascript
  void AddChainFromXml(CGameManialinkControl* Control, string XmlTarget, uint Duration, EAnimManagerEasing EasingFunc); // Maniascript
  void FlushAndAddFromXml(CGameManialinkControl* Control, string XmlTarget, uint Duration, EAnimManagerEasing EasingFunc); // Maniascript
  void Flush(CGameManialinkControl* Control); // Maniascript
};

struct CGameEditorEditor : public CGameCtnEditor {
  CControlFrame* const UIRoot;
  CMwNod* const EditedNod;
  CGameEditorModel* const EditedEditor;
  void FlushBindings();
  void Bindings_AddContext(wstring ContextName); // Maniascript
  void Bindings_AddBinding(wstring ContextName, wstring BindingScriptId, wstring BindingDisplayName); // Maniascript
  void Bindings_RemoveContext(wstring ContextName); // Maniascript
  void Bindings_RemoveBinding(wstring ContextName, wstring BindingName); // Maniascript
  void Bindings_RequestInput(wstring ContextName, wstring BindingName); // Maniascript
  const bool Bindings_RequestInput_Done; // Maniascript
  void Bindings_SetBindingScriptId(wstring ContextName, wstring BindingScriptId, wstring NewBindingScriptId); // Maniascript
  void Bindings_SetBindingDisplayName(wstring ContextName, wstring BindingScriptId, wstring BindingDisplayName); // Maniascript
  void Bindings_SetContextName(wstring ContextName, wstring NewContextName); // Maniascript
  const MwBuffer<wstring> BindingContexts; // Maniascript
  void Bindings_GetContextBindings(wstring ContextName); // Maniascript
  const MwBuffer<wstring> RequestedContextBindings; // Maniascript
  wstring Bindings_GetBindingActionName(wstring ContextName, wstring BindingName); // Maniascript
  wstring Bindings_GetBindingDisplayName(wstring ContextName, wstring BindingName); // Maniascript
  const MwBuffer<CGameEditorEvent*> PendingEvents; // Maniascript
};

struct CGameControlCameraHmdExternal : public CGameControlCameraTarget {
  CGameControlCameraHmdExternal();

};

struct CGameMgrCamera : public CSceneMgrVis {
  CGameMgrCamera();

  MwBuffer<CGameCameraSystem*> CamSystems;
};

struct CGameCampaignScoreManager_SkillPoint : public CGameCampaignScoreManager {
};

// Description: "A chat room."
struct CGameScriptChatRoom : public CMwNod {
  const string RoomId; // Maniascript
  const MwBuffer<CGameScriptChatContact*> Members; // Maniascript
};

struct CGameMgrWaypoint : public CMwNod {
};

struct CGameWaypoint {
};

// userName: 'ObjectItem'
struct CGameObjectItem {
};

struct CGameGatePhy {
};

struct CGameTriggerGate : public CMwNod {
};

struct CGameTriggerTeleport : public CMwNod {
};

struct CGameShield : public CMwNod {
};

struct CGameTriggerScreen : public CMwNod {
};

// Description: "A filtered history"
struct CGameScriptChatHistory : public CMwNod {
  wstring Filter; // Maniascript
  const bool Filter_IsValid; // Maniascript
  const MwBuffer<CGameScriptChatHistoryEntry*> Entries; // Maniascript
};

// Description: "An message from the history."
struct CGameScriptChatHistoryEntry : public CMwNod {
  enum class EDirection {
    Sent = 0,
    Recieved = 1,
  };
  const EDirection Direction; // Maniascript
  const bool InRoom; // Maniascript
  const wstring Date; // Maniascript
  const MwBuffer<CGameScriptChatHistoryEntryMessage*> Messages; // Maniascript
  const wstring SenderNickname; // Maniascript
  const string SenderAvatarUrl; // Maniascript
  const wstring Nickname; // Maniascript
  const string AvatarUrl; // Maniascript
};

struct CGameEditorCanvas : public CMwNod {
  CGameEditorCanvas();

  MwId Layer_Create(); // Maniascript
  void Layer_Destroy(MwId Handle); // Maniascript
  void Layer_Rename(MwId Handle, string Name); // Maniascript
  string Layer_GetName(MwId Handle); // Maniascript
  void Layer_SetSelected(MwId Handle); // Maniascript
  MwId Layer_GetSelectedLayer(); // Maniascript
  void Layer_SwapLayersPriorities(MwId Handle1, MwId Handle2); // Maniascript
  void Layer_IncreasePriority(MwId Handle); // Maniascript
  void Layer_DecreasePriority(MwId Handle); // Maniascript
  MwBuffer<MwId>& Layer_GetLayers(); // Maniascript
  void Layer_SetVisibility(MwId Handle, bool Visible); // Maniascript
  bool Layer_IsVisible(MwId Handle); // Maniascript
};

struct CGameEditorPluginMapManager : public CMwNod {
  const MwBuffer<CGameEditorPluginMap*> ActivePluginsCache;
};

// Description: "API for the mesh modeler."
struct CGameEditorMesh : public CGameEditorAsset {
  enum class EEdgesDisplay {
    Any = 0,
    Borders = 1,
    None = 2,
  };
  enum class EEdgesConstraint {
    Any = 0,
    Adjacent = 1,
    Closed = 2,
  };
  enum class EElemType {
    Vertex = 0,
    Edge = 1,
    Face = 2,
    Any = 3,
  };
  enum class EInteraction {
    Creation = 0,
    Pick = 1,
    PickJoint = 2,
    VoxelPickDrag_Base = 3,
    VoxelPickDrag_Creation = 4,
    VoxelPickDrag_Delete = 5,
    VoxelPickDrag_Select = 6,
    VoxelPickDrag_Pick = 7,
    VoxelPickDrag_SelectTranslation = 8,
    VoxelPickDrag_SelectRotation = 9,
    VoxelPickDrag_Paste = 10,
    Selection = 11,
    Translation = 12,
    PickTranslation = 13,
    ExtrudeTranslation = 14,
    Rotation = 15,
    PickRotation = 16,
    Scale = 17,
    Curve2D = 18,
    Merge = 19,
    Split = 20,
    Mirror = 21,
    Paste = 22,
    PasteMaterial = 23,
    BlocTransformation = 24,
    None = 25,
  };
  enum class ETexCoordLayer {
    Lightmap = 0,
  };
  enum class EMaterialFilterCriterion {
    IsAutomatic = 0,
    IsBadForHorizontalFaces = 1,
    IsBadForVerticalFaces = 2,
  };
  enum class EFilterKind {
    NoFilter = 0,
    PassIfMatches = 1,
    CutIfMatches = 2,
  };
  enum class EUVEditorMode {
    UV = 0,
    Atlas_ApplyOnClic = 1,
    Atlas_SelectOnClic = 2,
  };
  enum class EUVEditorProjectionType {
    Planar = 0,
    Curve2D = 1,
    Cylindrical2D = 2,
    Cubic = 3,
    Polyedric = 4,
    Cylindrical = 5,
    ApplyOnlyMaterial = 6,
  };
  enum class ELayerType {
    AddGeometry = 0,
    SubdivideSmooth = 1,
    Translation = 2,
    Rotation = 3,
    Scale = 4,
    Mirror = 5,
    MoveToGround = 6,
    Extrude = 7,
    Subdivide = 8,
    Chaos = 9,
    Smooth = 10,
    BorderTransition = 11,
    BlocTransfo = 12,
    Voxels = 13,
    TriggerShape = 14,
    RespawnPos = 15,
    Sector = 16,
    None = 17,
  };
  enum class ETitleCoreType {
    TrackMania = 0,
    ShootMania = 1,
  };
  void UVEditor_UVMode();
  void UVEditor_AtlasMode();
  bool GoToMaterialEditor; // Maniascript
  bool IsCreateMaterial; // Maniascript
  uint Layers_GetCount(); // Maniascript
  MwId Layers_GetLayerIdFromIndex(uint LayerIndex); // Maniascript
  wstring Layers_GetLayerNameFromIndex(uint LayerIndex); // Maniascript
  ELayerType Layers_GetLayerTypeFromIndex(uint LayerIndex); // Maniascript
  bool Layers_GetLayerGeneratableFromIndex(uint LayerIndex); // Maniascript
  void Layers_SetLayerGeneratableFromIndex(uint LayerIndex, bool LayerGeneratability); // Maniascript
  void Layers_AddLayer(ELayerType LayerType); // Maniascript
  MwId Layers_GetLayerIdSelected(); // Maniascript
  void Layers_SetLayerIdSelected(MwId LayerId); // Maniascript
  ELayerType Layers_GetLayerSelectedType(); // Maniascript
  uint Layers_GetLayerSelectedIndex(); // Maniascript
  ELayerType Layers_GetEditedLayerType(); // Maniascript
  wstring Layers_GetLayerSelectedName(); // Maniascript
  void Layers_EditMask(uint LayerIndex); // Maniascript
  void Layers_EditMaskValidate(uint LayerIndex); // Maniascript
  void Layers_MoveSelectedLayerUp(); // Maniascript
  void Layers_MoveSelectedLayerDown(); // Maniascript
  void Layers_EditSelectedLayer(bool RegenerateSolid); // Maniascript
  void Layers_CloseEditSelectedLayer(); // Maniascript
  void Layers_DeleteSelectedLayer(); // Maniascript
  uint Transitions_GetCount(); // Maniascript
  void Transitions_AddTransition(wstring TransitionName, int TransitionPosition, float TransitionSize); // Maniascript
  void Transitions_DeleteCurrentTransition(); // Maniascript
  int Transitions_GetTransitionSelectedIndex(); // Maniascript
  void Transitions_SetTransitionSelectedIndex(int TransitionIndex); // Maniascript
  uint Transitions_GetTransitionCurrentPage(); // Maniascript
  void Transitions_SetTransitionCurrentPage(uint TransitionCurrentPage); // Maniascript
  wstring Transitions_GetTransitionNameFromIndex(int TransitionIndex); // Maniascript
  void Transitions_SetTransitionNameFromIndex(int TransitionIndex, float TransitionName); // Maniascript
  bool Transitions_GetTransitionVisibilityFromIndex(int TransitionIndex); // Maniascript
  void Transitions_SetTransitionVisibilityFromIndex(int TransitionIndex, bool TransitionVisibility); // Maniascript
  float Transitions_GetTransitionSizeFromIndex(int TransitionIndex); // Maniascript
  void Transitions_SetTransitionSizeFromIndex(int TransitionIndex, float TransitionSize); // Maniascript
  int Transitions_GetTransitionPositionFromIndex(int TransitionIndex); // Maniascript
  void Transitions_SetTransitionPositionFromIndex(int TransitionIndex, int TransitionPosition); // Maniascript
  bool IsEditingLayer; // Maniascript
  uint SubdivideSmooth_NbSteps; // Maniascript
  float LayerValueAxisX; // Maniascript
  float LayerValueAxisY; // Maniascript
  float LayerValueAxisZ; // Maniascript
  bool LayerIndep; // Maniascript
  float LayerValueParam1; // Maniascript
  float LayerValueParam2; // Maniascript
  bool LayerIndexAxisX; // Maniascript
  bool LayerIndexAxisY; // Maniascript
  bool LayerIndexAxisZ; // Maniascript
  bool Layer_IsVisible; // Maniascript
  bool Layer_IsCollidable; // Maniascript
  wstring LayerName; // Maniascript
  bool LayerGeneratable; // Maniascript
  bool AddTransitionInProgress; // Maniascript
  wstring NewTransitionName; // Maniascript
  int NewTransitionPosition; // Maniascript
  float NewTransitionSize; // Maniascript
  uint RotateAxis; // Maniascript
  const bool Tmp_UseParts; // Maniascript
  const bool IsDebug; // Maniascript
  bool CameraEatingInputsScript; // Maniascript
  CControlFrame* const UIRoot;
  CMwNod* const EditedNod;
  CPlugMaterialUserInst* MatUserInstToEdit;
  const uint VertexCount; // Maniascript
  const uint EdgeCount; // Maniascript
  const uint FaceCount; // Maniascript
  void EditionBox_SetStep(float Step); // Maniascript
  const bool EditionBox_IsPlaneOriented; // Maniascript
  const float Scale; // Maniascript
  const float Step; // Maniascript
  const float Size; // Maniascript
  const int RotationStep; // Maniascript
  const float RotationValue; // Maniascript
  const float ScalingStep; // Maniascript
  const float ScalingRatio; // Maniascript
  bool DisplayVertices; // Maniascript
  bool DisplayFaces; // Maniascript
  bool DisplayJoints; // Maniascript
  EEdgesDisplay DisplayEdges; // Maniascript
  void EditedMesh_Clear(); // Maniascript
  void EditedMesh_Simplify(); // Maniascript
  void EditedMesh_Lod(float Faces Ratio); // Maniascript
  void UVUnwrap(MwId SetHandle, ETexCoordLayer ETexCoordLayer); // Maniascript
  void Undo(); // Maniascript
  void Redo(); // Maniascript
  void SwitchPlane(); // Maniascript
  void GridSnap_SetActive(bool IsActive); // Maniascript
  const bool GridSnap_IsActive; // Maniascript
  vec3 PickInfo_GetNormal(); // Maniascript
  vec3 PickInfo_GetPosition(); // Maniascript
  MwId PickInfo_GetAnchorId(); // Maniascript
  float PickInfo_GetEdgeLength(); // Maniascript
  vec3 PickInfo_GetNextVertexPosition(); // Maniascript
  MwId PickInfo_GetMaterial(); // Maniascript
  wstring PickInfo_GetError(); // Maniascript
  void Part_SetAnchorPos(vec3 Position); // Maniascript
  void Part_SetIsJoint(bool IsJoint); // Maniascript
  void Part_ClearAnchor(); // Maniascript
  void Joint_Add(vec3 Position); // Maniascript
  void Joint_Link(MwId IdChild, MwId IdParent); // Maniascript
  void Anchor_Remove(MwId Id); // Maniascript
  bool LoadCustomMats;
  bool IsUsingPhysicMatLib; // Maniascript
  const int MaterialsUpdateId; // Maniascript
  const MwBuffer<CPlugBitmap*> AllBitmaps; // Maniascript
  const MwBuffer<MwId> MaterialIds; // Maniascript
  const MwRefBuffer<MwId> MaterialPhysicsIds; // Maniascript
  const MwBuffer<string> MaterialNames; // Maniascript
  const MwRefBuffer<string> MaterialPhysicsNames; // Maniascript
  MwId Material_GetMaterialIdSelected(); // Maniascript
  void Material_SetMaterialIdSelected(MwId MaterialEditorId); // Maniascript
  uint Material_GetSubTexIndexSelected(); // Maniascript
  uint Material_MaterialLibGetCount(); // Maniascript
  void Material_SetDefault(MwId MaterialId); // Maniascript
  MwId Material_GetDefault(); // Maniascript
  MwId MaterialPhysic_GetDefault(); // Maniascript
  CPlugBitmap* Material_GetBitmapBase(MwId MaterialId); // Maniascript
  CPlugBitmap* Material_GetBitmap(MwId MaterialId); // Maniascript
  bool Material_MatchesCriterion(MwId MaterialId, EMaterialFilterCriterion ResultSetHandle); // Maniascript
  void Material_SetFilter(EMaterialFilterCriterion Criterion, EFilterKind FilterKind); // Maniascript
  EFilterKind Material_GetFilter(EMaterialFilterCriterion Criterion); // Maniascript
  void Material_ClearFilters(); // Maniascript
  void Material_UVEditor_SetIsRotation(bool IsRotation); // Maniascript
  void Material_UVEditor_SetIsScale(bool IsScale); // Maniascript
  void Material_UVEditor_SetIsScale1D(bool IsScale); // Maniascript
  void Material_UVEditor_Open(MwId MaterialId, CGameManialinkQuad* LocationQuad); // Maniascript
  void Material_UVEditor_Close(); // Maniascript
  bool Material_UVEditor_IsRunning(); // Maniascript
  void Material_UVEditor_SetMode(EUVEditorMode Mode); // Maniascript
  EUVEditorMode Material_UVEditor_GetMode(); // Maniascript
  void Material_UVEditor_SetProjectionType(EUVEditorProjectionType ProjectionType); // Maniascript
  bool Material_IsGameMaterial(); // Maniascript
  bool Material_IsCustomLinkFull(MwId MaterialId); // Maniascript
  void Material_UVEditor_Apply(); // Maniascript
  void Material_CopyMaterial(MwId SetHandle); // Maniascript
  void Material_PasteMaterial(MwId SetHandle); // Maniascript
  const uint Material_Atlas_SelectedSubTexIndex; // Maniascript
  const EInteraction CurrentInteraction; // Maniascript
  void Interaction_Close(); // Maniascript
  void Interaction_SetPreview(MwId SetToPreview); // Maniascript
  const uint CreationElemsCount; // Maniascript
  bool Interaction_StartCreation(MwId CreationSetHandle, EElemType ElemType, MwId SetToPickFromHandle); // Maniascript
  void Interaction_Creation_GetElems(MwId ResultSetHandle); // Maniascript
  void Interaction_Creation_ClearParams(); // Maniascript
  void Interaction_Creation_SetEdgesConstraint(EEdgesConstraint EdgesConstraint); // Maniascript
  void Interaction_Creation_SetAutoMerge(bool AutoMerge); // Maniascript
  bool Interaction_StartPaste(); // Maniascript
  bool Interaction_StartBlocTransformation(MwId TransformationSetHandle); // Maniascript
  bool Interaction_StartCurve2D(MwId BordersSetHandle); // Maniascript
  void Interaction_CloseCurve2D(bool CanDoCurve2D); // Maniascript
  bool Interaction_StartPick(EElemType ElemType, MwId SetToPickFrom); // Maniascript
  bool Interaction_StartPickJoint(); // Maniascript
  bool Interaction_StartVoxelPickDrag_Base(EElemType ElemType); // Maniascript
  bool Interaction_StartVoxelPickDrag_Creation(); // Maniascript
  bool Interaction_StartVoxelPickDrag_Delete(); // Maniascript
  bool Interaction_StartVoxelPickDrag_Select(MwId SelectionSetHandle); // Maniascript
  void Interaction_CloseVoxelPickDrag_Select(); // Maniascript
  bool Interaction_StartVoxelPickDrag_Pick(); // Maniascript
  void Interaction_CloseVoxelPickDrag_Pick(); // Maniascript
  bool Interaction_StartVoxelPickDrag_SelectTranslation(); // Maniascript
  bool Interaction_StartVoxelPickDrag_SelectRotation(); // Maniascript
  bool Interaction_StartVoxelPickDrag_Paste(); // Maniascript
  void CutVoxels(); // Maniascript
  void CopyVoxels(); // Maniascript
  bool Interaction_StartMerge(MwId MergeSetHandle); // Maniascript
  bool Interaction_StartMirror(MwId SetHandle); // Maniascript
  void Interaction_Selection_ClearParams(); // Maniascript
  void Interaction_Selection_SetUseParts(bool UseParts); // Maniascript
  void Interaction_Selection_SetCanEnterLeaf(bool CanEnterLeaf); // Maniascript
  bool Interaction_StartSelection(MwId SelectionSetHandle, EElemType ElemType, MwId SelectionSetToPickFrom, bool IsFromALayer, bool AllowDoubleClick); // Maniascript
  void Interaction_CloseSelection(); // Maniascript
  bool Interaction_StartTranslation(MwId TranslationSetHandle); // Maniascript
  bool Interaction_StartPickTranslation(MwId TranslationSetHandle); // Maniascript
  bool Interaction_StartRotation(MwId RotationSetHandle); // Maniascript
  bool Interaction_StartPickRotation(MwId RotationSetHandle); // Maniascript
  void Interaction_Rotation_SetStep(float RotationStep); // Maniascript
  bool Interaction_StartPickScale(MwId ScalingSetHandle); // Maniascript
  void Interaction_Scale_SetStep(float ScalingStep); // Maniascript
  bool Interaction_StartSplit(); // Maniascript
  void Display_HighlightSet(MwId SetHandle); // Maniascript
  void Display_ClearHighlighting(); // Maniascript
  const bool Display_HideElemsByDistance_IsActive; // Maniascript
  uint Display_HideElemsByDistance_Distance; // Maniascript
  float Display_HideElemsByDistance_Opacity; // Maniascript
  void Display_HideElemsByDistance_Start(MwId SetHandle); // Maniascript
  void Display_HideElemsByDistance_Stop(); // Maniascript
  void Display_HideMap(); // Maniascript
  void Display_ShowMap(); // Maniascript
  void MergeAllSuperposedElements(MwId SetHandle); // Maniascript
  const MwId SelectionSet; // Maniascript
  void Selection_Undo(); // Maniascript
  void Selection_Redo(); // Maniascript
  void Selection_Invert(); // Maniascript
  void Selection_SelectAllByMaterial(); // Maniascript
  MwId SetOfElements_Create(); // Maniascript
  void SetOfElements_CopyFrom(MwId DestinationSet, MwId SourceSet); // Maniascript
  void SetOfElements_Append(MwId DestinationSet, MwId SourceSet); // Maniascript
  void SetOfElements_Destroy(MwId SetHandle); // Maniascript
  void SetOfElements_Empty(MwId SetHandle); // Maniascript
  void SetOfElements_SetAllElements(MwId SetHandle); // Maniascript
  void SetOfElements_SetAllFaces(MwId SetHandle); // Maniascript
  void SetOfElements_DeleteElements(MwId SetHandle); // Maniascript
  void SetOfElements_DeleteElements_NoSpread(MwId SetHandle, bool Spread); // Maniascript
  bool SetOfElements_HasHorizontalFaces(MwId SetHandle); // Maniascript
  bool SetOfElements_HasVerticalFaces(MwId SetHandle); // Maniascript
  uint SetOfElements_GetElemsCount(MwId SetHandle); // Maniascript
  uint SetOfElements_GetVerticesCount(MwId SetHandle); // Maniascript
  uint SetOfElements_GetEdgesCount(MwId SetHandle); // Maniascript
  uint SetOfElements_GetFacesCount(MwId SetHandle); // Maniascript
  void ExtendSelectedSet(MwId SetHandle); // Maniascript
  bool GetBordersSet(MwId SetHandle, MwId SetBordersHandle); // Maniascript
  void GetBordersVertexs(MwId SetHandle, MwId SetVertexHandle); // Maniascript
  void SelectionSet_SelectAll(); // Maniascript
  void Curve2DPolygon(MwId FourVertexSetHandle, MwId Sethandle, uint SubTexIndex); // Maniascript
  void Preview_Clear(); // Maniascript
  void VoxelSpace_SetVec3(vec3 Pos); // Maniascript
  uint VoxelSpace_GetVoxelsCount(); // Maniascript
  void VoxelSpace_SelectAll(); // Maniascript
  void VoxelSpace_DeleteOneVoxel(); // Maniascript
  void VoxelSpace_DeleteSelection(); // Maniascript
  void VoxelSpace_ApplyMaterialToVoxel(); // Maniascript
  void VoxelSpace_GenerateMesh(); // Maniascript
  vec3 VoxelSpaceCenter; // Maniascript
  float VoxelSpaceStep; // Maniascript
  bool VoxelSpaceIsInteractive; // Maniascript
  void SetOfElements_ProjectOnPlane(MwId SetHandle); // Maniascript
  void SetOfElements_ProjectOnGround(MwId SetHandle, float Height); // Maniascript
  void SetOfElements_SplitEdgeWithVertex(MwId SetHandle); // Maniascript
  void SetOfElements_CollapseEdgeWithVertex(MwId SetHandle); // Maniascript
  void SetOfElements_Subdivide(MwId SetHandle); // Maniascript
  void SetOfElements_Subdivide_Interpolation(MwId SetHandle); // Maniascript
  void SetOfVertices_DrawCircle(MwId InputSetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfVertices_DrawDisc(MwId InputSetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfVertices_DrawCircle2(MwId CenterSetHandle, vec3 PointOnCircle, MwId ResultSetHandle); // Maniascript
  void SetOfVertices_DrawIcosahedron(MwId InputSetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfVertices_DrawIcosahedron2(MwId CenterSetHandle, vec3 PointOnCircle, MwId ResultSetHandle); // Maniascript
  void SetOfVertices_DrawIcosahedricSphere(MwId InputSetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfVertices_DrawPoly(MwId InputSetHandle, MwId ResultSetHandle, int VerticesCount); // Maniascript
  void SetOfVertices_DrawPoly2(MwId CenterSetHandle, vec3 PointOnPoly, MwId ResultSetHandle, int VerticesCount); // Maniascript
  void SetOfVertices_DrawSpline(MwId ControlSetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfVertices_Weld(MwId VerticesSetHandle); // Maniascript
  void SetOfVertices_DrawBox(MwId ControlSetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfEdges_Fill(MwId SetHandle); // Maniascript
  void SetOfEdges_Flip(MwId SetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfEdges_BorderExpand(MwId SetHandle); // Maniascript
  void SetOfOneEdge_FaceLoopExpand(MwId SetHandle); // Maniascript
  void SetOfOneEdge_EdgeLoopExpand(MwId SetHandle); // Maniascript
  void SetOfOneFace_CutHole(MwId FaceSetHandle, MwId EdgesSetHandle); // Maniascript
  void SetOfFaces_Extrude(MwId SetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfFaces_QuadsToTriangles(MwId SetHandle, MwId ResultSetHandle); // Maniascript
  void SetOfFaces_ApplyMaterial(MwId SetHandle, MwId MaterialId); // Maniascript
  void SetOfFaces_PlanarExpand(MwId FacesSetHandle); // Maniascript
  void SetOfFaces_ChangeOrientation(MwId FacesSetHandle); // Maniascript
  const MwBuffer<wstring> PrefabNames; // Maniascript
  const int PrefabNamesUpdateId; // Maniascript
  uint PrefabListCurrentPage; // Maniascript
  uint Prefab_TotalNb; // Maniascript
  void Prefabs_Reload(); // Maniascript
  void Prefab_Export(); // Maniascript
  void Prefab_Import(uint PrefabIndex); // Maniascript
  bool Parts_CanMergeParts(); // Maniascript
  bool Parts_CanGroupParts(); // Maniascript
  bool Parts_CanUngroupParts(); // Maniascript
  int3 Parts_GetOpsState(); // Maniascript
  void Parts_MergeSelectedParts(); // Maniascript
  void Parts_Group(); // Maniascript
  void Parts_UngroupSelectedParts(); // Maniascript
  void Cut(); // Maniascript
  void Copy(); // Maniascript
  void AddUndoState(); // Maniascript
  bool AutoSave(wstring FileName); // Maniascript
  const MwBuffer<CGameEditorEvent*> PendingEvents; // Maniascript
  bool MustClearLastSaveBuffer; // Maniascript
  const bool IsExperimental; // Maniascript
  ETitleCoreType GetTitleCoreType(); // Maniascript
};

struct CGameEditorEvent : public CGameManiaAppScriptEvent {
  enum class Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    FileChanged = 4,
    Exit = 5,
    FileSave = 6,
    OnUndo = 7,
    OnRedo = 8,
    OnSwitchedBack = 9,
    CameraButtonOn = 10,
    CameraButtonOff = 11,
    VoxelUpdateMaterial = 12,
    OpenUVEditor = 13,
    CloseUVEditor = 14,
    EnableUndo = 15,
    DisableUndo = 16,
    EnableRedo = 17,
    DisableRedo = 18,
  };
  const EType Type; // Maniascript
};

struct CGameMgrTurretPhy : public CSceneMgrPhy {
};

struct CGameTurretPhy : public CMwNod {
};

struct CGameScenePhy : public CScenePhy {
  CGameMgrAction* const MgrAction;
  CGameMgrAction* const MgrSlotPhy;
};

struct CGameMgrTurretVis : public CSceneMgrVis {
};

// userName: 'Turret'
struct CGameTurretVis : public CMwNod {
};

struct CGameObjectPhy {
};

struct CGameEditorPluginHandle : public CMwNod {
};

struct CGameCtnMediaBlockTurret : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTurret();

};

// Description: "This is the base Manialink page interface."
struct CGameEditorPluginLayerScriptHandler : public CGameManialinkScriptHandler {
  CGameEditorModule* const ModuleEditor; // Maniascript
  CGameEditorMesh* const MeshEditor; // Maniascript
  CGameEditorEditor* const EditorEditor; // Maniascript
};

struct CGameMgrMapPhy : public CSceneMgrPhy {
  CGameMgrMapPhy();

};

struct CGameDataFileManager : public CMwNod {
};

struct CGameDataFileTask_GhostStoreUserRecord_ConsoleMode : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_GhostStoreUserRecord_Maniaplanet : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_GhostLoadUserRecord_ConsoleMode : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_GhostLoadUserRecord_Maniaplanet : public CWebServicesTaskSequence {
};

// Description: "Task result containing a ghost."
struct CWebServicesTaskResult_GhostScript : public CWebServicesTaskResult_Ghost {
  CGameGhostScript* const Ghost; // Maniascript
};

struct CGameDataFileTask_GhostLoadMedal : public CWebServicesTaskSequence {
};

struct CGameCtnMediaBlockEntity : public CGameCtnMediaBlock {
  CGameCtnMediaBlockEntity();

};

struct CWebServicesTaskResult_NaturalLeaderBoardInfoList : public CWebServicesTaskResult {
};

// Description: "Results containing a list of map info."
struct CWebServicesTaskResult_MapListScript : public CWebServicesTaskResult_GameFidList {
  const wstring ParentPath; // Maniascript
  const wstring Path; // Maniascript
  const MwBuffer<CGameCtnChallengeInfo*> MapInfos; // Maniascript
  const MwBuffer<wstring> SubFolders; // Maniascript
};

struct CGameDataFileTask_MapGetUserList : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_GameFidGetGameList : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_UserDataCacheUpdate : public CWebServicesTaskSequence {
};

// Description: "Script API to manage game data."
struct CGameDataFileManagerScript : public CMwNod {
  enum class EMediaType {
    Image = 0,
    Sound = 1,
    Script = 2,
    MatchSettings = 3,
    Module = 4,
    Skins = 5,
  };
  const MwBuffer<CWebServicesTaskResult*> TaskResults; // Maniascript
  void TaskResult_Release(MwId TaskId); // Maniascript
  void ReleaseTaskResult(MwId TaskId); // Maniascript
  const MwBuffer<CGameCtnCampaign*> Campaigns; // Maniascript
  CGameCtnCampaign* Campaign_Get(string CampaignId); // Maniascript
  void Map_RefreshFromDisk(); // Maniascript
  CWebServicesTaskResult_MapListScript* Map_GetUserList(MwId UserId); // Maniascript
  CWebServicesTaskResult_MapListScript* Map_GetGameList(wstring Path, bool Flatten); // Maniascript
  CWebServicesTaskResult_MapListScript* Map_GetGameListWithFilters(wstring Path, bool Flatten, bool SortByNameElseByDate, bool SortOrderAsc); // Maniascript
  CWebServicesTaskResult_MapListScript* Map_GetFilteredGameList(uint Scope, wstring Path, bool Flatten); // Maniascript
  const MwBuffer<CGameGhostScript*> Ghosts; // Maniascript
  void Ghost_Release(MwId GhostId); // Maniascript
  CWebServicesTaskResult_GhostScript* Ghost_Download(wstring FileName, string Url); // Maniascript
  CWebServicesTaskResult* Ghost_Upload(string Url, CGameGhostScript* Ghost, string AdditionalHeaders); // Maniascript
  void Replay_RefreshFromDisk(); // Maniascript
  CWebServicesTaskResult_ReplayListScript* Replay_GetGameList(wstring Path, bool Flatten); // Maniascript
  CWebServicesTaskResult_ReplayListScript* Replay_GetGameListWithFilters(wstring Path, bool Flatten, bool SortByNameElseByDate, bool SortOrderAsc); // Maniascript
  CWebServicesTaskResult_ReplayListScript* Replay_GetFilteredGameList(uint Scope, wstring Path, bool Flatten); // Maniascript
  CWebServicesTaskResult_GhostListScript* Replay_Load(wstring Path); // Maniascript
  CWebServicesTaskResult* Replay_Save(wstring Path, CGameCtnChallenge* Map, CGameGhostScript* Ghost); // Maniascript
  CWebServicesTaskResult_FileListScript* Media_GetGameList(EMediaType Type, wstring Path, bool Flatten); // Maniascript
  CWebServicesTaskResult_FileListScript* Media_GetGameListWithFilters(EMediaType Type, wstring Path, bool Flatten, bool SortByNameElseByDate, bool SortOrderAsc); // Maniascript
  CWebServicesTaskResult_FileListScript* Media_GetFilteredGameList(EMediaType Type, uint Scope, wstring Path, bool Flatten); // Maniascript
  CWebServicesTaskResult_GameModeListScript* GameMode_GetGameList(uint Scope, wstring Path, bool Flatten); // Maniascript
  CWebServicesTaskResult* Pack_DownloadOrUpdate(wstring DisplayName, string Url); // Maniascript
};

struct CGameDataUserFileManager : public CMwNod {
};

struct CWebServicesTaskResult_GameFidList : public CWebServicesTaskResult {
};

// Description: "Results containing a list of replay info."
struct CWebServicesTaskResult_ReplayListScript : public CWebServicesTaskResult_GameFidList {
  const wstring ParentPath; // Maniascript
  const wstring Path; // Maniascript
  const MwBuffer<CGameCtnReplayRecordInfo*> ReplayInfos; // Maniascript
  const MwBuffer<wstring> SubFolders; // Maniascript
};

struct CWebServicesTaskResult_FileList : public CWebServicesTaskResult {
};

// Description: "Results containing a list of media info."
struct CWebServicesTaskResult_FileListScript : public CWebServicesTaskResult_FileList {
  const wstring ParentPath; // Maniascript
  const wstring Path; // Maniascript
  const MwBuffer<wstring> Files; // Maniascript
  const MwBuffer<wstring> SubFolders; // Maniascript
};

struct CGameDataFileTask_FileGetGameList : public CWebServicesTaskSequence {
};

// userName: 'Object'
struct CGameObjectVis : public CMwNod {
};

struct CGameMapScoreManager : public CMwNod {
};

struct CGameMapScoreManager_MapRecord : public CGameMapScoreManager {
};

struct CGameMapScoreManager_MultiAsyncLevel : public CGameMapScoreManager {
};

struct CGameMapScoreManager_SkillPoint : public CGameMapScoreManager {
};

struct CGameScriptMgrTurret : public CMwNod {
  void MapTurrets_Reset(); // Maniascript
  CGameScriptTurret* Turret_Create(MwId ModelId, vec3 Position, vec3 Direction, uint Clan, CGameScriptPlayer* OwnerPlayer); // Maniascript
  CGameScriptTurret* Turret_CreateWithOwner(MwId ModelId, vec3 Position, vec3 Direction, vec3 Up, uint Clan, MwId OwnerId); // Maniascript
  CGameScriptTurret* Turret_CreateWithOwner2(MwId ModelId, vec3 Position, vec3 Direction, vec3 Up, uint Clan, MwId OwnerId, bool AutoAimOn, bool AutoTriggerOn); // Maniascript
  vec3 Turret_GetPosition(CGameScriptTurret* Turret); // Maniascript
  void Turret_Destroy(CGameScriptTurret* Turret); // Maniascript
  void Turret_DestroyAll(); // Maniascript
  void Turret_Activate(CGameScriptTurret* Turret); // Maniascript
  void Turret_Deactivate(CGameScriptTurret* Turret); // Maniascript
  void Turret_SetIsAutomatic(CGameScriptTurret* Turret, bool IsAuto); // Maniascript
  void Turret_Auto_SetAimAnticipation(CGameScriptTurret* Turret, float AimAnticipationMs); // Maniascript
  void Turret_Auto_SetFirePeriod(CGameScriptTurret* Turret, uint FirePeriodMs); // Maniascript
  void Turret_Auto_SetTargetDetectionFov(CGameScriptTurret* Turret, float DectectionFOVDeg); // Maniascript
  void Turret_Auto_SetTargetDetectionRadius(CGameScriptTurret* Turret, float DetectionRadius); // Maniascript
  CGameScriptEntity* Turret_Auto_GetTarget(CGameScriptTurret* Turret); // Maniascript
  void Turret_Manual_SetTargetPos(CGameScriptTurret* Turret, vec3 TargetPos); // Maniascript
  void Turret_Manual_Fire(CGameScriptTurret* Turret); // Maniascript
  MwBuffer<CGameScriptTurret*> Turrets; // Maniascript
};

struct CGameScriptTurret : public CGameScriptEntity {
  uint Armor; // Maniascript
  uint ArmorMax; // Maniascript
  CGameScriptPlayer* const Owner; // Maniascript
};

struct CWebServicesTaskResult_GhostList : public CWebServicesTaskResult {
};

// Description: "Results containing a list of ghost."
struct CWebServicesTaskResult_GhostListScript : public CWebServicesTaskResult_GhostList {
  const MwBuffer<CGameGhostScript*> Ghosts; // Maniascript
};

struct CGameMasterServerTask_SetTitlePaid : public CNetMasterServerRequestTask {
};

struct CGameScoreTask_GetNaturalLeaderBoardPlayerList : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_GetNaturalLeaderBoard : public CNetMasterServerRequestTask {
};

// Description: "Ranking item of a leaderboard."
struct CGameNaturalLeaderBoardInfoScript : public CMwNod {
  const uint Rank; // Maniascript
  const MwId UserId; // Maniascript
  const string Login; // Maniascript
  const wstring DisplayName; // Maniascript
  const uint Score; // Maniascript
  const wstring FileName; // Maniascript
  const string ReplayUrl; // Maniascript
};

// Description: "Results containing a part of the leaderboard."
struct CWebServicesTaskResult_NaturalLeaderBoardInfoListScript : public CWebServicesTaskResult_NaturalLeaderBoardInfoList {
  const uint FromIndex; // Maniascript
  const uint Count; // Maniascript
  const MwBuffer<CGameNaturalLeaderBoardInfoScript*> LeaderBoardInfo; // Maniascript
};

// Description: "Results containing a part of the leaderboard."
struct CWebServicesTaskResult_RealLeaderBoardInfoListScript : public CWebServicesTaskResult_RealLeaderBoardInfoList {
  const uint FromIndex; // Maniascript
  const uint Count; // Maniascript
  const MwBuffer<CGameRealLeaderBoardInfoScript*> LeaderBoardInfo; // Maniascript
};

// Description: "Allows handling of match-settings files"
struct CGameMatchSettingsManagerScript : public CMwNod {
  void Debug_MatchSettings_New();
  void Debug_MatchSettings_Save();
  void Debug_MatchSettings_SaveAs();
  void Debug_MatchSettings_EditScriptSettings();
  void MatchSettings_Refresh(); // Maniascript
  CGameMatchSettingsScript* MatchSettings_Create(wstring FilePath); // Maniascript
  void MatchSettings_Save(CGameMatchSettingsScript* MatchSettings); // Maniascript
  CGameMatchSettingsScript* MatchSettings_SaveAs(wstring FilePath, CGameMatchSettingsScript* MatchSettings); // Maniascript
  void MatchSettings_EditScriptSettings(CGameMatchSettingsScript* MatchSettings); // Maniascript
  const bool MatchSettings_EditScriptSettings_Ongoing; // Maniascript
  const MwBuffer<CGameMatchSettingsScript*> MatchSettings; // Maniascript
};

// Description: "Represents a match-settings file"
struct CGameMatchSettingsScript : public CMwNod {
  const wstring Name; // Maniascript
  const wstring FileName; // Maniascript
  wstring ScriptModeName; // Maniascript
  bool ScriptModeName_Check(wstring ScriptModeName); // Maniascript
  void ScriptModeName_Set(wstring ScriptModeName); // Maniascript
  const MwBuffer<CGameMatchSettingsPlaylistItemScript*> Playlist; // Maniascript
  bool Playlist_FileExists(wstring File); // Maniascript
  bool Playlist_FileMatchesMode(wstring File); // Maniascript
  void Playlist_Add(wstring File); // Maniascript
  void Playlist_Remove(uint Index); // Maniascript
  void Playlist_SwapUp(uint Index); // Maniascript
  void Playlist_SwapDown(uint Index); // Maniascript
};

struct CGameDataFileTask_PackDownloadOrUpdate : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Title : public CWebServicesTaskResult {
};

// Description: "Represents a map in the playlist of a matchsetting"
struct CGameMatchSettingsPlaylistItemScript : public CMwNod {
  const wstring Name; // Maniascript
  const bool FileExists; // Maniascript
};

struct CGameScoreTask_GetCampaignOpponentRecords : public CWebServicesTaskSequence {
};

// Description: "Results containing a list of map records."
struct CWebServicesTaskResult_MapRecordListScript : public CWebServicesTaskResult_PlayerMapRecords {
  const MwBuffer<CGamePlayerMapRecordScript*> MapRecordList; // Maniascript
};

// Description: "Map record info."
struct CGamePlayerMapRecordScript : public CMwNod {
  const string Context; // Maniascript
  const string MapUid; // Maniascript
  const wstring MapName; // Maniascript
  const uint Score; // Maniascript
  const uint Time; // Maniascript
  const uint RespawnCount; // Maniascript
  const uint Timestamp; // Maniascript
  const uint MultiAsyncLevel; // Maniascript
  const uint SkillPoints; // Maniascript
  const wstring FileName; // Maniascript
  const string ReplayUrl; // Maniascript
};

struct CGameDataFileTask_GameModeGetGameList : public CWebServicesTaskSequence {
};

// Description: "Results containing a list of GameMode info."
struct CWebServicesTaskResult_GameModeListScript : public CWebServicesTaskResult {
  const MwBuffer<CGameGameModeInfoScript*> GameModes; // Maniascript
};

// Description: "A GameMode script."
struct CGameGameModeInfoScript : public CMwNod {
  const wstring Name; // Maniascript
  const wstring Path; // Maniascript
  const wstring Description; // Maniascript
  const wstring Version; // Maniascript
  const MwBuffer<wstring> CompatibleMapTypes; // Maniascript
};

// Description: "Local profile settings."
struct CGameUserProfileWrapper : public CMwNod {
  enum class EMapEditorMode {
    Ask = 0,
    Advanced = 1,
  };
  enum class ECustomPlayerModels {
    All = 0,
    OnlyTextures = 1,
    None = 2,
  };
  enum class EInputMouseReleaseKey {
    LeftAlt = 0,
    RightAlt = 1,
    LeftCtrl = 2,
    RightCtrl = 3,
  };
  const bool CanChangePassword; // Maniascript
  const bool CanChangeNickName; // Maniascript
  const bool CanChangeAvatar; // Maniascript
  const bool CanChangeSkin; // Maniascript
  const bool CanChangeZone; // Maniascript
  const bool CanChangeGroups; // Maniascript
  void Account_ResetChanges(); // Maniascript
  wstring Account_Name; // Maniascript
  string Account_EMail; // Maniascript
  bool Account_AcceptNews; // Maniascript
  bool Account_EnableAutoConnect; // Maniascript
  float User_LightTrailHue; // Range: 0 - 1 // Maniascript
  float User_HornPitch; // Range: 0.5 - 2 // Maniascript
  wstring User_Description; // Maniascript
  string User_ClubLinkUrl; // Maniascript
  bool Custom_EnableAvatars; // Maniascript
  bool Custom_EnableChat; // Maniascript
  ECustomPlayerModels Custom_PlayerModels; // Maniascript
  bool Custom_EnableUnlimitedHorns; // Maniascript
  EMapEditorMode Editors_MapEditorMode; // Maniascript
  EMapEditorMode MapEditorMode; // Maniascript
  bool Online_AutoSaveReplay; // Maniascript
  bool Online_SaveRoundReplaysSeparately; // Maniascript
  bool Title_IsForbiddenWithParentalLock; // Maniascript
  bool Steam_OpenLinksInSteam; // Maniascript
  bool Steam_SynchonizeWorkshopFiles; // Maniascript
  float Audio_MasterSoundVolume; // Range: -40 - 0 // Maniascript
  float Audio_MasterMusicVolume; // Range: -40 - 0 // Maniascript
  bool Audio_DontMuteWhenAppUnfocused; // Maniascript
  bool Interface_CrosshairEnableCustomColor; // Maniascript
  float Interface_CrosshairSaturation; // Range: 0 - 1 // Maniascript
  float Interface_CrosshairLinearHue; // Range: 0 - 1 // Maniascript
  float Interface_CrosshairSize; // Range: 0.1 - 2 // Maniascript
  float Interface_CrosshairOpacity; // Range: 0.1 - 1 // Maniascript
  wstring Interface_CrosshairName; // Maniascript
  float Interface_PlayerShieldScale; // Range: 0.1 - 2 // Maniascript
  bool Interface_AllyEnableCustomColor; // Maniascript
  float Interface_AllyLinearHue; // Range: 0 - 1 // Maniascript
  bool Interface_OppoEnableCustomColor; // Maniascript
  float Interface_OppoLinearHue; // Range: 0 - 1 // Maniascript
  bool Interface_BeaconEnableCustom; // Maniascript
  bool Interface_BeaconUseProfileColor; // Maniascript
  float Interface_BeaconOpacity; // Range: 0 - 1 // Maniascript
  float Interface_BeaconSize; // Range: 0.1 - 5 // Maniascript
  float Interface_BeaconDuration; // Range: 0.5 - 15 // Maniascript
  bool Inputs_MouseLookInvertY; // Maniascript
  EInputMouseReleaseKey Inputs_MouseReleaseKey; // Maniascript
  float Inputs_MouseScaleY; // Range: 0.1 - 3 // Maniascript
  float Inputs_MouseScaleFreeLook; // Range: 0.1 - 3 // Maniascript
  float Inputs_MouseAccel; // Range: 0 - 3 // Maniascript
  float Inputs_MouseSensitivityDefault; // Range: -1 - 1 // Maniascript
  float Inputs_MouseSensitivityLaser; // Range: -1 - 1 // Maniascript
  float Inputs_MouseSensitivityDefault_Raw; // Maniascript
  float Inputs_MouseSensitivityLaser_Raw; // Maniascript
  MwBuffer<CGameUserProfileWrapper_VehicleSettings*> Inputs_Vehicles; // Maniascript
};

struct CGameEditorPluginAPI : public CMwNod {
  void NewFile(); // Maniascript
  void Undo(); // Maniascript
  void Redo(); // Maniascript
};

struct CGameEditorVehiclePluginAPI : public CGameEditorPluginAPI {
};

struct CGameBlockItemVariantChooser : public CMwNod {
  CGameItemModel* const ItemModelToView;
  CGameCtnBlockInfo* const ArchetypeBlockInfo;
  bool ShowOriginalVariant;
  wstring VariantType;
  uint VariantGroupCurrent;
  const uint VariantGroupMax;
  uint RandomVariantCurrent;
  const uint RandomVariantMax;
  void NextVariantType();
  void PreviousVariantType();
  void NextVariantGroup();
  void PreviousVariantGroup();
  void NextRandomVariant();
  void PreviousRandomVariant();
};

struct CGameArenaPlayer : public CMwNod {
};

struct CGameEditorMaterial : public CGameEditorParent {
};

struct CGameMgrAction : public CSceneMgrPhy {
  enum class EActionSlot {
    Slot_A = 0,
    Slot_B = 1,
    Slot_C = 2,
    Slot_D = 3,
    Slot_E = 4,
    Slot_F = 5,
    Slot_G = 6,
    Slot_H = 7,
  };
  CGameScriptAction* Action_GetState_Player(CGameScriptPlayer* Player, EActionSlot Slot); // Maniascript
  CGameScriptAction* Action_GetState_Vehicle(CGameScriptVehicle* Vehicle, int VehicleSlotIndex, EActionSlot Slot); // Maniascript
  CGameScriptAction* Action_GetState_Turret(CGameScriptTurret* Turret, EActionSlot Slot); // Maniascript
  MwBuffer<CGameScriptAction*> Actions; // Maniascript
};

struct CGameMgrArenaPhy : public CSceneMgrPhy {
  CGameMgrArenaPhy();

};

struct CGameScriptVehicle : public CGameScriptEntity {
  enum class ESlotType {
    Driver = 0,
    Passenger = 1,
  };
  uint Armor; // Maniascript
  uint ArmorMax; // Maniascript
  const vec3 Position; // Maniascript
  const float Pitch; // Maniascript
  const float Roll; // Maniascript
  const vec3 Left; // Maniascript
  const vec3 Up; // Maniascript
  const vec3 Dir; // Maniascript
  const vec3 Velocity; // Maniascript
  const float Altitude; // Maniascript
  uint Clan; // Maniascript
  float AccelCoef; // Maniascript
  const float AccelInput; // Maniascript
  void SetEngineActivated(bool IsActivated); // Maniascript
};

struct CGameScriptMgrVehicle : public CMwNod {
  enum class EArmorUse {
    Self = 0,
    Group = 1,
    Owner = 2,
    Children = 3,
    Mine = 4,
  };
  enum class ESlotType {
    Driver = 0,
    Passenger = 1,
  };
  void MapVehicles_Reset(); // Maniascript
  void DestroyAllVehicles(); // Maniascript
  CGameScriptVehicle* Vehicle_Create(MwId ModelId, int Clan, int Armor, EArmorUse ArmorUse, CGameScriptMapSpawn* Spawn); // Maniascript
  CGameScriptVehicle* Vehicle_CreateWithOwner(MwId ModelId, vec3 Offset, int Armor, EArmorUse ArmorUse, CGameScriptVehicle* Owner); // Maniascript
  void Vehicle_Destroy(CGameScriptVehicle* Vehicle); // Maniascript
  void Vehicle_Assign_AutoPilot(CGameScriptVehicle* Vehicle, string ModelName); // Maniascript
  void Vehicle_Assign_AutoPilot2(CGameScriptVehicle* Vehicle, string ModelName, bool LoopPath); // Maniascript
  void Vehicle_SetTrailVisible(CGameScriptVehicle* Vehicle, bool IsVisible); // Maniascript
  void Vehicle_SetShieldVisible(CGameScriptVehicle* Vehicle, bool IsVisible); // Maniascript
  uint VehicleModel_GetSlotsCount(MwId ModelId, ESlotType SlotType); // Maniascript
  MwBuffer<CGameScriptVehicle*> Vehicles; // Maniascript
};

struct CGameAction : public CMwNod {
};

struct CGameScriptAction : public CMwNod {
  const uint Cooldown; // Maniascript
  const uint CooldownStartTime; // Maniascript
  const uint Energy; // Maniascript
  const uint EnergyCost; // Maniascript
  const uint EnergyMax; // Maniascript
};

struct CGameMgrGhost : public CMwNod {
};

struct CGameScriptMapLandmark : public CMwNod {
  const string Tag; // Maniascript
  const uint Order; // Maniascript
  const vec3 Position; // Maniascript
  CGameScriptMapSector* const Sector; // Maniascript
  CGameScriptMapWaypoint* const Waypoint; // Maniascript
  CGameScriptMapSpawn* const PlayerSpawn; // Maniascript
  CGameScriptMapBotPath* const BotPath; // Maniascript
  CGameScriptMapBotSpawn* const BotSpawn; // Maniascript
  CGameScriptMapObjectAnchor* const ObjectAnchor; // Maniascript
};

struct CGameScriptMapSector : public CMwNod {
  const MwBuffer<MwId> PlayersIds; // Maniascript
  const string Tag; // Maniascript
};

struct CGameScriptMapSpawn : public CMwNod {
};

struct CGameScriptMapBotPath : public CMwNod {
  const uint Clan; // Maniascript
  const MwBuffer<vec3> Path; // Maniascript
  const bool IsFlying; // Maniascript
};

struct CGameScriptMapObjectAnchor : public CMwNod {
  const wstring ItemName; // Maniascript
  const MwId ItemModelId; // Maniascript
};

struct CGameScriptMapBotSpawn : public CMwNod {
  const bool IsFlying; // Maniascript
  const MwId BotModelId; // Maniascript
};

struct CGameMgrVehiclePhy : public CSceneMgrPhy {
};

struct CGameMgrSlotPhy : public CSceneMgrPhy {
  float CoefFriction;
  float CoefAcceleration;
  float Sensibility;
};

struct CGameMgrSlotVis : public CSceneMgrVis {
};

// userName: 'Slot'
struct CGameSlotPhy : public CMwNod {
};

// userName: 'Vehicle'
struct CGameVehiclePhy : public CMwNod {
};

// userName: 'Slot'
struct CGameSlotVis : public CMwNod {
};

struct CGameScriptEntity : public CMwNod {
};

// Description: "A player is the incarnation of the user in the playground."
struct CGameScriptPlayer : public CGameScriptEntity {
  CGamePlayerInfo* const User; // Maniascript
  const string Login; // Maniascript
  const wstring Name; // Maniascript
  const int RequestedClan; // Maniascript
  const bool RequestsSpectate; // Maniascript
};

// Description: "An invitation to join a squad."
struct CGameScriptChatSquadInvitation : public CMwNod {
  CGameScriptChatContact* const Sender; // Maniascript
  const string SquadId;
};

// Description: "An message in the history."
struct CGameScriptChatHistoryEntryMessage : public CMwNod {
  const wstring Body; // Maniascript
  const wstring Link; // Maniascript
  const wstring Metadata; // Maniascript
};

struct CGameCtnMasterServerTask_ZoneUpdate : public CWebServicesTaskSequence {
};

struct CGameMasterServerTask_GetOnlineProfile : public CNetMasterServerRequestTask {
};

struct CGameMasterServerRichPresenceTaskResult_NextPresence : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_PlanetsTransaction_Bill : public CWebServicesTaskResult {
  enum class EState {
    Void = 0,
    CreatingTransaction = 1,
    Issued = 2,
    ValidatingPayement = 3,
    Payed = 4,
    Refused = 5,
    Error = 6,
  };
  const EState State; // Maniascript
  const uint TransactionId; // Maniascript
  const string LoginPayer; // Maniascript
  const string LoginPayee; // Maniascript
  const wstring Label; // Maniascript
  const int Cost; // Maniascript
};

struct CGameScriptMapWaypoint : public CMwNod {
  const bool IsFinish; // Maniascript
  const bool IsMultiLap; // Maniascript
};

struct CGameControlCameraHelico : public CGameControlCamera {
  CGameControlCameraHelico();

  CPlugVehicleCameraHelicoModel* m_Model;
};

struct CWebServicesTask_PostConnect : public CWebServicesTaskSequence {
};

struct CWebServicesTask_PostConnect_Zone : public CWebServicesTaskSequence {
};

struct CWebServicesTask_PostConnect_BannedCryptedChecksumsList : public CWebServicesTaskSequence {
};

struct CWebServicesTask_PostConnect_UrlShortCutList : public CWebServicesTaskSequence {
};

struct CGameEditorMapScriptClipList : public CMwNod {
  const MwBuffer<CGameEditorMapScriptClip*> Clips; // Maniascript
  const nat3 Size; // Maniascript
  bool SetClipListFromMacroblock(CGameCtnMacroBlockInfo* MacroblockModel, nat3 Coord, ECardinalDirections Dir); // Maniascript
  bool SetClipListFromMacroblockOnly(CGameCtnMacroBlockInfo* MacroblockModel); // Maniascript
  bool SetClipListFromBlock(CGameCtnBlockInfo* BlockModel, nat3 Coord, ECardinalDirections Dir); // Maniascript
  bool SetClipListFromBlockOnly(CGameCtnBlockInfo* BlockModel); // Maniascript
  void CreateAndAddClip(wstring Name, int3 Coord, int3 Offset, ECardinalDirections Dir, int ClipId); // Maniascript
  bool SetFromClipList(CGameEditorMapScriptClipList* ClipList, int3 Coord, ECardinalDirections Dir); // Maniascript
  void RemoveClip(CGameEditorMapScriptClip* Clip); // Maniascript
  void ClearClips(); // Maniascript
  void Destroy(); // Maniascript
};

struct CWebServicesTask_PostConnect_Title : public CWebServicesTaskSequence {
};

struct CGameEditorMapScriptClip : public CMwNod {
  const wstring Name; // Maniascript
  ECardinalDirections Dir; // Maniascript
  const nat3 Coord; // Maniascript
  const nat3 Offset; // Maniascript
  int ClipId; // Maniascript
  int3 GetConnectableCoord(); // Maniascript
};

struct CWebServicesTask_SynchronizeProfileChunks : public CWebServicesTaskSequence {
};

struct CGamePlaygroundModuleClientChrono : public CGamePlaygroundModuleClient {
  CGameUILayer* const ChronoLayer; // Maniascript
};

struct CGamePlaygroundModuleServerChrono : public CGamePlaygroundModuleServer {
  void StopChrono(); // Maniascript
  void StartChrono(); // Maniascript
  void Reset(); // Maniascript
  void Reset2(CGameScriptPlayer* Player); // Maniascript
};

struct CGamePlaygroundModuleClientSpeedMeter : public CGamePlaygroundModuleClient {
  CGameUILayer* const SpeedMeterLayer; // Maniascript
};

struct CGamePlaygroundModuleServerSpeedMeter : public CGamePlaygroundModuleServer {
  void Reset(CGameScriptPlayer* Player); // Maniascript
  void SetGlobalScale(float Scale); // Maniascript
  void SetGaugeNumber(int Number); // Maniascript
  void SetGaugeAngle(float Angle); // Maniascript
  void SetGaugeBGVisible(bool Visibility); // Maniascript
  void SetSpeedLineVisible(bool Visibility); // Maniascript
  void SetGaugeSpeedMax(float Maximum); // Maniascript
  void SetSpeedValueScale(float Scale); // Maniascript
  void SetSpeedUnitScale(float Scale); // Maniascript
  void SetFooterUnitVisible(bool Visibility); // Maniascript
  void SetFooterLineVisible(bool Visibility); // Maniascript
  void SetDistanceVisible(bool Visibility); // Maniascript
  void SetDistanceFooterLineVisible(bool Visibility); // Maniascript
};

struct CGamePlaygroundModuleClientPlayerState : public CGamePlaygroundModuleClient {
  CGameUILayer* const PlayerStateLayer; // Maniascript
};

struct CGamePlaygroundModuleServerPlayerState : public CGamePlaygroundModuleServer {
  void Reset(CGameScriptPlayer* Player); // Maniascript
};

struct CGamePlaygroundModuleClientTeamState : public CGamePlaygroundModuleClient {
  CGameUILayer* const TeamStateLayer; // Maniascript
};

struct CGamePlaygroundModuleServerTeamState : public CGamePlaygroundModuleServer {
  void Reset(CGameScriptPlayer* Player); // Maniascript
};

struct CGamePlaygroundModuleClientAltimeter : public CGamePlaygroundModuleClient {
  CGameUILayer* const AltimeterLayer; // Maniascript
};

struct CGamePlaygroundModuleServerAltimeter : public CGamePlaygroundModuleServer {
};

struct CGamePlaygroundModuleClientThrottle : public CGamePlaygroundModuleClient {
  CGameUILayer* const ThrottleLayer; // Maniascript
};

struct CGamePlaygroundModuleServerThrottle : public CGamePlaygroundModuleServer {
};

struct CGameEditorUndoSystem_State : public CMwNod {
  CGameEditorUndoSystem_State();

};

struct CGameMasterServerTask_GetAccountFromUplayUser : public CNetMasterServerRequestTask {
};

struct CGameEditorMapMacroBlockInstance : public CMwNod {
  CGameCtnMacroBlockInfo* const MacroblockModel; // Maniascript
  CGameEditorMapScriptClipList* const ClipList; // Maniascript
  ECardinalDirections Dir; // Maniascript
  const int3 Coord; // Maniascript
  uint Order; // Maniascript
  int UserData; // Maniascript
  const MwBuffer<nat3> UnitCoords; // Maniascript
  nat3 GetSize(); // Maniascript
};

struct CGameEditorPluginCameraManager : public CMwNod {
  CGameEditorPluginCameraManager();

};

struct CGameEditorPluginCursorManager : public CMwNod {
  CGameEditorPluginCursorManager();

};

struct CGameEditorPluginCameraAPI : public CMwNod {
  CGameEditorPluginCameraAPI();

  enum class EZoomLevel {
    Close = 0,
    Medium = 1,
    Far = 2,
  };
  enum class ECameraVStep {
    Low = 0,
    MediumLow = 1,
    Medium = 2,
    MediumHigh = 3,
    High = 4,
  };
  void ReleaseLock(); // Maniascript
  void CenterOnCursor(); // Maniascript
  void WatchStart(); // Maniascript
  void WatchClosestFinishLine(); // Maniascript
  void WatchClosestCheckpoint(); // Maniascript
  void WatchWholeMap(); // Maniascript
  void WatchCustomSelection(); // Maniascript
  void MoveToMapCenter(); // Maniascript
  bool GetLock(); // Maniascript
  bool CanUse(); // Maniascript
  void TurnH(bool Clockwise); // Maniascript
  void TurnH(bool Clockwise, bool HalfSteps); // Maniascript
  void TurnH(bool Clockwise, bool HalfSteps, bool Smooth); // Maniascript
  void TurnV(bool UpOrElseDown); // Maniascript
  void TurnV(bool UpOrElseDown, bool Smooth); // Maniascript
  void Move(ERelativeDirections RelativeDir); // Maniascript
  void FollowCursor(bool Follow); // Maniascript
  void CenterOnCursor(bool Smooth); // Maniascript
  void MoveToMapCenter(bool Smooth); // Maniascript
  void Watch(CGameCtnBlock* Block); // Maniascript
  void Watch(CGameCtnBlock* Block, bool Smooth); // Maniascript
  void Watch(CGameEditorMapMacroBlockInstance* Macroblock); // Maniascript
  void Watch(CGameEditorMapMacroBlockInstance* Macroblock, bool Smooth); // Maniascript
  void Watch(CGameEditorMapScriptClip* Clip); // Maniascript
  void Watch(CGameEditorMapScriptClip* Clip, bool Smooth); // Maniascript
  void WatchStart(bool Smooth); // Maniascript
  void WatchClosestFinishLine(bool Smooth); // Maniascript
  void WatchClosestCheckpoint(bool Smooth); // Maniascript
  void WatchWholeMap(bool Smooth); // Maniascript
  void WatchMacroblocks(int UserData); // Maniascript
  void WatchMacroblocks(int UserData, bool Smooth); // Maniascript
  void ZoomIn(bool Loop); // Maniascript
  void ZoomIn(bool Loop, bool Smooth); // Maniascript
  void ZoomOut(bool Loop); // Maniascript
  void ZoomOut(bool Loop, bool Smooth); // Maniascript
  void Zoom(UnnamedEnum Level); // Maniascript
  void Zoom(UnnamedEnum Level, bool Smooth); // Maniascript
  void Look(ECardinalDirections8 Direction); // Maniascript
  void Look(ECardinalDirections8 Direction, bool Smooth); // Maniascript
  void Look(ECardinalDirections Direction); // Maniascript
  void Look(ECardinalDirections Direction, bool Smooth); // Maniascript
  void SetVStep(UnnamedEnum Step); // Maniascript
  void WatchCustomSelection(bool WatchCustomSelection); // Maniascript
};

struct CGameEditorPluginCursorAPI : public CMwNod {
  CGameEditorPluginCursorAPI();

  void ReleaseLock(); // Maniascript
  nat3 Coord; // Maniascript
  ECardinalDirections Dir; // Maniascript
  CGameCtnBlockInfo* BlockModel; // Maniascript
  CGameCtnBlockInfo* TerrainBlockModel; // Maniascript
  CGameCtnMacroBlockInfo* MacroblockModel; // Maniascript
  float Brightness; // Maniascript
  bool HideDirectionalArrow; // Maniascript
  void MoveToCameraTarget(); // Maniascript
  void ResetCustomRGB(); // Maniascript
  bool GetLock(); // Maniascript
  bool CanUse(); // Maniascript
  bool Raise(); // Maniascript
  bool Lower(); // Maniascript
  void FollowCameraTarget(bool Follow); // Maniascript
  void Rotate(bool CWOrCCW); // Maniascript
  void Move(ECardinalDirections CardinalDir); // Maniascript
  void Move(ECardinalDirections8 CardinalDir8); // Maniascript
  void Move(ERelativeDirections RelativeDir); // Maniascript
  void DisableMouseDetection(bool Disable); // Maniascript
  bool CanPlace(); // Maniascript
  bool IsCustomRGBActivated(); // Maniascript
  void SetCustomRGB(vec3 Color); // Maniascript
};

struct CGameEditorPluginMapConnectResults : public CMwNod {
  CGameEditorPluginMapConnectResults();

  bool CanPlace; // Maniascript
  int3 Coord; // Maniascript
  ECardinalDirections Dir; // Maniascript
};

struct CGameEditorGenericInventory : public CMwNod {
  CGameEditorGenericInventory();

  CGameCtnArticleNodeDirectory* const CurrentRootNode; // Maniascript
  CGameCtnArticleNodeDirectory* const CurrentDirectory; // Maniascript
  CGameCtnArticleNode* const CurrentSelectedNode; // Maniascript
  MwBuffer<CGameCtnArticleNode*> RootNodes; // Maniascript
  void EnterDirectory(); // Maniascript
  void LeaveDirectory(); // Maniascript
  void SelectArticle(CGameCtnArticleNodeArticle* NodeArticle); // Maniascript
  void OpenDirectory(CGameCtnArticleNodeDirectory* NodeDirectory); // Maniascript
  void SelectNode(CGameCtnArticleNode* Node); // Maniascript
  void OpenBrotherDirectory(bool NextOrElsePrevious); // Maniascript
  void SelectBrotherArticle(bool NextOrElsePrevious); // Maniascript
  void SelectBrotherNode(bool NextOrElsePrevious); // Maniascript
  CGameCtnArticleNodeDirectory* GetDirectoryAfter(CGameCtnArticleNode* Node); // Maniascript
  CGameCtnArticleNodeDirectory* GetDirectoryBefore(CGameCtnArticleNode* Node); // Maniascript
  CGameCtnArticleNodeArticle* GetArticleAfter(CGameCtnArticleNode* Node); // Maniascript
  CGameCtnArticleNodeArticle* GetArticleBefore(CGameCtnArticleNode* Node); // Maniascript
};

} // namespace Game

namespace Graphic {

struct GxLight : public CMwNod {
  GxLight();

  vec3 Color;
  float Intensity; // Range: 0 - 1
  float DiffuseIntensity; // Range: 0 - 1
  float SpecularIntens;
  float SpecularPower;
  float ShadowIntensity; // Range: 0 - 1
  vec3 ShadowRGB;
  bool DoLighting;
  bool LightMapOnly;
  bool IsInversed;
  bool IsShadowGen;
  bool DoSpecular;
  bool HasLensFlare;
  float FlareIntensity; // Range: 0 - 1
  bool HasSprite;
  bool IgnoreLocalScale;
  bool EnableGroup0;
  bool EnableGroup1;
  bool EnableGroup2;
  bool EnableGroup3;
  CMwNod* const PlugLight;
};

struct GxLightBall : public GxLightPoint {
  GxLightBall();

  vec3 AmbientRGB;
  float Radius; // Range: 0.01 - 50
  bool CustomRadiusSpecular;
  float RadiusSpecular; // Range: 0.01 - 50
  bool CustomRadiusIndex;
  float RadiusIndex; // Range: 0.01 - 50
  bool CustomRadiusShadow;
  float RadiusShadow; // Range: 0.01 - 50
  bool CustomRadiusFlare;
  float RadiusFlare; // Range: 0.01 - 50
  float EmittingRadius;
  float EmittingCylinderLenZ;
  UnnamedEnum AttenuationType;
  UnnamedEnum TweakHN2;
  const float AttHTnLR; // Range: 0 - 10
  const float AttHTnLR2; // Range: 0 - 10
  float AttHyper2DerivAt0; // Range: -5 - 0
  float AttHyper2Tension; // Range: 0 - 1
};

struct GxLightPoint : public GxLightNotAmbient {
  GxLightPoint();

  float FlareSize;
  float FlareBiasZ;
};

struct CGxFog : public CMwNod {
  CGxFog();

};

struct GxLightAmbient : public GxLight {
  GxLightAmbient();

  float ShadeMinY;
  float ShadeMaxY;
};

struct GxLightNotAmbient : public GxLight {
  GxLightNotAmbient();

};

struct GxLightDirectional : public GxLightNotAmbient {
  GxLightDirectional();

  vec3 DblSidedRGB;
  vec3 ReverseRGB;
  float ReverseIntens; // Range: 0 - 1
  float EmittAngularSize;
  float FlareAngularSize;
  float FlareIntensPower; // Range: 0 - 1
  bool UseBoundaryHint;
  vec3 BoundaryHintPos;
  float DazzleAngleMax;
  float DazzleIntensity; // Range: 0 - 1
};

struct GxFogBlender : public CMwNod {
  GxFogBlender();

};

struct GxLightFrustum : public GxLightBall {
  GxLightFrustum();

  bool IsOrtho;
  float NearZ;
  float FarZ;
  float FovY;
  float RatioXY;
  float SizeX;
  float SizeY;
  bool DoAttenuation;
  enum class EApply {
    ModulateAdd = 0,
    Modulate = 1,
    Add = 2,
    ModulateX2 = 3,
  };
  EApply Apply;
  enum class ETechnique {
    RenderCube = 0,
    _2dMaskNoClipZ = 1,
    _2dBallLight = 2,
    GenShadowMask = 3,
  };
  ETechnique Technique;
  uint iShadowGroup;
  bool DoFadeZ;
  float RatioFadeZ; // Range: 0 - 1
  bool UseFacePosX;
  bool UseFaceNegX;
  bool UseFacePosY;
  bool UseFaceNegY;
  bool UseFacePosZ;
  bool UseFaceNegZ;
};

struct GxLightSpot : public GxLightBall {
  GxLightSpot();

  float AngleInner; // Range: 0 - 179
  float AngleOuter; // Range: 0 - 179
  bool CustomAngleFlare;
  float AngleFlare; // Range: 0 - 179
  bool CustomAngleShadow;
  float AngleInnerShadow; // Range: 0 - 179
  float AngleOuterShadow; // Range: 0 - 179
};

} // namespace Graphic

namespace Function {

// File extension: 'FuncKey.Gbx'
struct CFuncKeys : public CFunc {
  MwArray<float> Xs;
  void Reset();
};

struct CFuncKeysTrans : public CFuncKeys {
  CFuncKeysTrans();

  MwArray<vec3> Trans;
};

// File extension: 'KeysTransQuat.Gbx'
struct CFuncKeysTransQuat : public CFuncKeysTrans {
  CFuncKeysTransQuat();

  void AddTransQuatKey(float X, vec3 Pos, vec3 Dir, vec3 Up);
};

// File extension: 'KeysPath.Gbx'
struct CFuncKeysPath : public CFuncKeysTransQuat {
  CFuncKeysPath();

  enum class ECFuncKeysPath__EPathDrawMode {
    Line = 0,
    BSpline = 1,
    BSplineTension = 2,
    BSplineBias = 3,
    BezierSpline = 4,
    BetaSpline = 5,
    Hermite = 6,
  };
  ECFuncKeysPath__EPathDrawMode DrawMode;
  float BSplineTension; // Range: -2 - 0
  float BSplineBias; // Range: -1 - 1
  float BetaSplineTension; // Range: 0 - 100
  float BetaSplineSkew; // Range: -1 - 1
  bool UseTangentOrientation;
};

struct CFuncPlug : public CFunc {
  float Period;
  float Phase;
  bool AutoCreateMotion;
  bool RandomizePhase;
  MwId InputValId;
};

struct CFuncLightIntensity : public CFuncLight {
  CFuncLightIntensity();

  float Intensity0;
  float Intensity1;
  float FlickerDuration;
};

struct CFuncTreeTranslate : public CFuncTree {
  CFuncTreeTranslate();

  vec3 StartPoint;
  vec3 EndPoint;
  bool IsPingPong;
  bool IsSmooth;
};

struct CFuncEnum : public CFunc {
  CFuncEnum();

};

// File extension: 'Func.Gbx'
struct CFunc : public CMwNod {
};

struct CFuncShader : public CFuncPlug {
};

struct CFuncKeysVisual : public CFuncKeys {
  CFuncKeysVisual();

};

// File extension: 'FuncShader.Gbx'
struct CFuncShaders : public CFuncShader {
  CFuncShaders();

  MwArray<CFuncShader*> FuncShaders;
};

// File extension: 'FuncShader.Gbx'
struct CFuncShaderLayerUV : public CFuncShader {
  CFuncShaderLayerUV();

  string LayerName;
  UnnamedEnum LayerEnum;
  enum class ESignalType {
    TransLinear = 0,
    TransCircular = 1,
    Rotate = 2,
    TransSubTexture = 3,
    TransLinearScale = 4,
    CopySubTexture = 5,
    Scale = 6,
    Reset = 7,
    TransSubTexture2 = 8,
    _GComp = 9,
    TransLinearScaleRotate = 10,
  };
  ESignalType SignalType;
  vec2 Base;
  vec2 Amplitude;
  vec2 Offset;
  vec2 Scale;
  float Angle; // Range: 0 - 360
  float AngleStart; // Range: 0 - 360
  float AngleEnd; // Range: 0 - 360
  uint NbSubTexture;
  uint NbSubTexturePerLine;
  uint NbSubTexturePerColumn;
  bool TopToBottom;
  bool WriteX;
  bool WriteY;
  bool WriteZ;
  bool WriteW;
  bool EnablePingPong;
  bool EnableSmooth;
  bool EnableMipMapping;
  bool EnableBlending;
  bool EnableSmoothBlend;
  CPlugBitmap* BitmapCopy;
};

struct CFuncShaderFxFactor : public CFuncShader {
  CFuncShaderFxFactor();

  enum class ECFuncShaderFxFactor__EMapFx {
    SelfIllumLuminance = 0,
    LightMapIntensity = 1,
  };
  ECFuncShaderFxFactor__EMapFx MapFx;
  enum class ECFuncShaderFxFactor__EFctType {
    Linear = 0,
    Smooth = 1,
    Refresh_glow = 2,
  };
  ECFuncShaderFxFactor__EFctType Type;
  float Base;
  float Amplitude;
  float Offset;
};

struct CFuncLight : public CFuncPlug {
  enum class ECFuncLight__EFctType {
    Sinus = 0,
    Flick = 1,
  };
  ECFuncLight__EFctType FctType;
  float FlickPeriod;
  uint FlickCount;
};

struct CFuncLightColor : public CFuncLight {
  CFuncLightColor();

  vec3 Color0;
  vec3 Color1;
  CPlugFileImg* Image;
};

// File extension: 'FuncKeysReals.Gbx'
struct CFuncKeysReal : public CFuncKeys {
  CFuncKeysReal();

  enum class ERealInterp {
    None = 0,
    Linear = 1,
    Hermite = 2,
    SmoothStep = 3,
  };
  ERealInterp RealInterp;
  bool ForceTangentMinX;
  float ForcedTangentMinX;
  bool ForceTangentMaxX;
  float ForcedTangentMaxX;
  MwArray<float> Ys;
};

struct CFuncTree : public CFuncPlug {
};

// File extension: 'FuncTree.Gbx'
struct CFuncTreeRotate : public CFuncTree {
  CFuncTreeRotate();

  float AngleMin;
  float AngleMax;
};

struct CFuncTreeBend : public CFuncTree {
  CFuncTreeBend();

  float Amplitude;
};

// File extension: 'PathMesh.Gbx'
struct CFuncPathMesh : public CFunc {
  CFuncPathMesh();

  CPlugVisual3D* Visual;
  vec3 OffsetVisualPos;
  MwArray<CFuncPathMeshLocation*> Locations;
};

struct CFuncPathMeshLocation : public CFunc {
  CFuncPathMeshLocation();

  string Name;
  iso4 Location;
};

struct CFuncKeysReals : public CFuncKeys {
  CFuncKeysReals();

};

struct CFuncKeysNatural : public CFuncKeys {
  CFuncKeysNatural();

  MwArray<uint> Naturals;
};

struct CFuncTreeSubVisualSequence : public CFuncTree {
  CFuncTreeSubVisualSequence();

  CFuncKeysNatural* SubKeys;
  bool SimpleModeIsLooping;
  uint SimpleModeStartIndex;
  uint SimpleModeEndIndex;
};

struct CFuncShaderTweakKeysTranss : public CFuncShader {
  CFuncShaderTweakKeysTranss();

};

// File extension: 'FuncWeather.Gbx'
struct CFuncWeather : public CFunc {
  CFuncWeather();

  CFuncClouds* FuncClouds;
  CPlugMaterial* MaterialSky_Night;
  CPlugMaterial* MaterialSky_SunRise;
  CPlugMaterial* MaterialSky_Day;
  CPlugMaterial* MaterialSky_SunFall;
  CPlugMaterial* MaterialSea0;
  CPlugMaterial* MaterialSea1;
  CPlugFileImg* ImageLightAmb;
  CPlugFileImg* ImageLightDirSun;
  CPlugFileImg* ImageLightDirMoon;
  CPlugFileImg* ImageLightDirDblSided;
  CPlugBitmap* BitmapFlareSun;
  float FlareAngularSizeSun;
  CPlugBitmap* BitmapFlareMoon;
  float FlareAngularSizeMoon;
  CPlugBitmap* BitmapSkyGradV;
  CPlugFileImg* ImageFogColor;
  CPlugFileImg* ImageSeaColor;
  CPlugBitmap* BitmapRainFid;
  CMwNod* SceneFxFid;
  float CameraFarZ;
  bool FogByVertex;
  vec3 FogRGB;
  enum class EGxFogFormula {
    None = 0,
    Exp = 1,
    Exp2 = 2,
    Linear = 3,
  };
  EGxFogFormula FogFormula;
  enum class EGxFogSpace {
    CameraFarZ = 0,
    World = 1,
  };
  EGxFogSpace FogSpace;
  float FogLinearStart;
  float FogLinearEnd;
  float FogExpDensity;
  vec3 DayFogColor;
  float DayFogStart;
  float DayFogEnd;
  float DayFogDensity;
  GxFogBlender* FogBlender;
  void SeaTwkResetToShaderDefaults();
  vec2 LDirSpecIntens;
  vec2 LDirSpecPower;
  float SeaTwkReflecIntensNight; // Range: 0 - 1
  float SeaTwkReflecIntensDay; // Range: 0 - 1
  float SeaTwkReflecIntensMidNight; // Range: 0 - 1
  float SeaTwkReflecIntensMidDay; // Range: 0 - 1
  float SeaTwkReflecIntensTMNight; // Range: 0 - 1
  float SeaTwkReflecIntensTMDay; // Range: 0 - 1
  float SeaTwkReflecIntensTMmidNight; // Range: 0 - 1
  float SeaTwkReflecIntensTMmidDay; // Range: 0 - 1
  vec3 SeaTwkWaterColor_Night;
  vec3 SeaTwkWaterColor_Day;
};

// File extension: 'FuncPuffLull.Gbx'
struct CFuncPuffLull : public CFunc {
  CFuncPuffLull();

  float TileSizeInWorld;
  float PuffWDMax; // Range: 0 - 1
  float LullWDMax; // Range: 0 - 1
  uint GenCount;
  float GenPuffRatio; // Range: 0 - 1
  vec2 GenSize;
  float GenPuffWDMin; // Range: 0 - 1
  float GenPuffWDMax; // Range: 0 - 1
  float GenLullWDMin; // Range: 0 - 1
  float GenLullWDMax; // Range: 0 - 1
  string GenLifeTimeMin;
  string GenLifeTimeMax;
  float BlendPuff; // Range: 0 - 1
  float BlendLull; // Range: 0 - 1
  float Combine2nd8th; // Range: 0 - 1
  CPlugMaterial* MaterialPuff;
  CPlugMaterial* MaterialLull;
};

struct CFuncEnvelope : public CFunc {
  CFuncEnvelope();

  float KeyFrameValue0;
  float KeyFrameValue1;
  float KeyFrameValue2;
  float KeyFrameValue3;
  float KeyFramePos1;
  float KeyFramePos2;
  float Frequency;
  float Amplitude;
  enum class EModulation {
    Cos = 0,
    Sin = 1,
  };
  EModulation ModFunc;
};

struct CFuncSegment : public CFunc {
  CFuncSegment();

  const uint KeyCount;
};

// File extension: 'FuncColorGradient.Gbx'
struct CFuncColorGradient : public CFunc {
  CFuncColorGradient();

  UnnamedEnum ColorSpace;
  vec3 KeyFrameValue0;
  vec3 KeyFrameValue1;
  vec3 KeyFrameValue2;
  vec3 KeyFrameValue3;
  float KeyFramePos1;
  float KeyFramePos2;
};

// File extension: 'FuncFullColorGradient.Gbx'
struct CFuncFullColorGradient : public CFunc {
  CFuncFullColorGradient();

  vec3 KeyFrameValue0;
  vec3 KeyFrameValue1;
  vec3 KeyFrameValue2;
  vec3 KeyFrameValue3;
  float KeyFramePos1;
  float KeyFramePos2;
};

// File extension: 'FuncClouds.Gbx'
struct CFuncClouds : public CFunc {
  CFuncClouds();

  CFuncCloudsSolids* Solids;
  CPlugFileImg* ImageColorMin;
  CPlugFileImg* ImageColorMax;
  CPlugMaterial* MaterialModelToForce;
  CFuncCloudsParam* CloudsParam;
};

struct CFuncCurvesReal : public CMwNod {
  CFuncCurvesReal();

  MwId Id;
  MwBuffer<float> Xs;
  MwBuffer<CFuncKeysReal*> Curves;
};

struct CFuncCurves2Real : public CMwNod {
  CFuncCurves2Real();

  MwId Id;
  MwBuffer<float> Xs;
  MwBuffer<CFuncCurvesReal*> Curves2;
};

struct CFuncNoise : public CFunc {
  CFuncNoise();

  float ScaleX;
  float ScaleY;
  float ScaleZ;
  float ScaleT;
  float PeriodX;
  float PeriodY;
  float PeriodZ;
  float PeriodT;
  float ValMin;
  float ValMax;
};

struct CFuncDayTime : public CFunc {
  CFuncDayTime();

};

// File extension: 'FuncCloudsParam.Gbx'
struct CFuncCloudsParam : public CFunc {
  CFuncCloudsParam();

  UnnamedEnum HeightCenter;
  vec2 HeightCenterXZ;
  float BottomNearZ;
  MwBuffer<float> PointDists;
  MwBuffer<float> PointHeights;
  float BottomFarZ;
  float SpeedScale;
  UnnamedEnum Lighting;
  bool MaterialUseT3b;
};

// File extension: 'FuncCloudsSolids.Gbx'
struct CFuncCloudsSolids : public CFunc {
  CFuncCloudsSolids();

  vec2 GridSizeXZ;
  const MwBuffer<CPlugSolid*> SolidFids;
};

} // namespace Function

namespace Hms {

struct CHmsCamera : public CHmsPoc {
  CHmsCamera();

  bool PickEnable;
  bool UseViewDependantRendering;
  UnnamedEnum ViewportRatio;
  UnnamedEnum iPrecalcRender;
  iso4 NextLocation;
  void ResetLocation();
  bool IsOverlay3d;
  bool ClearColorEnable;
  vec3 ClearColor;
  bool UseZBuffer;
  bool ScissorEnable;
  bool FovRectEnable;
  bool ClearZBuffer;
  vec2 DrawRectMin;
  vec2 DrawRectMax;
  vec2 ScissorRectMin;
  vec2 ScissorRectMax;
  vec2 FovRectMin;
  vec2 FovRectMax;
  float NearZ;
  float FarZ;
  float Fov;
  float ClampFovX;
  float ClampFovY;
  bool ClampFovAuto;
  float ClampAutoRatioXy;
  float RatioXY;
  CHmsPicker* const Picker;
  const uint GroupIndex;
  float DofFocusZ;
  UnnamedEnum DofLensMode;
  float DofLensFocal;
  float DofLensSize;
  float StereoScreenDist;
  float Desaturate01; // Range: 0 - 1
  float FadeToBlack01; // Range: 0 - 1
  float AsyncPrevDeltaTimeMax;
  float AsyncPrevDeltaRotationScale; // Range: 0 - 1
  float AlphaClipFarZ;
  bool ZClipEnable;
  float ZClipValue;
  float ZClipMargin;
  float ZClipZBuffer1End; // Range: 0 - 1
  float ZClipZBuffer2Start; // Range: 0 - 1
  bool TargetFpsEnable;
  float TargetFpsZClipSpeed; // Range: 0.001 - 1
  float TargetFpsZClipMinValue;
};

struct CHmsCorpus : public CHmsZoneElem {
  CHmsCorpus();

  CHmsItem* const Item;
};

struct CHmsItem : public CMwNod {
  CHmsItem();

  CPlugSolid* Solid;
  CHmsCorpus* const Corpus;
  CMwNod* const SceneMobil;
  bool IsVisionStatic;
  bool IsStatic;
  bool IsBackground;
  bool CopyCameraTranslationXZ;
  bool BackgroundZClipCullBefore;
  bool UseAccurateBBoxTest;
  bool IsForcePointDynamicCollisionResponse;
  const float LightmapQualityScale;
  uint CountShadowTexCasted;
  bool CanSelfShadow;
  bool CanFakeShadow;
  bool CastShadowGrp0;
  bool CastShadowGrp1;
  bool CastShadowGrp2;
  bool CastShadowGrp3;
  bool RecvShadowGrp0;
  bool RecvShadowGrp1;
  bool RecvShadowGrp2;
  bool RecvShadowGrp3;
  CHmsItemShadow* ItemShadow;
  bool LightLensFlareEnable;
  bool LightEGroup0;
  bool LightEGroup1;
  bool LightEGroup2;
  bool LightEGroup3;
  bool VIdReflected;
  bool VIdReflectMirror;
  bool VIdRefracted;
  bool VIdViewDepBump;
  bool VIdViewDepOcclusion;
  bool VIdOnlyRefracted;
  bool VIdHideWhenUnderground;
  bool VIdFoilage;
  bool VIdHideAlways;
  bool VIdHideButPick;
  bool VIdBackground;
  bool VIdGrassRGB;
  bool VIdLightGenP;
  bool VIdVehicle;
  bool VIdHideOnlyDirect;
  bool VIdInvisibleStopBounce;
  bool IsVisible;
};

struct CHmsZone : public CMwNod {
  CHmsZone();

  MwBufferCat<CHmsCorpus*> CorpusCats;
  bool FogByVertex;
  vec3 FogRGB;
  EGxFogFormula FogFormula;
  EGxFogSpace FogSpace;
  float FogLinearStart;
  float FogLinearEnd;
  float FogExpDensity;
  MwBuffer<CHmsPrecalcRender*> PrecalcRenders;
  const MwBufferCat<CHmsCorpusLight*> CorpusLights;
  const MwBuffer<CHmsCorpusLight*> CorpusLightsDyna;
  const MwBuffer<CHmsLightArray*> DynamicLightArrays;
  const MwBuffer<CHmsDecalArray*> DynamicDecalArrays;
  const MwBuffer<CHmsDecalArray*> StaticDecalArrays;
  bool MRMaskWater;
  float MRTileH;
  vec3 MRPoint;
  vec3 MRNormal;
  MwBuffer<vec4> WaterPlaneEqInWs;
  bool IVIdMaskReflected;
  bool IVIdMaskReflectMirror;
  bool IVIdMaskRefracted;
  bool IVIdMaskViewDepBump;
  bool IVIdMaskViewDepOcclusion;
  bool IVIdMaskOnlyRefracted;
  bool IVIdMaskHideWhenUnderground;
  bool IVIdMaskFoilage;
  bool IVIdMaskHideAlways;
  bool IVIdMaskHideButPick;
  bool IVIdMaskBackground;
  bool IVIdMaskGrassRGB;
  bool IVIdMaskLightGenP;
  bool IVIdMaskVehicle;
  bool IVIdMaskHideOnlyDirect;
  bool IVIdMaskInvisibleStopBounce;
  bool IVIdRefReflected;
  bool IVIdRefReflectMirror;
  bool IVIdRefRefracted;
  bool IVIdRefViewDepBump;
  bool IVIdRefViewDepOcclusion;
  bool IVIdRefOnlyRefracted;
  bool IVIdRefHideWhenUnderground;
  bool IVIdRefFoilage;
  bool IVIdRefHideAlways;
  bool IVIdRefHideButPick;
  bool IVIdRefBackground;
  bool IVIdRefGrassRGB;
  bool IVIdRefLightGenP;
  bool IVIdRefVehicle;
  bool IVIdRefHideOnlyDirect;
  bool IVIdRefInvisibleStopBounce;
  bool SVIdMaskReflected;
  bool SVIdMaskReflectMirror;
  bool SVIdMaskRefracted;
  bool SVIdMaskViewDepBump;
  bool SVIdMaskViewDepOcclusion;
  bool SVIdMaskOnlyRefracted;
  bool SVIdMaskHideWhenUnderground;
  bool SVIdMaskFoilage;
  bool SVIdMaskHideAlways;
  bool SVIdMaskHideButPick;
  bool SVIdMaskBackground;
  bool SVIdMaskGrassRGB;
  bool SVIdMaskLightGenP;
  bool SVIdMaskVehicle;
  bool SVIdMaskHideOnlyDirect;
  bool SVIdMaskInvisibleStopBounce;
  bool SVIdRefReflected;
  bool SVIdRefReflectMirror;
  bool SVIdRefRefracted;
  bool SVIdRefViewDepBump;
  bool SVIdRefViewDepOcclusion;
  bool SVIdRefOnlyRefracted;
  bool SVIdRefHideWhenUnderground;
  bool SVIdRefFoilage;
  bool SVIdRefHideAlways;
  bool SVIdRefHideButPick;
  bool SVIdRefBackground;
  bool SVIdRefGrassRGB;
  bool SVIdRefLightGenP;
  bool SVIdRefVehicle;
  bool SVIdRefHideOnlyDirect;
  bool SVIdRefInvisibleStopBounce;
  uint VPackerC3CellX;
  uint VPackerC3CellY;
  uint VPackerC3CellZ;
  const float VPackerPercentCellUsed;
  const float VPackerAverageObjectPerCell;
  const float VPackerAveragePackPerCell;
  const float VPackerAverageKVertPerPack;
  const float VPackerPercentObjectOutside;
  const uint VPackerObjectInside;
  const uint VPackerObjectOutside;
  const uint VPackerNbUnpackableVSpace;
  void VPackerForceBBoxUpdate();
  void VPackerLogUsageStats();
  void ForceUpdate_ReflectLQ();
  void TestDynaSpriteMgr();
  CPlugBitmap* BitmapWaterFog;
  CPlugBitmap* BitmapCubeReflectHardSpecA;
  CPlugBitmap* BitmapCubeReflectHdrAlpha2;
  CMwNod* const UserData;
};

struct CHmsPortal : public CMwNod {
  CHmsPortal();

  bool IsActive;
  bool NeedClipping2D;
  bool NeedClipping3D;
  bool CanSeeThrough;
  float SeeThroughOpacity; // Range: 0 - 1
  bool IsVisualVisible;
  bool IsPickingPossible;
  bool CanPassThrough;
  bool SoundCanPassThrough;
  bool IsDirectPathSet;
  int DirectOcclusion;
  float DirectOcclusionSpectralRatio;
  float DirectOcclusionRatio;
  int IndirectOcclusion;
  float IndirectOcclusionSpectralRatio;
  float IndirectOcclusionRatio;
  int IndirectObstruction;
  float IndirectObstructionSpectralRatio;
};

struct CHmsPoc : public CHmsZoneElem {
  CHmsPoc();

  bool IsActive;
};

struct CHmsZoneElem : public CMwNod {
  CHmsZoneElem();

  CHmsZone* const Zone;
  iso4 Location;
  vec3 Vel;
};

struct CHmsZoneOverlay : public CHmsZone {
  CHmsZoneOverlay();

  bool IsVisible;
  enum class EnablePick {
    Disabled = 0,
    Foreground = 1,
    Always = 2,
  };
  EnablePick PickEnableMode;
  const uint SortOrder;
  UnnamedEnum AdaptRatio;
  bool UseZBuffer;
  vec2 DrawRectMin;
  vec2 DrawRectMax;
  vec3 FrustumCenter;
  vec3 FurstrumHfDiag;
  bool DescIsClearColorEnable;
  bool DescIsClearDepthEnable;
  bool DescIsClearStencilEnable;
  vec3 DescClearColor;
  MwBuffer<CHmsCorpus*> CorpusVisibles;
  UnnamedEnum RectContext;
  CHmsCamera* In3d_Camera;
  bool StickToHmd;
};

struct CHmsLight : public CHmsPoc {
  CHmsLight();

  UnnamedEnum UpdateType;
  GxLight* const MainGxLight;
  CPlugBitmap* BitmapFlare;
  CPlugBitmap* BitmapSprite;
  CPlugBitmap* BitmapProjector;
  CHmsCorpusLight* CorpusLight;
  CHmsItem* const ItemContainer;
  bool ForceShadowGroup;
  uint ForceShadowGroupIndex;
  bool NeverSkipShadow;
};

struct CHmsPortalProperty : public CMwNod {
  CHmsPortalProperty();

  CHmsPortal* const Portal1;
  CHmsPortal* const Portal2;
  bool Visibility;
  bool Audibility;
};

struct CHmsCorpusLight : public CHmsZoneElem {
  CHmsCorpusLight();

  CHmsLight* Light;
};

struct CHmsViewport : public CMwNod {
  enum class ERenderDevice {
    PC0 = 0,
    PC1 = 1,
    PC2 = 2,
    PC3 = 3,
  };
  enum class EPC3Quality {
    VeryFast = 0,
    Fast = 1,
    Nice = 2,
    VeryNice = 3,
    Ultra = 4,
  };
  enum class EBitmapQuality {
    PC0 = 0,
    PC1 = 1,
    PC2 = 2,
    PC3 = 3,
  };
  const wstring DisplayName;
  const uint cPixelSwapX;
  const uint cPixelSwapY;
  const uint cPixelSwapHudX;
  const uint cPixelSwapHudY;
  ERenderDevice DeviceKind;
  uint iSubDevice;
  EPC3Quality PC3_Quality;
  EBitmapQuality BitmapQuality;
  UnnamedEnum MultiSampleType;
  UnnamedEnum DeferredAA;
  uint DisplaySyncIntervalCount;
  bool EnableTripleBuffer;
  bool ArePortalsActive;
  uint PortalMaxRecur;
  bool IsPickingPossible;
  vec2 LimitRectMin;
  vec2 LimitRectMax;
  const uint TimeTickToPresent;
  const uint TimeQueryIssueToFinish;
  bool TargetFpsEnable;
  uint TargetFps;
  float TargetFpsMinScaleZ; // Range: 0.001 - 1
  float TargetFpsMaxScaleZ; // Range: 1 - 50
  float TargetFpsSpeed; // Range: 0.001 - 1
  const float AverageFps;
  float MipScaleZ_SysConfig;
  float MipScaleZ_Production;
  const float MipScaleZ;
  UnnamedEnum TextureRender;
  UnnamedEnum RenderShadows;
  UnnamedEnum RenderProjectors;
  bool PreLoadProjectors;
  bool EnableLightFlares;
  bool RenderZoneVPacker;
  bool EnableTessellation;
  bool IsPureDevice;
  float FullScreenBrightness; // Range: -1 - 1
  float FullScreenContrast; // Range: -1 - 1
  float FullScreenGamma; // Range: -1 - 1
  const MwBuffer<wstring> DisplayNames;
  const wstring ScreenShotFullName;
  bool ScreenShotForceRes;
  uint ScreenShotWidth;
  uint ScreenShotHeight;
  uint ScreenShot360_Height;
  bool ScreenShotUseAlpha;
  uint ScreenShotTileX;
  uint ScreenShotTileY;
  UnnamedEnum ScreenShot360;
  UnnamedEnum PixelOutput;
  void ScreenShotDoCaptureWebp();
  void ScreenShotDoCaptureTga();
  void ScreenShotDoCaptureJpg();
  void ScreenShotDoCaptureDDS();
  void ShaderConstantLogBindedValues();
  MwBuffer<CHmsZoneOverlay*> Underlays;
  MwBuffer<CHmsCamera*> Cameras;
  MwBuffer<CHmsZoneOverlay*> Overlays;
  CSystemConfig* SystemConfig;
  CSystemWindow* const SystemWindow;
  CHmsPicker* const Picker;
  CHmsConfig* Config;
  CHmsAmbientOcc* HmsAmbientOcc;
  UnnamedEnum AmbientOcc;
  bool MgrParticle_UseCameraMotion;
  bool MgrParticle_PauseKeepCameraMotion;
};

struct CHmsPrecalcRender : public CMwNod {
  CHmsPrecalcRender();

  CPlugBitmap* BitmapRGB;
  CPlugBitmap* BitmapDepth;
  enum class EBitmapDepth {
    Linear = 0,
    ZBuffer = 1,
  };
  EBitmapDepth BitmapDepthMode;
  string TreeIdDepthGen;
  const bool IsTreeDepthGenFound;
  float ZoomFactor;
  float ScrollPosX; // Range: -1 - 1
  float ScrollPosY; // Range: -1 - 1
};

struct CHmsShadowGroup : public CMwNod {
  CHmsShadowGroup();

  uint TexelCountX;
  uint TexelCountY;
  uint MaxShadowCountGrp0;
  float MappingQuality;
  float MaxTexelPerMeter;
  bool Enable;
  bool EnableLightDir;
  bool EnableLightPos;
  bool GameAllowLightDir;
  bool GameAllowLightPos;
  float LocalIntensity; // Range: 0 - 1
  bool NeedSelfShadow;
  bool ForceShadowMask;
  bool DepthNeed32b;
  bool IsStatic;
  bool IsStaticDirty;
  bool ForceWorldAlign;
  bool UseHqCasterBBox;
  bool AllStaticItemAreCaster;
  bool ShadowInShader;
  bool TmBackgroundReceives;
  bool TmBackgroundCast;
  bool DepthTestMaskRender;
  UnnamedEnum DepthBiasScale;
  uint DepthBiasConst;
  float DepthBiasSlope;
  float DepthBiasConstShaderExtra;
  float ShadeSlope; // Range: 0 - 1
  float Soft2dSlope; // Range: 0 - 2
  vec2 SoftSizeInW;
  float OpacityMipMapLodBias;
  uint MaskBlurTexelCount;
  uint PssmTexelCountX;
  uint PssmTexCount;
  const uint PssmTexCountActive;
  float PssmOverlapIn01; // Range: 0 - 1
  float PssmDistNF0;
  float PssmDistNF1;
  float PssmDistNF2;
  float PssmDistNF3;
  float PssmDistNF4;
  float PssmDistScale;
  float PssmSkipCmpStaticScale;
};

struct CHmsViewportPerfDbg : public CMwNod {
  bool UseAverage;
  bool ShowMem;
  bool ForceOcclusion;
  UnnamedEnum ShowFps;
  UnnamedEnum Profile;
  UnnamedEnum SumUp;
  UnnamedEnum VisionSkip;
  bool SmallShader;
  bool SmallScissor;
  bool DebugParticle;
  UnnamedEnum FillForced;
  bool IsFillRateZTestEnable;
  bool IsFillRateStencilTestEnable;
  bool IsFillRateNoMipMapEnable;
  bool IsFillRateLegendEnable;
};

struct CHmsMgrVisDyna : public CMwNod {
};

struct CHmsFogPlane : public CHmsZoneElem {
  CHmsFogPlane();

};

struct CHmsPicker : public CMwNod {
  CHmsPicker();

  bool IsEnable;
  const vec2 InputPos;
  CHmsCamera* const Camera;
  CHmsZoneOverlay* const Overlay;
  const vec2 PosRect;
  const vec3 RayDir;
  const vec3 RayPos;
  const uint In3dQuadIndex;
  CMwNod* const PickedSceneMobil;
  CHmsCorpus* const Corpus;
  CPlugTree* const Tree;
  CPlugSolid2Model* const Solid2Model;
  const uint VisDynaHandle;
  const vec3 PickPosV;
  const vec3 PickPosZ;
  const vec3 PickNormalV;
  const vec3 PickNormalZ;
  const float PickZ;
  const float PickZNoBiasZ;
  const float Depth;
};

struct CHmsConfig : public CMwNod {
  CHmsConfig();

  bool FreezeViewportRun;
  uint ViewportRunFrameCount;
  const uint ViewportRunFrameRemaining;
  const MwArray<CHmsShadowGroup*> ShadowGroups;
};

struct CHmsItemShadow : public CMwNod {
  CHmsItemShadow();

  float Intensity; // Range: 0 - 1
  float FallOffStart;
  float FallOffEnd;
  float VolumeMaxZ;
  CHmsShadowGroup* GroupOverride;
};

// File extension: 'LightMap.Gbx'
struct CHmsLightMap : public CMwNod {
  CHmsLightMap();

};

struct CHmsLightMapCache : public CMwNod {
  CHmsLightMapCache();

};

// File extension: 'LightMapMood.Gbx'
struct CHmsLightMapMood : public CMwNod {
  CHmsLightMapMood();

};

struct CHmsCorpus2d : public CHmsCorpus {
  CHmsCorpus2d();

  uint ClipRectIndex;
  uint In3dQuadIndex;
};

struct CHmsAmbientOcc : public CMwNod {
  CHmsAmbientOcc();

};

struct CHmsLightProbeGrid : public CMwNod {
};

struct CHmsLightMapCacheSH : public CMwNod {
  CHmsLightMapCacheSH();

};

struct CSceneMgrDyna : public CSceneMgrPhy {
};

struct CHmsCollZone : public CMwNod {
  CHmsCollZone();

  void UpdateStatic();
  uint AllocatedByteCount;
  uint GetUsedByteCount;
  const uint cItemStatic;
  const uint cItemContinuous;
  const uint cItemDiscrete;
  const uint cSurfaceStatic;
  const uint cSurfaceContinuous;
  const uint cSurfaceDiscrete;
  vec3 WarpExclusionBoxCenter;
  vec3 WarpExclusionBoxHalf;
  SHmsNavMeshBuildParam m_PathFinding_m_NavMeshBuildParam;
};

struct CHmsLightMapParam : public CMwNod {
  CHmsLightMapParam();

};

struct CHmsLightArray : public CMwNod {
  CHmsLightArray();

};

struct CHmsDecalArray : public CMwNod {
  CHmsDecalArray();

};

struct CHmsLightProbePartition : public CMwNod {
};

struct CHmsMgrVisEnvMap : public CMwNod {
};

struct CHmsMgrVisDynaDecal2d : public CMwNod {
};

struct CHmsMgrVisParticle : public CMwNod {
};

struct CHmsVisMiniMap : public CMwNod {
};

struct CHmsCollType_Warp : public CMwNod {
};

struct CHmsCollType_VehicleVisForBodyPart : public CMwNod {
};

struct CHmsMoodBlender : public CMwNod {
};

struct CHmsMgrVisVolume : public CMwNod {
  CPlugBitmap* const Fog3D_BitmapColor;
};

struct CHmsLightMapCpt : public CMwNod {
  bool ShowOverlap;
};

} // namespace Hms

namespace Control {

struct CControlBase : public CSceneToy {
  void Draw();
  void Clean();
  UnnamedEnum AlignHorizontal;
  UnnamedEnum AlignVertical;
  CControlStyle* Style;
  bool IsReadOnly;
  bool AddFocusArea;
  bool DrawBackground;
  bool InheritVisualStyle;
  bool KeepFocusWeak;
  const uint ClipRectAllocatedIndex;
  const uint ClipRectCurrentIndex;
  bool DisableI18n;
  const bool HasSolid;
  bool IsSubSolid;
  bool IsDynamic;
  bool IsFocused;
  bool IsSelected;
  bool IsHiddenExternal;
  const bool IsVisualFocus;
  const bool IsVisualSelect;
  CControlContainer* const Parent;
  CMwNod* Nod;
  string StackText;
  wstring ToolTip;
  const bool IsHiddenInternal;
  const bool IsFocusCaptured;
  const bool IsUpdateNodNeeded;
  bool IsCreatedByScript;
  CPlugTree* ControlDisplayTree;
  CPlugTree* ControlDrawTree;
  vec2 BoxMin;
  vec2 BoxMax;
  CControlLayout* Layout;
  const float ClipLength;
  void OnAction();
};

struct CControlContainer : public CControlBase {
  MwArray<CControlBase*> Childs;
  bool IsClippingContainer;
  CMwCmdBlockMain* CreateScript;
  bool UseScript;
  bool AcceptOwnControls;
  CControlBase* AddControl(string Id, vec3 Position, string Label, CMwNod* Nod, string Stack, string Type, CControlStyle* Style);
  CControlBase* AddInstance(CControlBase* Model, string Id, vec3 Position);
  CControlLabel* AddLabel(string Id, vec3 Position, string Label, CControlStyle* Style);
  CControlButton* AddButtonScript(string Id, vec3 Position, string Label, CMwCmdBlockMain* Script, CControlStyle* Style);
  void RemoveControl(CControlBase* Control);
};

struct CControlEffect : public CMwNod {
};

struct CControlLabel : public CControlText {
  CControlLabel();

  wstring Label;
  CPlugBitmap* Bitmap;
  CPlugShaderApply* ExternalShader;
  vec3 ImageColor;
  float ImageAlpha; // Range: 0 - 1
  bool DontDrawText;
};

struct CControlButton : public CControlText {
  CControlButton();

  wstring Label;
  CPlugSound* ActionSound;
  CFuncEnum* Icons;
  UnnamedEnum DisplayType;
  CMwCmdBlockMain* ActionScript;
  uint SubIconIndexOff;
  uint SubIconIndexOn;
  string IconId;
};

struct CControlEntry : public CControlText {
  CControlEntry();

  wstring String;
  uint MaxLength;
  UnnamedEnum Type;
  bool IsPassword;
  bool IsNewPassword;
  bool SetValueOnFocusLost;
  bool SelectAllOnFocusGained;
};

struct CControlEnum : public CControlText {
  CControlEnum();

  CFuncEnum* FuncEnum;
  bool IsLooping;
  UnnamedEnum DisplayType;
  void Incr();
  void Decr();
  uint EnumIndex;
  const string EnumString;
};

struct CControlSlider : public CControlBase {
  CControlSlider();

  enum class EAxis {
    X = 0,
    Y = 1,
  };
  EAxis Axis;
  float Ratio;
  MwId IconIdBar;
  MwId IconIdCursor;
  bool AutoSize;
};

// File extension: 'ControlLayout.Gbx'
struct CControlLayout : public CMwNod {
  CControlLayout();

  UnnamedEnum AlignHorizontal;
  UnnamedEnum AlignVertical;
  float RatioHorizontal;
  float RatioVertical;
  float PaddingHorizontal;
  float PaddingVertical;
};

// File extension: 'ListItem.Gbx'
struct CControlListItem : public CMwNod {
  CControlListItem();

  const string Str1;
  const string Str2;
  const string Str3;
  const string Str4;
  const string Str5;
  const string Str6;
  const string Str7;
  const wstring StrInt1;
  const wstring StrInt2;
  const wstring StrInt3;
  const wstring StrInt4;
  const uint Nat1;
  const uint Nat2;
  const uint Nat3;
  const uint Nat4;
  const uint Nat5;
  const uint Nat6;
  const uint Time1;
  const uint Time2;
  const uint Time3;
  const float Real1;
  const float Real2;
  const float Real3;
  vec2 MapCoordOrigin;
  vec2 MapCoordTarget;
  CMwNod* const Nod1;
  CMwNod* const Nod2;
  CMwNod* const Nod3;
  bool IsSelected;
};

// File extension: 'ControlEffect.Gbx'
struct CControlEffectSimi : public CControlEffect {
  CControlEffectSimi();

  bool IsInterpolated;
  bool Centered;
  UnnamedEnum ColorBlendMode;
  bool IsContinousEffect;
  const uint KeyCount;
  uint CurrentKey;
  void InsertKey();
  void RemoveKey();
  float Time;
  float Rot;
  vec2 Pos;
  vec2 Scale;
  float Depth;
  float Opacity;
  float ColorBlend;
  vec3 Color;
};

// File extension: 'ControlEffect.Gbx'
struct CControlEffectMotion : public CControlEffect {
  CControlEffectMotion();

  CPlugParticleEmitterModel* ParticleEmitterModel;
  MwId ParticleEmitterId;
  float Period;
  CFuncEnvelope* Envelope;
  float EnveloppePosStart;
  float EnveloppePosCharged;
  float IntensityStart;
  float IntensityCharged;
  float SpeedStart;
  float SpeedCharged;
  vec3 SpeedDirection;
  float ChargeTime;
  vec3 EmitterPosOffset;
};

struct CControlUiRange : public CControlBase {
  CControlUiRange();

  float BlockOverlapRatio; // Range: 0 - 1
  float BackgroundMargin; // Range: 0 - 1
  bool DrawBackground;
  bool DrawBlockBackground;
  MwId IconId;
  bool CenteredBar;
  vec3 Color;
  float ColorAlpha; // Range: 0 - 1
  vec3 Color2;
  float Color2Alpha; // Range: 0 - 1
  float Ratio; // Range: 0 - 1
  uint UnitMax;
  uint Unit1;
  uint Unit2;
  float GradingRatio;
  float Scaling; // Range: 0.1 - 10
  bool LastGradingIsGhostlike;
  void CreateTranslate(vec3 StartPoint, vec3 EndPoint);
  void CreateRotate(vec3 Axis, float MinAngle, float MaxAngle);
};

struct CControlGrid : public CControlContainer {
  CControlGrid();

  MwArray<vec2> ChildsSquares;
  MwArray<string> ChildsSquaresParam;
  CControlLayout* MainLayout;
  bool PackEmptyRows;
  float ForceColumnsUniformWidth;
  float ForceRowsUniformHeight;
  MwBuffer<float> ForceColumnsWidths;
  float HorizontalSkewOffset;
  float VerticalSkewOffset;
  bool PagedGrid_Enable;
  uint PagedGrid_NbLinesPerPage;
  uint PagedGrid_FastPageStep;
  uint CurrentPage;
  uint PageCount;
  void OnNextPage();
  void OnPrevPage();
  void OnFastPrevPage();
  void OnFastNextPage();
  void OnFirstPage();
  void OnLastPage();
};

// File extension: 'Frame.Gbx'
struct CControlFrame : public CControlContainer {
  CControlFrame();

  MwArray<iso4> ChildsRelativeLocations;
};

// File extension: 'ControlStyle.Gbx'
struct CControlStyle : public CPlug {
  CControlStyle();

  CPlugFont* Font;
  float FontHeight;
  float FontRatioXY;
  UnnamedEnum LabelColorFromPalette;
  vec3 LabelColor;
  float LabelColorAlpha; // Range: 0 - 1
  bool LabelForceEmbossed;
  bool LabelDisableSqueeze;
  wstring LabelCharAttributes;
  UnnamedEnum EditableColorFromPalette;
  vec3 EditableColor;
  float EditableColorAlpha; // Range: 0 - 1
  bool EditableForceEmbossed;
  bool EditableDisableSqueeze;
  wstring EditableCharAttributes;
  UnnamedEnum GrayedColorFromPalette;
  vec3 GrayedColor;
  float GrayedColorAlpha; // Range: 0 - 1
  bool GrayedForceEmbossed;
  bool GrayedDisableSqueeze;
  wstring GrayedCharAttributes;
  bool FitTextSize;
  float Skew; // Range: -1 - 1
  CPlugShader* DefaultShader;
  CMwCmdBlockMain* FocusGainedScript;
  CMwCmdBlockMain* FocusLostScript;
  CPlugSound* FocusSound;
  CPlugSound* ActionSound;
  CPlugSound* ActionBackSound;
  CFuncEnum* ButtonDefaultIcons;
  MwId ButtonDefaultIconId;
  float ButtonIconWidth;
  float ButtonIconHeight;
  CPlugShader* EnumSound;
  CPlugShader* EnumListShader;
  uint EnumMaxElemCount;
  float EnumIconWidth;
  float EnumIconHeight;
  UnnamedEnum EnumForceDisplayType;
  CFuncEnum* EnumForceIcons;
  float QuadZ;
  bool QuadIsLines;
  bool QuadIsFill;
  float QuadZLines;
  vec3 QuadGradientColor0;
  float QuadGradientColor0Alpha; // Range: 0 - 1
  vec3 QuadGradientColor1;
  float QuadGradientColor1Alpha; // Range: 0 - 1
  vec3 LineGradientColor0;
  float LineGradientColor0Alpha; // Range: 0 - 1
  vec3 LineGradientColor1;
  float LineGradientColor1Alpha; // Range: 0 - 1
  vec3 QuadLinesColor;
  float QuadLinesColorAlpha; // Range: 0 - 1
  vec2 Quad_UvTopLeft;
  vec2 Quad_UvBottomRight;
  float SliderBarWidth;
  float SliderBarHeight;
  float SliderCursorWidth;
  float SliderCursorHeight;
  CFuncEnum* SliderBarIcons;
  CFuncEnum* SliderCursorIcons;
  CPlugSound* SliderSound;
  bool FocusAreaEnable;
  CPlugMaterial* FocusAreaMaterial;
  CPlugMaterial* FocusAreaMaterialReadOnly;
  CPlugMaterial* FocusAreaMaterialSelected;
  CPlugMaterial* FocusAreaMaterialFocused;
  float FocusAreaMinWidth;
  float FocusAreaMinHeight;
  float FocusAreaXMargin;
  float FocusAreaYMargin;
  float FocusAreaZOffset;
  CPlugSolid* FocusAreaSolid;
  CControlEffectMaster* EffectMaster;
};

// File extension: 'ControlUrlLinks.Gbx'
struct CControlUrlLinks : public CControlBase {
  CControlUrlLinks();

  void ForceDirty();
  uint CurFocusedLink;
};

struct CControlQuad : public CControlBase {
  CControlQuad();

  bool IsLines;
  bool IsFill;
  UnnamedEnum GradientDir;
  MwId IconId;
  vec3 IconVertexColors;
  float IconVertexAlpha; // Range: 0 - 1
};

// File extension: 'ControlEffectMaster.Gbx'
struct CControlEffectMaster : public CMwNod {
  CControlEffectMaster();

  CControlEffect* FocusEffect;
  CControlEffect* FocusGainedEffect;
  CControlEffect* FocusLostEffect;
  CControlEffect* FocusGainedByAnotherEffect;
  CControlEffect* FocusLostByAnotherEffect;
  CControlEffect* SleepingEffect;
  CControlEffect* ShowingEffect;
  CControlEffect* HidingEffect;
  CControlEffect* ActionEffect;
  CControlEffect* ManagedEffect;
  bool UseRefBBox;
  bool ShowActivated;
  bool HideActivated;
  CMwRefBuffer* SpecialEffect;
};

struct CControlColorChooser : public CControlFrame {
  CControlColorChooser();

  UnnamedEnum StyleType;
  vec2 ColorChooserSize;
  vec3 Color;
  const float Hue; // Range: 0 - 1
  CPlugShader* ColorChooserShader;
};

struct CControlColorChooser2 : public CControlFrame {
  CControlColorChooser2();

  vec3 Color;
  CControlColorChooser* const ColorChooserHue;
  CControlColorChooser* const ColorChooserSV;
};

struct CControlSimi2 : public CMwNod {
  CControlSimi2();

  float PosX;
  float PosY;
  float Rot;
  float ScaleX;
  float ScaleY;
};

struct CControlTimeLine2 : public CControlBase {
  CControlTimeLine2();

  uint TrackCount;
  uint TrackStart;
  float TimeMin;
  float TimeMax;
  float RulerLength;
  float Width;
  float Height;
  float TrackHeight;
  float BlockHeight;
  float RulerHeight;
  float TimeCursorWidth;
  float TimeCursorHeight;
  float KeyHeight;
  float KeyWidth;
  float KeyHighLightHeight;
  float KeyHighLightWidth;
  vec3 RulerLinesColorBig;
  vec3 RulerLinesColorSmall;
  vec3 TrackSeparationColor;
  vec3 BlockColor;
  vec3 TimeCursorLineColor;
  vec3 BgColor;
  vec3 RulerBgColor;
  vec3 BlockHighLightColor;
  vec3 KeyColor;
  vec3 KeyHighLightColor;
  vec3 KeyFocusColor;
  vec3 DeadZoneColor;
  void CreateSampleData();
  float Time;
};

// File extension: 'ControlEffect.Gbx'
struct CControlEffectCombined : public CControlEffect {
  CControlEffectCombined();

  CMwRefBuffer* Effects;
};

// File extension: 'ControlEffectMoveFrame.Gbx'
struct CControlEffectMoveFrame : public CControlEffect {
  CControlEffectMoveFrame();

  vec2 DefaultShift;
  float Period;
  void AddChildShift();
  void RemoveChildShift();
  bool IsInverse;
  vec3 AngleFrom;
};

// File extension: 'FrameStyled.Gbx'
struct CControlFrameStyled : public CControlFrame {
  CControlFrameStyled();

  CControlStyleSheet* StyleSheet;
};

// File extension: 'StyleSheet.Gbx'
struct CControlStyleSheet : public CPlug {
  CControlStyleSheet();

  CMwRefBuffer* Buffer;
  CControlStyle* MasterStyle;
  MwBuffer<CMwNod*> Overrides;
  CControlStyle* PagerIconStyle;
  CControlStyle* PagerTextStyle;
  CControlStyle* PagerTextBackgroundStyle;
  MwArray<vec3> Colors;
  MwArray<float> ColorsAlpha;
};

struct CControlMediaPlayer : public CControlFrame {
  CControlMediaPlayer();

  CPlugFileSnd* const MediaAudio;
  CPlugFileVideo* const MediaVideo;
};

struct CControlGraph : public CControlBase {
  CControlGraph();

  vec2 ValuesMin;
  vec2 ValuesMax;
  uint SampleCount;
  bool SampleKeys;
  MwBuffer<CFuncKeysReal*> Curves;
};

// File extension: 'Pager.Gbx'
struct CControlPager : public CControlFrame {
  CControlPager();

  string StackPageCountText;
  bool UseCounter;
  bool UseCounterQuadBackground;
  bool UseUpDown;
  bool UseFastPrevNext;
  bool UseFirstLast;
  uint FastPrevNextIncrement;
  CControlLabel* LabelPageCounter;
  CControlQuad* QuadPageCounter;
  CControlButton* ButtonPrevPage;
  CControlButton* ButtonNextPage;
  CControlButton* ButtonFastPrevPage;
  CControlButton* ButtonFastNextPage;
  CControlButton* ButtonFirstPage;
  CControlButton* ButtonLastPage;
  void OnPrevPage();
  void OnNextPage();
  void OnFastPrevPage();
  void OnFastNextPage();
  void OnFirstPage();
  void OnLastPage();
};

struct CControlText : public CControlBase {
  float ClipLength;
  int MaxLine;
  UnnamedEnum TextMode;
  CPlugTree* const TextTree;
};

// File extension: 'FrameAnimated.Gbx'
struct CControlFrameAnimated : public CControlFrame {
  CControlFrameAnimated();

  float ScrollVerticalDistance;
  float ScrollHorizontalDistance;
  float ScrollPeriod;
  float ScrollCycleTime;
  bool DoScrolling;
  float ScrolledVerticalDistance;
  float ScrolledHorizontalDistance;
  float ScrollVerticalHistory;
  float ScrollHorizontalHistory;
};

struct CControlScriptEditor : public CControlBase {
  CControlScriptEditor();

  wstring Text;
  bool ShowLineNumbers;
  vec3 ShowLineNuKeywordColormbers;
  vec3 OperatorColor;
  vec3 ConstantColor;
  vec3 CommentColor;
  vec3 ClassNameColor;
  vec3 IdentColor;
  vec3 OthersColor;
  vec3 DirectiveColor;
  vec3 UnexpectedColor;
  string Colors;
};

struct CControlScriptConsole : public CControlBase {
  CControlScriptConsole();

  const wstring HistoryText;
};

struct CControlListCard : public CControlFrame {
  CControlListCard();

  uint NbLinesPerPage;
  uint NbColumnsPerPage;
  uint FastPageStep;
  vec2 GridSize;
  bool Transpose;
  bool AllowMultipleSelection;
  uint CurrentPage;
  uint PageCount;
  void OnNextPage();
  void OnPrevPage();
  void OnFastPrevPage();
  void OnFastNextPage();
  void OnFirstPage();
  void OnLastPage();
  MwBuffer<CControlBase*> CardsModels;
  const MwBuffer<CControlBase*> ListCards;
};

struct CControlMiniMap : public CControlBase {
};

struct CControlCamera : public CControlBase {
};

} // namespace Control

namespace Motion {

struct CMotion : public CMwNod {
};

struct CMotionFunc : public CMotionTrack {
  CMotionFunc();

  CMwNod* Func;
};

struct CMotions : public CMotion {
  CMotions();

  const MwArray<CMwNod*> Motions;
};

struct CMotionCmdBase : public CMwCmd {
  CMotionCmdBase();

  float Period;
  float Phase;
  const float Value;
  enum class EWave {
    Sin = 0,
    Triangle = 1,
    Square = 2,
    SawTooth = 3,
    InverseSawTooth = 4,
  };
  EWave WaveType;
  bool IsOnce;
  const float NormedValue;
  bool IsAbsolutePhase;
  const uint LoopCount;
  CMotionCmdBaseParams* CmdBaseParams;
};

// File extension: 'MotionTrackShader.Gbx'
struct CMotionShader : public CMotionTrack {
  CMotionShader();

};

// File extension: 'MotionBase.Gbx'
struct CMotionCmdBaseParams : public CMwNod {
  CMotionCmdBaseParams();

  enum class ETimeUnit {
    mSecond = 0,
    Second = 1,
    Minute = 2,
    Hour = 3,
    Day = 4,
  };
  ETimeUnit TimeUnit;
  float Period;
  float Phase;
};

struct CMotionTrack : public CMwCmdContainer {
  CMotionTrack();

  CMwNod* const Owner;
};

struct CMotionPlayer : public CMotion {
  CMotionPlayer();

  void Play();
  void Pause();
  void Stop();
  const bool IsPlaying;
  CMotionCmdBase* Base;
  float BaseValue;
  enum class EPlayState {
    Playing = 0,
    Paused = 1,
    Stopped = 2,
    Current = 3,
  };
  EPlayState SavePlayState;
  const MwArray<CMotionTrack*> Tracks;
  bool IsPhysics;
};

struct CMotionLight : public CMotionTrack {
  CMotionLight();

  CFuncLight* FuncLight;
};

struct CMotionTrackTree : public CMotionTrack {
  CMotionTrackTree();

  CPlugTree* const Tree;
  CFuncTree* FuncTree;
};

} // namespace Motion

namespace Plug {

struct CPlugAudio : public CPlug {
};

struct CPlugShader : public CPlug {
};

// File extension: 'Crystal.Gbx'
struct CPlugCrystal : public CPlugTreeGenerator {
  CPlugCrystal();

  const uint CrystalVertexCount;
  const uint CrystalEdgeCount;
  const uint CrystalFaceCount;
};

struct CPlugShaderGeneric : public CPlugShader {
};

struct CPlugSolid : public CPlug {
  CPlugSolid();

};

// File extension: 'Visual.Gbx'
struct CPlugVisual : public CPlug {
  void Inverse();
  bool IsGeometryStatic;
  const bool IsGeometryDynaPart;
  bool IsIndexationStatic;
  bool OptimizeInVision;
  bool UseVertexNormal;
  bool UseVertexColor;
  const bool UseUvGroup;
  const uint cBone;
};

struct CPlugBitmapHighLevel : public CSystemNodWrapper {
  CPlugBitmapHighLevel();

  UnnamedEnum Mode;
  uint BlurTexelCount;
  uint Width;
  uint Height;
  iso4 CameraToWorld;
  float CameraFovY;
  float CameraRatioXY;
  float CameraNearZ;
  float CameraFarZ;
};

struct CPlugVisualIndexedLines : public CPlugVisualIndexed {
  CPlugVisualIndexedLines();

};

struct CPlugVisualOctree : public CMwNod {
};

struct CPlugBitmapRenderShadow : public CPlugBitmapRender {
  CPlugBitmapRenderShadow();

};

// userName: 'Shape'
// File extension: 'Shape.Gbx'
struct CPlugSurface : public CPlug {
  CPlugSurface();

  MwBuffer<CPlugMaterial*> m_Materials;
  CPlugSkel* m_Skel;
  void UpdateSurfMaterialIdsFromMaterialIndexs();
  surf m_GmSurf;
};

// File extension: 'PlugModelShading.Gbx'
struct CPlugModelShading : public CMwNod {
  CPlugModelShading();

  CPlugFileImg* DefaultImage_Diffuse;
  CPlugFileImg* DefaultImage_DiffuseOpacity;
  CPlugFileImg* DefaultImage_BaseColor;
  CPlugFileImg* DefaultImage_BaseColorOpacity;
  CPlugFileImg* DefaultImage_Specular;
  CPlugFileImg* DefaultImage_Normal;
  CPlugFileImg* DefaultImage_Energy;
  CPlugFileImg* DefaultImage_TeamMask;
  CPlugFileImg* DefaultImage_SelfIllum;
  CPlugFileImg* DefaultImage_Damage;
  CPlugFileImg* DefaultImage_Dirt;
  CPlugFileImg* DefaultImage_Shield;
  CPlugFileImg* DefaultImage_RoughMetal;
  CPlugMaterial* MaterialDyna0_ZOnly_Water;
  CPlugMaterial* MaterialDyna0_TDSNI;
  CPlugMaterial* MaterialDyna0_TI;
  CPlugMaterial* MaterialDyna0_TI_AddModCV;
  CPlugMaterial* MaterialDyna0_TDSNE;
  CPlugMaterial* MaterialDyna0_TE;
  CPlugMaterial* MaterialDyna0_TIce;
  CPlugMaterial* MaterialDyna0_TShield;
  CPlugMaterial* MaterialStatic_TDSN;
  CPlugMaterial* MaterialStatic_TDOSN;
  CPlugMaterial* MaterialStatic_TDOBSN;
  CPlugMaterial* MaterialStatic_TDSNE;
  CPlugMaterial* MaterialStatic_TDSNI;
  CPlugMaterial* MaterialStatic_TDSNI_Night;
  CPlugMaterial* MaterialStatic_TIAdd;
  CPlugMaterial* MaterialChar_TDSNEM;
  CPlugMaterial* MaterialChar_TE;
  CPlugMaterial* MaterialChar_TDOSNEM;
  CPlugMaterial* MaterialChar_TDOSN;
  CPlugMaterial* MaterialChar_TDOSN2Sided;
  CPlugMaterial* MaterialChar_TDOS;
  CPlugMaterial* MaterialChar_Part;
  CPlugMaterial* MaterialChar_Body;
  CPlugMaterial* MaterialFid_Char_Shield;
  CPlugMaterial* MaterialFid_Char_Teleport;
  CPlugMaterial* MaterialFid_Char_ActionMakerOtherFrames;
  CPlugMaterial* MaterialFid_Char_ShowEnergy;
  CPlugLight* LightFid_Char_FakeShadowProj;
  CPlugMaterial* MaterialFid_Vehicle_Shield;
  CPlugMaterial* MaterialFid_Vehicle_Teleport;
  CMwNod* MaterialRemapFid;
  CPlugMaterial* MaterialVehicle_Skin;
  CPlugMaterial* MaterialVehicle_SkinDmg;
  CPlugMaterial* MaterialVehicle_SkinNoSkelDmg;
  CPlugMaterial* MaterialVehicle_Details;
  CPlugMaterial* MaterialVehicle_DetailsDmg;
  CPlugMaterial* MaterialVehicle_DetailsDmgNormal;
  CPlugMaterial* MaterialVehicle_DetailsNoSkelDmg;
  CPlugMaterial* MaterialVehicle_Glass;
  CPlugMaterial* MaterialVehicle_GlassDmg;
  CPlugMaterial* MaterialVehicle_GlassDmgCrack;
  CPlugMaterial* MaterialVehicle_GlassNoSkelDmg;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dStation;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dBoxCase;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dMetal;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dGlass;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dLight;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dTransp;
};

struct CPlugSurfaceGeomDeprecated : public CPlug {
  CPlugSurfaceGeomDeprecated();

};

struct CPlugVisualSprite : public CPlugVisual3D {
  CPlugVisualSprite();

  const bool UseTextureAtlas;
  const bool SpriteIndexTC1;
  CPlugSpriteParam* const SpriteParam;
  CPlugBitmapAtlas* const BitmapAtlas;
};

// File extension: 'Texture.Gbx'
struct CPlugBitmap : public CPlug {
  CPlugBitmap();

  enum class ERenderTech {
    Unknown = 0,
    Tech3 = 1,
  };
  enum class ETexFilter {
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    Anisotropic = 3,
    AnisoPoint = 4,
  };
  enum class ETexAddress {
    Wrap = 0,
    Mirror = 1,
    Clamp = 2,
    Border = 3,
  };
  enum class EColorSpace {
    Linear = 0,
    sRGB = 1,
  };
  enum class EVideoTimer {
    Game = 0,
    Human = 1,
    Scene = 3,
    Default = 4,
  };
  enum class EGenerateUV {
    NoGenerate = 0,
    CameraVertex = 1,
    WorldVertex = 2,
    WorldVertexXY = 3,
    WorldVertexXZ = 4,
    WorldVertexYZ = 5,
    CameraNormal = 6,
    WorldNormal = 7,
    CameraReflectionVector = 8,
    WorldReflectionVector = 9,
    WorldNormalNeg = 10,
    WaterReflectionVector = 11,
    Hack1Vertex = 12,
    MapTexel_DEPRECATED = 13,
    FogPlane0 = 14,
    Vsk3SeaFoam = 15,
    ImageSpace = 16,
    LightDir0Reflect = 17,
    EyeNormal = 18,
    ShadowB1Pw01 = 19,
    Tex3AsPosPrCamera = 20,
    FlatWaterReflect = 21,
    FlatWaterRefract = 22,
    FlatWaterFresnel = 23,
    WorldPosXYblendZY = 24,
    DisableVshOutput = 25,
    WorldPos_PyPxz = 26,
  };
  enum class EUsage {
    Color = 0,
    Light = 1,
    HeightNGDuDv = 2,
    Render = 3,
    HNGDuDvLumi = 4,
    HNGNormXYZ = 5,
    HNGNormXY = 6,
    DepthCmp = 7,
    DispH01 = 8,
    HNGNormPal8b = 9,
    NormXYZ = 10,
    NormXY = 11,
    NormPal8b = 12,
    NormPal16b = 13,
    ColorFloat = 14,
    RenderFloat = 15,
    HNGDuDv1 = 16,
    Alpha = 17,
    LightAlpha = 18,
    HNGNormX0ZY = 19,
    NormX0ZY = 20,
    TexCoord = 21,
    Render16b = 22,
    Vertex = 23,
    HNGBumpTxTy = 24,
    BumpTxTy = 25,
    HNGNorm0YZX = 26,
    Norm0YZX = 27,
    Norm_XYZNG0YZX = 28,
    Depth = 29,
    SrgbL8NGLinearL16 = 30,
    NormATI2N = 31,
    NormXYZNGATI2N = 32,
    Color16b = 33,
    SpecFIENGFI0E = 34,
    SpecFI0E = 35,
    RoughMetal = 36,
    RoughMetalNGBC1 = 37,
    Mask_BC4 = 38,
  };
  enum class EColorDepth {
    DefaultColorDepth = 0,
    Color16b = 1,
    Color32b = 2,
  };
  enum class ECubeMapFace {
    None = 0,
    XPos = 1,
    XNeg = 2,
    YPos = 3,
    YNeg = 4,
    ZPos = 5,
    ZNeg = 6,
  };
  enum class EBumpCompressMode {
    None = 0,
    Pal8b = 1,
    DXT1 = 2,
    Pal16b = 3,
  };
  enum class EPixelUpdate {
    None = 0,
    Render = 1,
    Shader = 2,
    DynaSpecular = 3,
    Clear = 4,
    RenderVideo = 5,
  };
  enum class EDynamic {
    Off = 0,
    On = 1,
    On_2_Buffers = 2,
    On_GPU_Only = 3,
  };
  enum class ENormalRotate {
    None = 0,
    Px_Pz_Ny = 1,
  };
  enum class EEdCustomSaveOp {
    None = 0,
    Conv_Diffuse = 1,
    CubeHdrScaleA2_DXT5 = 2,
    CubeHdr = 3,
    Cube_EquirectExr = 4,
  };
  enum class ECompressor {
    NVidia = 0,
    DirectX = 1,
  };
  enum class EForceBorderSize {
    _1_texel = 0,
    _2_texels = 1,
    _3_texels = 2,
    _4_texels = 3,
  };
  enum class EMipMapAlpha01 {
    HalfBinary = 0,
    ForceBinary = 1,
    ShadeOfGray = 2,
  };
  ERenderTech RenderTech;
  EUsage Usage;
  EColorDepth WantedColorDepth;
  bool AllowR11G11B10F;
  bool IsOneBitAlpha;
  const bool IgnoreImageAlpha01;
  bool NoShaderSetBlendMap;
  bool ShadowCasterIgnoreAlpha;
  bool AlphaToCoverage;
  const bool IsNonPow2Conditional;
  const bool IsCubeMap;
  const bool IsOriginTop;
  ETexFilter TexFilter;
  ETexAddress TexAddressU;
  ETexAddress TexAddressV;
  ETexAddress TexAddressW;
  EColorSpace LdrColorSpace;
  ECubeMapFace CubeMapAuto2dFace;
  float MipMapLodBiasDefault;
  float DefaultTexCoordSizeXm;
  float DefaultTexCoordSizeYm;
  float DefaultTexCoordTransXm;
  float DefaultTexCoordTransYm;
  vec2 DefaultTexCoordScale;
  vec2 DefaultTexCoordTrans;
  float DefaultTexCoordRotate; // Range: 0 - 360
  EVideoTimer DefaultVideoTimer;
  const uint DefaultMaxMipLevel;
  float HeightInMeters;
  bool Force1stPixelAlpha0;
  bool ForceBorderRGB;
  vec3 BorderRGB;
  bool ForceBorderAlpha;
  float BorderAlpha; // Range: 0 - 1
  EForceBorderSize ForceBorderSize;
  bool BorderLeft;
  bool BorderRight;
  bool BorderTop;
  bool BorderBottom;
  bool WantMipMapping;
  bool IsMipMapLowerAlphaEnable;
  float MipMapLowerAlpha; // Range: 0 - 1
  MwArray<float> MipMapFadeAlphas;
  EMipMapAlpha01 MipMapAlpha01;
  bool CanBeDeletedFromSystemMemory;
  bool RenderTexelsMustPersist;
  bool CanBeCompressedInVideoMemory;
  bool CompressInterpolatedAlpha;
  bool CompressSkipDXT1;
  bool CompressUseDithering;
  ECompressor Compressor;
  EBumpCompressMode BumpCompressMode;
  float BumpScaleFactor;
  float BumpScaleMipLevel;
  ENormalRotate NormalRotate;
  bool NormalAreSigned;
  bool NoMipNormalize;
  CPlugFileImg* Image;
  CPlugBitmapAtlas* Atlas;
  CPlugSpriteParam* const SpriteParam;
  CPlugBitmapDecals* Decals;
  CPlugImageArray* ImageArray;
  const MwBuffer<CPlugFileImg*> ImageArrayFids;
  bool MipLevelSkipFromQuality;
  uint MipLevelSkipCountMax;
  int LDExportSkipMip_Racing;
  bool FloatRequireFiltering;
  bool RenderAutoFitSize;
  bool RenderAutoFitSS;
  uint RenderSizeMul;
  uint RenderSizeDiv;
  bool RenderRequireBlending;
  uint MultiSampleCount;
  bool RenderExplicitMip;
  bool RenderCreateClear;
  vec3 DefaultRenderClearRGB;
  float DefaultRenderClearAlpha; // Range: 0 - 1
  bool DepthUseStencil;
  bool DepthCanSwap;
  bool UseUAV;
  EPixelUpdate PixelUpdate;
  EDynamic Dynamic;
  bool Convert_2d_To_1d;
  vec3 SpecularRGB;
  float SpecularExp; // Range: 1 - 50
  vec3 ClearRGB;
  float ClearAlpha; // Range: 0 - 1
  CPlugBitmapRender* Render;
  CPlugBitmapShader* Shader;
  bool ForceShaderBitmapTc;
  bool ForceShaderGenerateUV;
  EGenerateUV GenerateUV;
};

struct CPlugVisualLines : public CPlugVisual3D {
  CPlugVisualLines();

};

struct CPlugVisualLines2D : public CPlugVisual2D {
  CPlugVisualLines2D();

};

struct CPlugTreeVisualMip : public CPlugTree {
  CPlugTreeVisualMip();

  MwArray<float> LevelsFarZ;
  MwArray<CPlugTree*> LevelsTree;
};

struct CPlugVisualStrip : public CPlugVisual3D {
  CPlugVisualStrip();

};

struct CPlugVisualVertexs : public CPlugVisual3D {
  CPlugVisualVertexs();

};

struct CPlugFilePack : public CPlugFileFidContainer {
  CPlugFilePack();

  const uint Version;
  const string CreationBuildInfo;
  const string AuthorLogin;
  const wstring AuthorNickName;
  const wstring AuthorZonePath;
  const string InfoManialinkUrl;
  const string DownloadUrl;
  const wstring Comment;
  const string XmlHeader;
  const string TitleId;
  const string UsageSubDir;
};

// File extension: 'Sound.Gbx'
struct CPlugSound : public CPlugAudio {
  CPlugSound();

  enum class EAudioBalanceGroup {
    Auto = 0,
    Music = 1,
    Menus = 2,
    Ambiance = 3,
    Player = 4,
    Bengs = 5,
    Guns = 6,
    BackingDirect = 7,
    Trails = 8,
    GameUI = 9,
    Custom1 = 10,
    Custom2 = 11,
    OtherPlayers = 12,
    ImpactWarning = 13,
    Environment = 14,
  };
  enum class EAudioRoomFx {
    None = 0,
    Low = 1,
    Mid = 2,
    High = 3,
    Music = 4,
    UI = 5,
  };
  enum class EAudioPitchFromDistMode {
    Auto = 0,
    CurvePlayer = 1,
    CurveGun = 2,
    Disabled = 3,
  };
  enum class EAudioIgnoreSourceProperties {
    None = 0,
    Ignore_All = 1,
    Ignore_Pitch = 2,
    Ignore_Volume = 3,
  };
  CPlugFileSnd* PlugFile;
  UnnamedEnum Mode;
  float VolumedB; // Range: -60 - 0
  float Priority;
  int MaxDuplicates;
  MwId GroupDuplicate;
  EAudioBalanceGroup BalanceGroup;
  float RefDistance;
  float MaxDistance;
  float RolloffFactor; // Range: 0 - 10
  CFuncKeysReal* VolumeFromDistance;
  CFuncKeysReal* PitchFromDistance;
  CFuncKeysReal* VolumeFromSpeedKmh;
  float Pitch; // Range: 0.5 - 2
  float DopplerFactor;
  bool EnableDoppler;
  CPlugSound* BackingSound;
  CPlugSound* FocusedSound;
  float AirAbsorptionFactor; // Range: 0 - 10
  EAudioRoomFx RoomFxSend;
  float RoomRolloffFactor; // Range: 1 - 10
  float LfeSenddB; // Range: -60 - 0
  float FadeStopDuration;
  float FadePlayDuration;
  bool IsLooping;
  UnnamedEnum SoundKind;
  uint InsideConeAngle; // Range: 0 - 360
  uint OutsideConeAngle; // Range: 0 - 360
  float ConeOutsideAttenuation; // Range: 0 - 1
  float Radius;
  float PanAngleDeg; // Range: -180 - 180
  EAudioPitchFromDistMode PitchFromDistMode;
  EAudioIgnoreSourceProperties IgnoreSourceProperties;
  bool IsContinuous;
  bool UseLowPassFilter;
  int DuplicatesIntervalMin;
  void SetDirty();
};

// File extension: 'SoundMood.Gbx'
struct CPlugSoundMood : public CPlugSound {
  CPlugSoundMood();

  CPlugFileSnd* InsideFileSnd;
  const MwBuffer<CPlugFileSnd*> EventSounds;
  const MwBuffer<float> EventPeriods;
};

// File extension: 'Music.Gbx'
struct CPlugMusic : public CPlugMusicType {
  CPlugMusic();

  CSystemFidsFolder* RootFolder;
  CPlugFileText* Settings;
};

struct CPlugLight : public CPlug {
  CPlugLight();

};

struct CPlugVisualIndexedTriangles : public CPlugVisualIndexed {
  CPlugVisualIndexedTriangles();

};

struct CPlugFile : public CPlug {
  void ReGenerate();
};

struct CPlugBitmapRenderLightFromMap : public CPlugBitmapRender {
  CPlugBitmapRenderLightFromMap();

  uint SampledWidthPerObject;
  uint ObjectCountPerAxisMin;
  uint ObjectCountPerAxisMax;
  const uint ObjectCountPerAxisVision;
  float CameraNearZ_FactorInObject; // Range: 0 - 1
  float CameraFarZ_ToAdd;
  float StartFadeToWhite; // Range: 0 - 1
  float RemapMin_Night; // Range: -0.5 - 1.5
  float RemapMax_Night; // Range: -0.5 - 1.5
  float RemapMin_DayAmb; // Range: -0.5 - 1.5
  float RemapMax_DayAmb; // Range: -0.5 - 1.5
  float RemapMin_DayDir; // Range: -0.5 - 1.5
  float RemapMax_DayDir; // Range: -0.5 - 1.5
  float CameraDovWorldY_MaxDot; // Range: -1 - 1
  CPlugBitmap* BitmapLightHistory;
  uint RayCastHalfTimeMs;
};

struct CPlugFileJpg : public CPlugFileImg {
  CPlugFileJpg();

};

// File extension: 'tga'
struct CPlugFileTga : public CPlugFileImg {
  CPlugFileTga();

};

// File extension: 'dds'
struct CPlugFileDds : public CPlugFileImg {
  CPlugFileDds();

};

struct CPlugFileImg : public CPlugFile {
  enum class ECPlugFileImg__EDimension {
    _1D = 0,
    _2D = 1,
    _3D = 2,
    Cube = 3,
  };
  const ECPlugFileImg__EDimension Dimension;
  const uint Width;
  const uint Height;
  const uint Depth;
  const uint ArraySize;
  const uint NbComp;
  enum class EPlugImageFormat {
    BGRA = 0,
    BC1_DXT1 = 1,
    BC2_DXT2_PM = 2,
    BC2_DXT3 = 3,
    BC3_DXT4_PM = 4,
    BC3_DXT5 = 5,
    RGBA16 = 6,
    RGBA16F = 7,
    RGBA32F = 8,
    FileJpg = 9,
    BC4 = 10,
    BC5yx = 11,
    BC6U = 12,
    BC6F = 13,
    BC7 = 14,
    R11G11B10F = 15,
    RGBA8 = 16,
    R10G10B10A2 = 17,
    BC5 = 18,
  };
  const EPlugImageFormat Format;
  enum class EPlugChannelType {
    Auto = 0,
    UNorm = 1,
    SNorm = 2,
    UInt = 3,
    SInt = 4,
    Srgb = 5,
    Float = 6,
  };
  const EPlugChannelType ChannelType;
  const uint cMipLevel;
  const uint cMipLevelSkipAtLoad;
  const bool IsInSystemMemory;
  const uint SystemKb;
  void ScaleToPowerOfTwo(bool Shrink, uint TexFilter);
  const float LdrToHdrScale;
  const UnnamedEnum MipMapFilter;
};

struct CPlugShaderApply : public CPlugShaderGeneric {
  CPlugShaderApply();

};

struct CPlugVisualQuads : public CPlugVisual3D {
  CPlugVisualQuads();

};

struct CPlugVisualTriangles : public CPlugVisual3D {
  CPlugVisualTriangles();

};

// File extension: 'SoundEngine.Gbx'
struct CPlugSoundEngine2 : public CPlugSound {
  CPlugSoundEngine2();

  CPlugFileAudioMotors* AudioMotors_Exhaust_Throttle;
  CPlugFileAudioMotors* AudioMotors_Exhaust_Release;
  CPlugFileAudioMotors* AudioMotors_Engine_Throttle;
  CPlugFileAudioMotors* AudioMotors_Engine_Release;
  CPlugFileSnd* AudioMotors_IdleLoop_Exhaust;
  CPlugFileSnd* AudioMotors_LimiterLoop_Exhaust;
  CPlugFileSnd* AudioMotors_IdleLoop_Engine;
  CPlugFileSnd* AudioMotors_LimiterLoop_Engine;
  float AudioMotors_LPF_CutoffRatio_Exhaust; // Range: 0 - 1
  float AudioMotors_LPF_CutoffRatio_Engine; // Range: 0 - 1
  CFuncKeysReal* const AudioMotors_PitchRandomize_Rpm;
  CFuncKeysReal* const AudioMotors_PitchRandomize_Throttle;
  float AudioMotors_IdleVolumedB;
  float AudioMotors_LimiterVolumedB;
  CSystemFidsFolder* Loops_Folder;
  bool Loops_UseVolumeCorrection;
  bool Loops_RpmClamp;
  float RpmMaxFromEngine;
  float RpmGamma;
  CFuncKeysReal* const Volume_Speed;
  CFuncKeysReal* const Volume_Distance;
  CFuncKeysReal* const Volume_Rpm;
  CFuncKeysReal* const Volume_Throttle;
  CFuncKeysReal* const Volume_Gear;
  CFuncKeysReal* const RpmFactor_Gear;
  CFuncKeysReal* const VolPersp_Rpm_Exhaust;
  CFuncKeysReal* const VolPersp_Throttle_Exhaust;
  CFuncKeysReal* const VolPersp_Rpm_Engine;
  CFuncKeysReal* const VolPersp_Throttle_Engine;
  CFuncKeysReal* const VolPersp_Rpm_Interior;
  CFuncKeysReal* const VolPersp_Throttle_Interior;
  float Mix_FrontBackSpread;
  float MixFront; // Range: 0 - 1
  float MixBack; // Range: 0 - 1
  void UpdateSubEmitters();
  float SubEmitter_Vol_Exhaust;
  float SubEmitter_RelSize_Exhaust;
  vec3 SubEmitter_RelPos_Exhaust;
  vec3 SubEmitter_RelDir_Exhaust;
  float SubEmitter_ConeAttenuation_Exhaust;
  float SubEmitter_ConeAngle_Exhaust;
  float SubEmitter_Vol_Engine;
  float SubEmitter_RelSize_Engine;
  vec3 SubEmitter_RelPos_Engine;
  vec3 SubEmitter_RelDir_Engine;
  float SubEmitter_ConeAttenuation_Engine;
  float SubEmitter_ConeAngle_Engine;
  float SubEmitter_Vol_Interior;
  float SubEmitter_RelSize_Interior;
  vec3 SubEmitter_RelPos_Interior;
  vec3 SubEmitter_RelDir_Interior;
  float SubEmitter_ConeAttenuation_Int;
  float SubEmitter_ConeAngle_Int;
  void Loops_LoadAndParseFileSnd();
  const float Loops_MinRpmAll;
  const float Loops_MaxRpmAll;
};

struct CPlugVisualIndexedStrip : public CPlugVisualIndexed {
  CPlugVisualIndexedStrip();

};

struct CPlug : public CMwNod {
  CPlug();

};

struct CPlugVisual3D : public CPlugVisual {
  bool UseTgtU;
  bool UseTgtV;
  CPlugBlendShapes* const BlendShapes;
  void NegNormals();
  void ComputeFaceCull();
  void ComputeOccBox();
};

struct CPlugFileFont : public CPlugFile {
  CPlugFileFont();

};

struct CPlugFileGen : public CPlugFileImg {
  CPlugFileGen();

  enum class ECPlugFileGen__EGenKind {
    Checker = 0,
    LightMap = 1,
    Plain = 2,
    Point = 3,
    Shade = 4,
    Render = 5,
    RenderCube = 6,
    CubeNormals = 7,
    Identity = 8,
    Pixels = 9,
    Depth = 10,
    DepthCube = 11,
    RenderF = 12,
    Iradiance = 13,
    Specular = 14,
    TestNormal = 15,
    RandNormal = 16,
    SpecularCube = 17,
    HemiReflec = 18,
    CubeInvHemiReflec = 19,
    SpecularsLA = 20,
    HueGradient = 21,
    SLGradient = 22,
    VolumeRotate = 23,
    SpecularCubeVect = 24,
    TestMipMap = 25,
    SpecCubeVectRgb = 26,
    DdxInMipMap = 27,
    RandVolume = 28,
    Unalloc = 29,
    PotentialField = 30,
    RenderCubeF = 31,
    TestAnaglyph = 32,
    ACosSmoothInRange = 33,
    PerlinPerm = 34,
    PerlinPerm2D = 35,
    PerlinGrad3 = 36,
    PerlinGrad3OfPerm = 37,
    Script = 38,
    Cube3x2_2d1RotCube = 39,
    Cube3x2_Ya1 = 40,
    ShClampedCos = 41,
    Random = 42,
    HueSaturation = 43,
    SmEnergyHueIntens = 44,
    PerlinGrad3OfPerm2d = 45,
    PerlinGrad4OfPerm2d = 46,
    Simplex4 = 47,
    InvalidData = 48,
    Callback = 49,
    Noise = 50,
  };
  const ECPlugFileGen__EGenKind GenKind;
  const MwBuffer<CPlugFileImg*> ArrayOfImages;
};

struct CPlugFileSnd : public CPlugFile {
};

struct CPlugFileWav : public CPlugFileSnd {
  CPlugFileWav();

};

// File extension: 'AudioBalance.Gbx'
struct CPlugAudioBalance : public CPlugAudio {
  CPlugAudioBalance();

  bool IsAbsolute;
  float AttackDuration;
  float MinimumDuration;
  float ReleaseDuration;
  void SetDefaultValues();
  void ApplySceneVolume();
  float SceneVolumedB; // Range: -60 - 6
  float UiVolumedB; // Range: -60 - 6
  float SceneLfeSenddB; // Range: -60 - 6
  float MusicLfeSenddB; // Range: -60 - 6
  float GlobalLfeSenddB; // Range: -60 - 6
  CFuncKeysReal* RolloffFromMusicVolume;
  float RolloffFactor; // Range: 0 - 4
  float RefDistanceFactor; // Range: 0 - 4
  float AutoRadiusFactor; // Range: 0 - 1
  float MaxDistFade_Ratio_Others;
  float MaxDistFade_Rolloff_Others;
  CFuncKeysReal* PitchFromDistance_Player_Others;
  CFuncKeysReal* PitchFromDistance_BengsGuns_Others;
  float MaxDistFade_Ratio_Focused;
  float MaxDistFade_Rolloff_Focused;
  CFuncKeysReal* PitchFromDistance_Player_Focused;
  CFuncKeysReal* PitchFromDistance_BengsGuns_Focused;
};

struct CPlugFileFidContainer : public CPlugFile {
  CSystemFids* const Location;
  void UiInstallFidsInSubFolder();
  void UiInstallFids();
  void UninstallAndDeleteFids();
  void EdDumpStatistics();
  void DumpContents();
  const uint NbFolders;
  const uint NbFiles;
  void DbgBenchExpand();
  void DbgExpandToDisk();
};

// File extension: 'TexturePack.Gbx'
struct CPlugBitmapPacker : public CPlug {
  CPlugBitmapPacker();

  uint BitmapSizeMax;
  const MwBuffer<CPlugBitmapPack*> Packs;
  CSystemFidsFolder* FidsBrowseMaterials;
  CSystemFidsFolder* FidsBrowseSolids;
  void FindPackListFromPath();
  void PackBitmaps();
  void AddPackInput();
  const MwBuffer<CPlugBitmapPackInput*> PackInputs;
  void FindTextureTiling();
  void FidParametersPush();
};

struct CPlugMusicType : public CPlugSound {
};

// File extension: 'AudioEnvironment.Gbx'
struct CPlugAudioEnvironment : public CPlugAudio {
  CPlugAudioEnvironment();

  float DopplerFactor; // Range: 0 - 10
  float RoomFxLowGain; // Range: -60 - 0
  float RoomFxLowGainHF; // Range: -60 - 0
  float RoomFxMidGain; // Range: -60 - 0
  float RoomFxMidGainHF; // Range: -60 - 0
  float RoomFxHighGain; // Range: -60 - 0
  float RoomFxHighGainHF; // Range: -60 - 0
  float RoomFxUIGain; // Range: -60 - 0
  float RoomFxUIGainHF; // Range: -60 - 0
  float RoomFxMusicGain; // Range: -60 - 0
  float RoomFxMusicGainHF; // Range: -60 - 0
  float LowPassGain; // Range: -60 - 0
  float LowPassGainHF; // Range: -60 - 0
  const float Gain;
  const float ReflectionsGain;
  const float LateReverbGain;
};

struct CPlugMaterialCustom : public CPlug {
  CPlugMaterialCustom();

};

struct CPlugVisualGrid : public CPlugVisual3D {
  CPlugVisualGrid();

  uint NbPointX;
  uint NbPointZ;
  float RangeX;
  float RangeZ;
  void Courbificateur();
  float Courbifiant;
  float Courbifiant2;
};

struct CPlugVisualPath : public CPlugVisualGrid {
  CPlugVisualPath();

};

// File extension: 'png'
struct CPlugFilePng : public CPlugFileImg {
  CPlugFilePng();

};

struct CPlugBlendShapes : public CPlug {
  CPlugBlendShapes();

  MwArray<float> BlendVals;
  bool NormalizeNormals;
  bool BlendNormals;
};

// File extension: 'Text.Gbx'
struct CPlugTreeGenText : public CPlugTreeGenerator {
  CPlugTreeGenText();

  wstring Text;
  CPlugFont* Font;
  vec3 Color;
  float Height;
  float RatioXY;
  UnnamedEnum AlignHorizontal;
  UnnamedEnum AlignVertical;
  float ClipLength;
  uint MaxLine;
  uint ClipLineMin;
  uint ClipLineMax;
};

struct CPlugFileGPU : public CPlugFile {
  CPlugFileGPU();

  const UnnamedEnum GpuStage;
  const uint GpuVersionMajor;
  const uint GpuVersionMajorReq;
  const uint CodeSize;
  CSystemFid* const GeneratedCombination_Fid0;
  CSystemFid* const GeneratedCombination_Fid1;
};

// File extension: 'txt'
struct CPlugFileText : public CPlugFile {
  CPlugFileText();

  string Text;
};

struct CPlugBitmapPack : public CPlug {
  CPlugBitmapPack();

  uint SizeX;
  uint SizeY;
  UnnamedEnum Format;
  uint NbComp;
  enum class EGxTexAddress {
    Wrap = 0,
    Mirror = 1,
    Clamp = 2,
    Border = 3,
  };
  EGxTexAddress TexAdrU;
  CPlugBitmap* Bitmap;
  const MwBuffer<CPlugBitmapPackElem*> PackElems;
  void LoadBitmap();
};

struct CPlugBitmapPackElem : public CPlug {
  CPlugBitmapPackElem();

  CPlugBitmap* FidBitmapSrc;
  uint TexelStartX;
  uint TexelStartY;
  const uint TexelCountX;
  const uint TexelCountY;
};

struct CPlugBitmapAddress : public CPlugBitmapSampler {
  CPlugBitmapAddress();

  bool UseBitmapTcScale;
  bool DirectTransfo;
  enum class EGxUVGenerate {
    NoGenerate = 0,
    CameraVertex = 1,
    WorldVertex = 2,
    WorldVertexXY = 3,
    WorldVertexXZ = 4,
    WorldVertexYZ = 5,
    CameraNormal = 6,
    WorldNormal = 7,
    CameraReflectionVector = 8,
    WorldReflectionVector = 9,
    WorldNormalNeg = 10,
    WaterReflectionVector = 11,
    Hack1Vertex = 12,
    MapTexel_DEPRECATED = 13,
    FogPlane0 = 14,
    Vsk3SeaFoam = 15,
    ImageSpace = 16,
    LightDir0Reflect = 17,
    EyeNormal = 18,
    ShadowB1Pw01 = 19,
    Tex3AsPosPrCamera = 20,
    FlatWaterReflect = 21,
    FlatWaterRefract = 22,
    FlatWaterFresnel = 23,
    WorldPosXYblendZY = 24,
    DisableVshOutput = 25,
    WorldPos_PyPxz = 26,
  };
  EGxUVGenerate GenerateUV;
  bool UVTransfoIso3;
  bool UVTransfoMat4;
  uint TexCoordIndex;
  iso3 TransfoIso3;
  vec4 TransfoMat4U;
  vec4 TransfoMat4V;
  vec4 TransfoMat4W;
};

struct CPlugBitmapPackInput : public CPlug {
  CPlugBitmapPackInput();

  uint LayerCount;
  const MwBuffer<CPlugBitmap*> FidBitmaps;
};

// File extension: 'ScanCache.Gbx'
struct CPlugFileFidCache : public CPlugFileFidContainer {
  CPlugFileFidCache();

  CSystemFids* FidsToCreateCacheFrom;
  uint Version;
  const wstring RootEnumFullName;
};

struct CPlugVisual2D : public CPlugVisual {
};

struct CPlugVisualQuads2D : public CPlugVisual2D {
  CPlugVisualQuads2D();

};

// File extension: 'Font.Gbx'
struct CPlugFont : public CPlug {
};

// File extension: 'Font.Gbx'
struct CPlugFontBitmap : public CPlugFont {
  CPlugFontBitmap();

  CPlugFontBitmap* FallbackFont;
  uint NbPages;
  MwArray<CMwNod*> PageShaders;
  uint FontHeight;
  uint FontAscent;
  vec2 BBoxCapitalMin;
  vec2 BBoxCapitalMax;
  void LoadAllPages();
  void CreateCharRemap();
  const uint NbCharRemapPages;
  CPlugMaterial* CustomMaterialModel;
  const MwArray<CMwNod*> PageTextureFids;
  MwArray<wstring> PageTextureDataRefs;
};

struct CPlugTree : public CPlug {
  CPlugTree();

  const MwBuffer<CPlugTree*> Childs;
  bool IsVisible;
  bool IsCollidable;
  bool IsRooted;
  bool IsLightVolume;
  bool IsLightVolumeVisible;
  bool UseLocation;
  bool IsShadowCaster;
  bool IsFixedRatio2D;
  bool IsPickable;
  bool IsPickableVisual;
  bool IsPortal;
  const bool HasModel;
  bool TestBBoxVisibility;
  const bool IsCustomBBox;
  bool UseRenderBefore;
  iso4 Location;
  vec3 Translation;
  CPlugVisual* Visual;
  uint SubVisualIndex1;
  uint SubVisualIndex2;
  float SubVisualIndexB; // Range: 0 - 1
  uint SplitVisualIndex;
  uint SplitVisualCount;
  CPlugTreeGenerator* Generator;
  CPlugMaterial* Material;
  CPlug* Shader;
  CPlugSurface* Surface;
  void UpdateBBox();
  void Generate();
  CFuncTree* FuncTree;
  const vec3 BoundingBoxCenter;
  const vec3 BoundingBoxHalfDiag;
  const vec3 BoundingBoxMin;
  const vec3 BoundingBoxMax;
};

struct CPlugTreeGenerator : public CPlug {
  bool IsSaveGenerated;
  bool IsToKeepInSaveAsRelease;
};

// File extension: 'SoundGauge.Gbx'
struct CPlugSoundGauge : public CPlugSound {
  CPlugSoundGauge();

  CPlugFileSnd* FileSndFilling;
  CPlugFileSnd* FileSndEmptying;
  CPlugFileSnd* FileSndFillingFast;
  CPlugFileSnd* FileSndEmptyingFast;
  CPlugFileSnd* FileSndOnStopFilling;
  CPlugFileSnd* FileSndOnStopEmptying;
  CPlugFileSnd* FileSndOnStartFilling;
  CPlugFileSnd* FileSndOnStartEmptying;
  CPlugFileSnd* FileSndOnFull;
  CPlugFileSnd* FileSndOnEmpty;
  CPlugFileSnd* FileSndOnGradFull;
  CPlugFileSnd* FileSndOnGradEmpty;
  float FastRate;
  float FadeInDuration;
  float FadeOutDuration;
  float RestartLoopOnChange;
  CFuncKeysReal* PitchFromRateFilling;
  CFuncKeysReal* PitchFromRateEmptying;
  CFuncKeysReal* PitchFromRateOnStopFilling;
  CFuncKeysReal* PitchFromRateOnStopEmptying;
  CFuncKeysReal* PitchFromRateOnStartFilling;
  CFuncKeysReal* PitchFromRateOnStartEmptying;
  CFuncKeysReal* PitchFromRateOnFullOrEmpty;
  CFuncKeysReal* PitchFromRateOnGradFull;
  CFuncKeysReal* PitchFromRateOnGradEmpty;
  CFuncKeysReal* PitchFromRatioFilling;
  CFuncKeysReal* PitchFromRatioEmptying;
  CFuncKeysReal* PitchFromRatioOnStopFilling;
  CFuncKeysReal* PitchFromRatioOnStopEmptying;
  CFuncKeysReal* PitchFromRatioOnStartFilling;
  CFuncKeysReal* PitchFromRatioOnStartEmptying;
  CFuncKeysReal* PitchFromRatioOnFullOrEmpty;
  CFuncKeysReal* PitchFromRatioOnGradFull;
  CFuncKeysReal* PitchFromRatioOnGradEmpty;
  CFuncKeysReal* VolumeFromRateFilling;
  CFuncKeysReal* VolumeFromRateEmptying;
  CFuncKeysReal* VolumeFromRateOnStopFilling;
  CFuncKeysReal* VolumeFromRateOnStopEmptying;
  CFuncKeysReal* VolumeFromRateOnStartFilling;
  CFuncKeysReal* VolumeFromRateOnStartEmptying;
  CFuncKeysReal* VolumeFromRateOnFullOrEmpty;
  CFuncKeysReal* VolumeFromRateOnGradFull;
  CFuncKeysReal* VolumeFromRateOnGradEmpty;
  CFuncKeysReal* VolumeFromRatioFilling;
  CFuncKeysReal* VolumeFromRatioEmptying;
  CFuncKeysReal* VolumeFromRatioOnStopFilling;
  CFuncKeysReal* VolumeFromRatioOnStopEmptying;
  CFuncKeysReal* VolumeFromRatioOnStartFilling;
  CFuncKeysReal* VolumeFromRatioOnStartEmptying;
  CFuncKeysReal* VolumeFromRatioOnFullOrEmpty;
  CFuncKeysReal* VolumeFromRatioOnGradFull;
  CFuncKeysReal* VolumeFromRatioOnGradEmpty;
};

// File extension: 'GpuCache.Gbx'
struct CPlugGpuCompileCache : public CPlug {
  CPlugGpuCompileCache();

};

// File extension: 'Script.txt'
struct CPlugFileTextScript : public CPlugFileText {
  CPlugFileTextScript();

};

struct CPlugFileI18n : public CPlugFile {
  CPlugFileI18n();

};

struct CPlugVertexStream : public CPlug {
  CPlugVertexStream();

  bool IsStatic;
  const bool SkipVision;
  bool DirtyVision;
  CPlugVisualOctree* const Octree;
};

struct CPlugIndexBuffer : public CPlug {
  CPlugIndexBuffer();

  const bool IsStatic;
  const UnnamedEnum IndexType;
  const uint IndexCount;
};

struct CPlugBitmapRenderHemisphere : public CPlugBitmapRender {
  CPlugBitmapRenderHemisphere();

  float SpecularPower0;
  float SpecularPower1;
  bool AutoScaleWithPower;
  bool m_UseLightDir;
  UnnamedEnum HemiLayout;
};

struct CPlugFileOggVorbis : public CPlugFileSnd {
  CPlugFileOggVorbis();

};

struct CPlugBitmapRenderPortal : public CPlugBitmapRender {
  CPlugBitmapRenderPortal();

  float DepthFadeOutStart;
  float DepthFadeOutEnd;
};

struct CPlugBitmapRenderPlaneR : public CPlugBitmapRender {
  CPlugBitmapRenderPlaneR();

  UnnamedEnum Plane;
  bool IsPlaneEqValid;
  string TreeId;
  vec4 PlaneEq;
};

struct CPlugSimuDump : public CMwNod {
  CPlugSimuDump();

};

// File extension: 'SoundSurface.Gbx'
struct CPlugSoundSurface : public CPlugSound {
  CPlugSoundSurface();

  float EdMaxSpeedKmh;
  MwArray<CMwNod*> Texture;
  MwArray<CMwNod*> Skid;
  CFuncKeysReal* const SkidVolumeFromIntensity;
};

struct CPlugFileBink : public CPlugFile {
  CPlugFileBink();

};

struct CPlugFileVideo : public CPlugFileImg {
  void Play();
  void Pause();
  void Stop();
  void Rewind();
  UnnamedEnum TimeMode;
  bool IsLooping;
  const bool HasSound;
};

struct CPlugLocatedSound : public CMwNod {
  CPlugLocatedSound();

  CPlugSound* Sound;
  iso4 Loc;
};

struct CPlugTreeLight : public CPlugTree {
  CPlugTreeLight();

  CPlugLight* PlugLight;
  GxLight* const Light;
};

// File extension: 'Sound.Gbx'
struct CPlugSoundMulti : public CPlugSound {
  CPlugSoundMulti();

  enum class ESoundInputMapping {
    Direct = 0,
    ForceRandom = 1,
    Distance = 2,
    Scale = 3,
  };
  MwBuffer<CPlugFileSnd*> AdditionalSounds;
  ESoundInputMapping InputMapping;
  MwBuffer<vec3> PreferedDistances;
  CFuncKeysReal* VolumeFromInput;
  bool AvoidDuplicates;
  bool AlternateParity;
  float PitchVarianceNeg; // Range: 0 - 1
  float PitchVariancePos; // Range: 0 - 1
  float VolumeVariance; // Range: 0 - 1
};

struct CPlugSoundVideo : public CPlugSound {
  CPlugSoundVideo();

  CPlugFileVideo* const Video;
  CPlugFileImg* const ImageNonVideo;
};

// File extension: 'PointsInSphere.Gbx'
struct CPlugPointsInSphereOpt : public CPlug {
  CPlugPointsInSphereOpt();

};

struct CPlugShaderPass : public CPlug {
  CPlugShaderPass();

  const uint iPass;
  enum class EGxBlendFactor {
    _0 = 0,
    _1 = 1,
    SrcColor = 2,
    _1NSrcColor = 3,
    SrcAlpha = 4,
    _1NSrcAlpha = 5,
    DstColor = 6,
    _1NDstColor = 7,
    DstAlpha = 8,
    _1NDstAlpha = 9,
    SrcAlphaSat = 10,
    Constant = 11,
    _1NConstant = 12,
  };
  EGxBlendFactor BlendSrc;
  EGxBlendFactor BlendDst;
  enum class ECullMode {
    Default = 0,
    Inverse_Culling = 1,
    DblSidedLighting = 2,
  };
  ECullMode CullMode;
  bool WriteZ;
  bool FlatCBufferV;
  bool FlatCBufferP;
  const bool IsValid;
  CPlugFileGPUV* VertexShader;
  CPlugFileGPUP* PixelShader;
  CPlugFileGPU* GeometryShader;
  CPlugFileGPU* HullShader;
  CPlugFileGPU* DomainShader;
  const MwArray<CPlugBitmapSampler*> VertexTextures;
};

// File extension: 'Shader.Gbx'
struct CPlugShaderSprite : public CPlugShaderApply {
  CPlugShaderSprite();

};

// File extension: 'Shader.Gbx'
struct CPlugShaderSpritePath : public CPlugShaderSprite {
  CPlugShaderSpritePath();

  CFuncKeysPath* FuncKeysPath;
};

struct CPlugVisualIndexed : public CPlugVisual3D {
};

struct CPlugTreeFrustum : public CPlugTree {
  CPlugTreeFrustum();

  bool Update;
  void ResetGrid();
  float FarZ;
  uint NbVisualX;
  uint NbVisualZ;
  uint NbPointX;
  uint NbPointZ;
};

// File extension: '.svg'
struct CPlugFileSvg : public CPlugFile {
  CPlugFileSvg();

};

struct CPlugModelTree : public CMwNod {
  CPlugModelTree();

  const MwBuffer<CPlugModelTree*> Childs;
  const MwBuffer<CPlugModelLodMesh*> LodMeshes;
  MwBuffer<iso4> LodMeshesLocs;
  const MwBuffer<CPlugModelMesh*> Surfaces;
  const MwBuffer<iso4> SurfaceLocs;
  vec3 RotationPivot;
  vec3 ScalePivot;
  iso4 Location;
  const MwBuffer<CMwNod*> ChildGens;
  const MwBuffer<iso4> ChildGensLocs;
  const MwBuffer<MwId> ChildGensIds;
  const MwBuffer<bool> ChildGensDisableSurface;
  bool OptimIsKeepTree;
};

struct CPlugModelMesh : public CMwNod {
  CPlugModelMesh();

  const uint VertexCount;
  const uint InfluenceCount;
  const uint MorphCount;
  const uint FrameCount;
  const uint VertexInfluenceCount;
  const uint PolyCount;
  const uint TriCount;
  const uint QuadCount;
  const bool PolyIsMaterialIndex;
  const bool PolyIsSmoothingGroup;
  const bool PolyIsVertexNormal;
  const bool PolyIsVertexColor;
  const uint PolyVertexUvLayerCount;
  const bool PolyIsVertexTangent;
  bool PolyIsDoubleSide;
  const uint SpriteCount;
  const bool SpriteIsMaterialIndex;
  const bool SpriteIsDiameter;
  const bool SpriteIsColor;
  const bool SpriteIsRotAngle;
  const bool SpriteIsXYRatio;
  const bool SpriteIsTextureAtlas;
  const bool SpriteIsTextureSubId;
  const MwBuffer<CMwNod*> Exts;
};

// File extension: 'VHlsl.Txt'
struct CPlugFileVHlsl : public CPlugFileGPUV {
  CPlugFileVHlsl();

};

struct CPlugFileGPUV : public CPlugFileGPU {
};

struct CPlugFileGPUP : public CPlugFileGPU {
};

// File extension: 'PHlsl.Txt'
struct CPlugFilePHlsl : public CPlugFileGPUP {
  CPlugFilePHlsl();

};

// File extension: 'BitmapDecals.Gbx'
struct CPlugBitmapDecals : public CPlug {
  CPlugBitmapDecals();

  const MwBuffer<CPlugDecalModel*> DecalModels;
  const uint DecalSetCount;
  uint CellSizeX;
  uint CellSizeY;
  uint CellSizeZ;
};

// File extension: 'Material.Gbx'
struct CPlugMaterial : public CPlug {
  CPlugMaterial();

};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFx : public CPlug {
};

struct CPlugMaterialFxFlags : public CPlugMaterialFx {
  CPlugMaterialFxFlags();

};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxFur : public CPlugMaterialFx {
  CPlugMaterialFxFur();

  uint ShellCount;
  float ShellThick;
  vec3 ShellLowRGB;
  float ShellLowAlpha;
  vec3 ShellHighRGB;
  float ShellHighAlpha;
  uint FenceCount;
  float FenceHeight;
  CPlugBitmap* FenceBitmap;
};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxs : public CPlugMaterialFx {
  CPlugMaterialFxs();

  MwArray<CPlugMaterialFx*> MaterialFxs;
};

struct CPlugBitmapSampler : public CPlug {
  CPlugBitmapSampler();

  bool IsInternal;
  uint NbCompRequired;
  enum class EAlphaReq {
    None = 0,
    Binary = 1,
    Translucent = 2,
  };
  EAlphaReq AlphaRequired;
  bool IsSharedByDevices;
  bool SrgbToLinear;
  bool UseBitmapDefaults;
  enum class EGxTexFilter {
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    Anisotropic = 3,
    AnisoPoint = 4,
  };
  EGxTexFilter WantedFiltering;
  EGxTexAddress TexAddressU;
  EGxTexAddress TexAddressV;
  EGxTexAddress TexAddressW;
  vec3 BorderRGB;
  float BorderAlpha; // Range: 0 - 1
  const bool SynchNameWithShader;
  float MipMapLodBias;
  uint MaxMipLevel;
  const uint MaxAnisoRatio;
  CPlugBitmap* Bitmap;
};

struct CPlugBitmapShader : public CPlug {
  CPlugBitmapShader();

  CPlugShader* Shader;
  CPlugBitmap* BitmapToSwap;
};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxDynaBump : public CPlugMaterialFx {
  CPlugMaterialFxDynaBump();

  bool IsCollidable;
  float SpeedMaxIntens;
  float MaxIntens;
  float Inter1SizeX;
  float Inter1SizeZ;
};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxDynaMobil : public CPlugMaterialFx {
  CPlugMaterialFxDynaMobil();

};

struct CPlugScriptWithSettings : public CMwNod {
  CPlugScriptWithSettings();

  CPlugFileTextScript* Script;
  const MwBuffer<CScriptSetting*> Settings;
  void UpdateSettingsFromScript();
};

// File extension: 'zip'
struct CPlugFileZip : public CPlugFileFidContainer {
  CPlugFileZip();

  bool DisableCrc32Check;
};

struct CPlugFileAudioMotors : public CPlugFile {
  CPlugFileAudioMotors();

};

struct CPlugBitmapRender : public CPlug {
  enum class ECPlugBitmapRender__ETrigger {
    None = 0,
    Once = 1,
    EachFrame = 2,
  };
  ECPlugBitmapRender__ETrigger TriggerRender;
  uint cFrameToSkip;
  UnnamedEnum RenderPath;
  enum class ERenderPathFails {
    Ignore = 0,
    Hide = 1,
  };
  ERenderPathFails RenderPathFails;
  bool IVIdMaskReflected;
  bool IVIdMaskReflectMirror;
  bool IVIdMaskRefracted;
  bool IVIdMaskViewDepBump;
  bool IVIdMaskViewDepOcclusion;
  bool IVIdMaskOnlyRefracted;
  bool IVIdMaskHideWhenUnderground;
  bool IVIdMaskFoilage;
  bool IVIdMaskHideAlways;
  bool IVIdMaskHideButPick;
  bool IVIdMaskBackground;
  bool IVIdMaskGrassRGB;
  bool IVIdMaskLightGenP;
  bool IVIdMaskVehicle;
  bool IVIdMaskHideOnlyDirect;
  bool IVIdMaskInvisibleStopBounce;
  bool IVIdRefReflected;
  bool IVIdRefReflectMirror;
  bool IVIdRefRefracted;
  bool IVIdRefViewDepBump;
  bool IVIdRefViewDepOcclusion;
  bool IVIdRefOnlyRefracted;
  bool IVIdRefHideWhenUnderground;
  bool IVIdRefFoilage;
  bool IVIdRefHideAlways;
  bool IVIdRefHideButPick;
  bool IVIdRefBackground;
  bool IVIdRefGrassRGB;
  bool IVIdRefLightGenP;
  bool IVIdRefVehicle;
  bool IVIdRefHideOnlyDirect;
  bool IVIdRefInvisibleStopBounce;
  bool SVIdMaskReflected;
  bool SVIdMaskReflectMirror;
  bool SVIdMaskRefracted;
  bool SVIdMaskViewDepBump;
  bool SVIdMaskViewDepOcclusion;
  bool SVIdMaskOnlyRefracted;
  bool SVIdMaskHideWhenUnderground;
  bool SVIdMaskFoilage;
  bool SVIdMaskHideAlways;
  bool SVIdMaskHideButPick;
  bool SVIdMaskBackground;
  bool SVIdMaskGrassRGB;
  bool SVIdMaskLightGenP;
  bool SVIdMaskVehicle;
  bool SVIdMaskHideOnlyDirect;
  bool SVIdMaskInvisibleStopBounce;
  bool SVIdRefReflected;
  bool SVIdRefReflectMirror;
  bool SVIdRefRefracted;
  bool SVIdRefViewDepBump;
  bool SVIdRefViewDepOcclusion;
  bool SVIdRefOnlyRefracted;
  bool SVIdRefHideWhenUnderground;
  bool SVIdRefFoilage;
  bool SVIdRefHideAlways;
  bool SVIdRefHideButPick;
  bool SVIdRefBackground;
  bool SVIdRefGrassRGB;
  bool SVIdRefLightGenP;
  bool SVIdRefVehicle;
  bool SVIdRefHideOnlyDirect;
  bool SVIdRefInvisibleStopBounce;
  bool CustomFog;
  float FogCustomFarZ;
  bool TreeMipForceLowQ;
  bool RenderShadows;
  bool NoShadowMPass;
  bool RenderProjectors;
  bool RenderZoneFogG;
  bool RenderLightFlares;
  bool InvertY;
  bool OnePixBorder;
  bool UseZBuffer;
  ECPlugBitmapRender__ETrigger TriggerClearRGBA;
  vec3 ClearRGB;
  float ClearAlpha; // Range: 0 - 1
  UnnamedEnum ClearFogColor;
  bool IgnoreClearBitmap;
  bool HideSun;
  bool WriteRed;
  bool WriteGreen;
  bool WriteBlue;
  bool WriteAlpha;
  bool WriteTranslAlpha;
  bool ForceAlphaToOne;
  bool ForceAlphaToWrittenZ;
  CPlugBitmap* BitmapClear;
  UnnamedEnum BitmapClearMode;
  vec2 BitmapClearUV;
  uint SuperSampleLevel;
  uint BlurTexelCount;
  bool BlurWRed;
  bool BlurWGreen;
  bool BlurWBlue;
  bool BlurWAlpha;
  uint GutterTexelCount;
  bool HdrToneMap;
  bool RenderMultiLight;
  bool UpdateForEachCamera;
  CPlugBitmapRenderSub* RenderSub;
  void CleanRenderCache();
};

struct CPlugBitmapRenderWater : public CPlugBitmapRender {
  CPlugBitmapRenderWater();

  enum class ECPlugBitmap____ {
    Refraction = 0,
    Reflection = 1,
  };
  ECPlugBitmap____ WaterType;
  float FogMaxDepth;
  float FogClampAboveDist;
  float MaxDistPlaneToAlpha;
  bool MirrorGeom;
  float MirrorScaleY; // Range: 0 - 1
  bool UseClipPlane;
  float ClipPlaneHeight;
  bool UseFMargin;
  bool FrustumUseHorizon;
  float FMargin;
  float FHMargin;
  bool RndLDirSpecInA;
  bool MaskWater2d;
  bool UseCameraZClip;
  bool AddWaterFog;
  bool NoSubWaterOptim;
  bool BlitCubeAtFarZ;
  bool DisableGeomOptim;
  UnnamedEnum ReflectNoGeom;
  UnnamedEnum QualityTech3;
  bool DisableConfigQuality;
  bool HqSplitSkyOutDepth;
  bool FogUseSharedParams;
  UnnamedEnum WaterHeight;
  float m_WaterHeightInW;
  bool UseBufferRefract;
  uint DisableRenderSkipOptims;
  float InvisibleRatio;
  uint InvisibleSleepPeriod;
  const float TmpWaterVisibilityRatio; // Range: 0 - 1
  uint MaxUpdatePeriod;
  float MaxCameraDeltaPos;
  float MinCameraDeltaCos;
  const float FrameRenderRatio;
  CPlugBitmap* BitmapSplitSky;
  CPlugBitmap* BitmapDepth;
};

struct CPlugBitmapRenderCubeMap : public CPlugBitmapRender {
  CPlugBitmapRenderCubeMap();

  void SaveInTga();
  uint CubeFaceCount;
  vec3 CenterPos;
  float NearZ;
  float FarZ;
  UnnamedEnum eFarZ;
  float MinDistToUpdate;
  bool AverageReceiverCenters;
  UnnamedEnum Discard;
  bool UseItemShaderFilter;
  CPlugBitmap* BitmapImageSpace;
  float BitmapImageSpaceDistToCenter;
  float BitmapImageSpaceScaleHeight;
};

struct CPlugBitmapRenderCamera : public CPlugBitmapRender {
  CPlugBitmapRenderCamera();

  bool UseCameraDrawRect;
  bool UseCameraScissor;
  UnnamedEnum CameraMode;
  iso4 CameraToVisual;
  float ScaleZRange;
  CMwNod* Camera;
  float DepthBias;
  float DepthBiasSlope;
  float PlaneY_Offset;
};

struct CPlugBitmapRenderVDepPlaneY : public CPlugBitmapRender {
  CPlugBitmapRenderVDepPlaneY();

  CPlugViewDepLocator* ViewDepLocator;
};

struct CPlugFileSndGen : public CPlugFileSnd {
  CPlugFileSndGen();

};

struct CPlugMaterialFxGenCV : public CPlugMaterialFx {
  CPlugMaterialFxGenCV();

  float DeltaYMax;
  float DeltaYMin;
  MwArray<CPlugMaterial*> MaterialToRayCasts;
};

// File extension: 'SoundEngine.Gbx'
struct CPlugSoundEngine : public CPlugSound {
  CPlugSoundEngine();

  MwArray<CPlugSoundComponent*> Components;
  float MaxRpm;
  CFuncKeysReal* const Volume_Speed;
  CFuncKeysReal* const Volume_Distance;
  CFuncKeysReal* const Volume_Rpm;
  CFuncKeysReal* const Volume_Accel;
  CFuncKeysReal* const Alpha_Speed;
  CFuncKeysReal* const Alpha_Distance;
  CFuncKeysReal* const Alpha_Rpm;
  CFuncKeysReal* const Alpha_Accel;
};

struct CPlugSoundComponent : public CMwNod {
  CPlugSoundComponent();

  CPlugFileSnd* PlugFile;
  float MinVolume;
  float MaxVolume;
  float FadeInStartSpeedKmh;
  float FadeInEndSpeedKmh;
  float FadeOutStartSpeedKmh;
  float FadeOutEndSpeedKmh;
  float MinPitch;
  float MaxPitch;
  float PitchShiftStartSpeedKmh;
  float PitchShiftEndSpeedKmh;
};

struct CPlugBitmapRenderSolid : public CPlugBitmapRender {
  CPlugBitmapRenderSolid();

  UnnamedEnum TriggerBitmap;
  UnnamedEnum TriggerShader;
  UnnamedEnum TriggerSolid;
  UnnamedEnum BitmapFilter;
  CPlugBitmap* Bitmap;
  CPlugShader* Shader;
  const MwBuffer<CPlugSolid*> Solids;
  MwBuffer<iso4> Locations;
};

struct CPlugBitmapRenderSub : public CPlugBitmapRender {
  CPlugBitmapRenderSub();

  CPlugShader* ShaderToForce;
};

// File extension: 'Model.Gbx'
struct CPlugModel : public CPlugTreeGenerator {
  CPlugModel();

  string Origin;
  float ExportScale;
  CPlugModelTree* const ModelTree;
  CPlugSkel* const Skel;
  CPlugPath* const Path;
  float VertexPositionsQuantize;
};

struct CPlugIconIndex : public CMwNod {
  CPlugIconIndex();

};

struct CPlugVehicleGearBox : public CMwNod {
  CPlugVehicleGearBox();

};

struct CPlugFileModel : public CPlugFile {
};

struct CPlugFileModelObj : public CPlugFileModel {
  CPlugFileModelObj();

};

// File extension: 'GenSolid.Gbx'
struct CPlugTreeGenSolid : public CPlugTreeGenerator {
  CPlugTreeGenSolid();

  bool MergeInstances;
  CPlugSolid* Solid;
  CPlugMaterial* SolidReplaceMaterial;
  bool UseCustomFuncTree;
  float CustomFuncTreePhase;
  float CustomFuncTreePeriodScale;
};

struct CPlugFileModel3ds : public CPlugFileModel {
  CPlugFileModel3ds();

};

struct CPlugModelLodMesh : public CMwNod {
  CPlugModelLodMesh();

  const bool OptimSplitGridIsUse;
  vec3 OptimSplitGridCellSize;
  vec3 OptimSplitGridOrigin;
  string OptimGroupId;
  bool OptimIsCreateSubInfluences;
};

// File extension: 'ModelFur.Gbx'
struct CPlugModelFur : public CMwNod {
  CPlugModelFur();

  uint RandSeed;
  bool Enabled;
  string MaterialName;
  CPlugMaterial* Material;
  CMwNod* DiffuseMap;
  CMwNod* SpecularMap;
  CMwNod* DensityMap;
  CMwNod* DirAlphaMap;
  CMwNod* DirBetaMap;
  CMwNod* WidthMap;
  CMwNod* LengthMap;
  CMwNod* CurvatureMap;
  uint MapAtlasX;
  uint MapAtlasY;
  bool RandomUDir;
  float DirAlphaDeg;
  float DirAlphaVarDeg;
  float DirBetaDeg;
  float DirBetaVarDeg;
  float CurvatureDeg;
  float CurvatureVarDeg;
  float HelixDeg;
  float HelixVarDeg;
  float Width;
  float WidthVar; // Range: 0 - 1
  float Length;
  float LengthVar; // Range: 0 - 1
  float NormalBendAngleX;
  float NormalBendAngleY;
  bool Debug;
  bool DoubleLayer;
  bool ModulateWidthByTriSurf;
  uint DensityMax;
  bool DensityInAtlasY;
  float DensityRandom;
  uint DensitySampling;
  float FluffPosRandom;
  bool DynaEnabled;
  float DynaK1;
  float DynaK1Var;
  float DynaK2;
  float DynaK2Var;
  float DynaAccel;
  float DynaAccelVar;
  bool DynaZeroBeta;
  float DynaAlphaMin;
  float DynaAlphaMax;
  float DynaBetaMin;
  float DynaBetaMax;
  uint FluffChunkCount;
  uint ChunkVertCount;
  bool FluffShapeCircular;
  float FluffShapeEndWidthCoef;
  uint HairMaxCount;
};

struct CPlugBitmapRenderOverlay : public CPlugBitmapRender {
  CPlugBitmapRenderOverlay();

  bool IsOverlaySelfBlur;
  float TexelByPixel;
  bool CanRenderInSubRect;
};

struct CPlugBitmapRenderLightOcc : public CPlugBitmapRender {
  CPlugBitmapRenderLightOcc();

  float FovY;
  float OpacityLightThrough; // Range: 0 - 1
  float OpacityLensFlare; // Range: 0 - 1
  float FlareThreshold; // Range: 0 - 1
  CPlugBitmap* BitmapToModulate;
};

// File extension: 'ViewDepLocator.Gbx'
struct CPlugViewDepLocator : public CMwNod {
  CPlugViewDepLocator();

  float MinY;
  float MaxY;
  bool UseWaterY;
};

// File extension: 'DecoTree.Gbx'
struct CPlugDecoratorTree : public CMwNod {
  CPlugDecoratorTree();

  MwId TreeId;
  CPlugMaterial* Material;
  CPlugTreeLight* TreeLight;
  enum class EBoolCond {
    Never = 0,
    LowOnly = 1,
    LowAndMedium = 2,
    MediumOnly = 3,
    MediumAndHigh = 4,
    HighOnly = 5,
    Always = 6,
  };
  EBoolCond ExistCond;
  EBoolCond VisibleCond;
  bool VisibleApplyOnChilds;
  EBoolCond ShadowCasterCond;
  bool ShadowCasterApplyOnChilds;
  bool TransformVisualToSurface;
  EBoolCond CollidableCond;
  bool NoLocation;
};

// File extension: 'DecoSolid.Gbx'
struct CPlugDecoratorSolid : public CMwNod {
  CPlugDecoratorSolid();

  const MwBuffer<CPlugDecoratorTree*> TreeDecorators;
};

// File extension: 'ModelFences.Gbx'
struct CPlugModelFences : public CMwNod {
  CPlugModelFences();

  float BlockSizeXZ;
  uint BlockFenceCountXZ;
  vec2 FenceRangeY;
  float LodMaxDist;
  uint RandSeed;
  CPlugMaterial* MaterialFences;
  bool IsOrthos;
  bool IsDiags;
  bool OnlyOnePlaneY;
  const bool UseSkinShader;
  bool Debug;
  bool DebugRand;
  bool DebugEdges;
};

struct CPlugFileModelFbx : public CPlugFileModel {
  CPlugFileModelFbx();

};

// File extension: 'FurWind.Gbx'
struct CPlugFurWind : public CMwNod {
  CPlugFurWind();

  vec3 WorldDir;
  float Intensity;
  CFuncNoise* NoiseFunc;
};

// File extension: 'Decal.Gbx'
struct CPlugDecalModel : public CPlug {
  CPlugDecalModel();

  bool IsObsolete;
  CPlugBitmap* Icon;
  float TexelByMeter;
  float MaxAngleN; // Range: 0 - 90
  bool FadeNormalAndZ;
  CPlugBitmap* DiffuseA;
  CPlugBitmap* Specular;
  CPlugBitmap* Roughness;
  CPlugBitmap* Normal;
  float ImpactSize;
  DataRef Svg;
  float SvgSize;
  float SvgAlpha;
  CPlugSolid* Solid;
  CPlugBitmap* _3dSpriteBitmap;
  MwId _3dSpriteGroupId;
  bool RandomInstances;
  float MaxAngleN3d; // Range: 0 - 180
  uint MinAngleN3d; // Range: 0 - 180
};

struct CPlugBitmapAtlas : public CPlug {
  CPlugBitmapAtlas();

};

// File extension: 'SphericalHarmonics.Gbx'
struct CPlugSphericalHarmonics : public CPlug {
  CPlugSphericalHarmonics();

};

struct CPlugBitmapArray : public CPlug {
  CPlugBitmapArray();

};

struct CPlugSpriteParam : public CPlug {
  CPlugSpriteParam();

  enum class ECPlugVisualSprite__ERenderMode {
    Quad = 0,
    RotatedQuad = 1,
  };
  ECPlugVisualSprite__ERenderMode RenderMode;
  UnnamedEnum Usage;
  bool RadiusInScreen;
  bool UseGlobalDir;
  bool SortBackToFront;
  vec3 GlobalDirection;
  vec2 PivotPoint;
  float GlobalDirTiltFactor; // Range: 0 - 1
  float ZBiasFactor; // Range: 0 - 1
  float TextureHeightInWorld;
  float VisibleMaxDistAtFov90;
  float VisibleMinScreenHeight01;
};

// File extension: 'exr'
struct CPlugFileExr : public CPlugFileImg {
  CPlugFileExr();

};

// File extension: 'PoissonDiscDistribution.Gbx'
struct CPlugPoissonDiscDistribution : public CPlug {
  CPlugPoissonDiscDistribution();

};

// File extension: 'hdr'
struct CPlugFileHdr : public CPlugFileImg {
  CPlugFileHdr();

};

// userName: 'AnimFile'
// File extension: 'Anim.Gbx'
struct CPlugAnimFile : public CMwNod {
  CPlugAnimFile();

  MwBuffer<CPlugSkel*> Skels;
  MwBuffer<CPlugAnimSkelBaked*> BakedClips;
  MwBuffer<CPlugAnimSkelJointGroup*> JointGroups;
  MwBuffer<CPlugAnimVariantGroup*> VariantGroups;
  MwBuffer<CPlugAnimPoseGrid*> PoseGrids;
  MwBuffer<CPlugAnimPoseGroup*> PoseGroups;
  MwBuffer<CPlugAnimSkelEdition*> EditionClips;
  MwBuffer<CPlugAnimClip*> Clips;
  MwBuffer<CPlugAnimGraph*> Graphs;
  MwBuffer<CPlugAnimGraphStack*> GraphStacks;
  MwBuffer<CPlugAnimSpotModel> Spots;
  wstring ImportString;
  wstring UpdateString;
  void Dbg();
  void Log();
  CFastBucketAlloc BucketAllocator;
};

struct CPlugVisualCelEdge : public CPlugVisual {
  CPlugVisualCelEdge();

};

// File extension: 'ParticleEmitterSubModel.Gbx'
struct CPlugParticleEmitterSubModel : public CMwNod {
  CPlugParticleEmitterSubModel();

  bool IsActive;
  bool IsSolo;
  float ActiveMinSpeedKmh;
  enum class EParticleEmitterSubModel {
    Standard = 0,
    MultiState = 1,
    OneParticle = 2,
    VortexSim_Particle = 3,
    VortexSim_VortexFilament = 4,
    VortexSim_Repulsor = 5,
    Chain = 6,
    Gpu = 7,
    Energy = 8,
  };
  EParticleEmitterSubModel ParticleEmitterSubModel;
  uint MaxParticleCount;
  bool MultiState_IsAsyncLink;
  uint PartChain_MaxCount;
  uint PartChain_MaxPartPerChain;
  bool PartChain_AddLinkOnDestroy;
  CPlugParticleGpuSpawn* GpuSpawn;
  CPlugParticleGpuModel* GpuModel;
  CPlugParticleSplashModel* SplashModel;
  uint SpawnStartTime;
  uint SpawnEndTime;
  void SpawnEndTimeNull();
  enum class ESpawnCond {
    Active_FixedPeriod = 0,
    Active_MinDist = 1,
    Active = 2,
    None = 3,
    Active_FixedDist = 4,
  };
  ESpawnCond SpawnCond;
  float SpawnPeriod;
  float SpawnMinDist;
  iso4 SpawnLocOffset;
  CFuncEnvelope* SpawnIntensityFromSpawnNormLife;
  float Life;
  float LifeVariation;
  uint LifePeriodMs_OnePart;
  enum class EMultiStateRenderMode {
    LineNormal = 0,
    LineWideWorld = 1,
    LineWideScreen = 2,
    QuadCenterLeft = 3,
    QuadUp = 4,
    WaterSplash = 5,
    LightTrail = 6,
    GrassMarks = 7,
  };
  EMultiStateRenderMode MultiStateRenderMode;
  enum class EStandardRenderMode {
    QuadCamera = 0,
    WaterSplash = 1,
    QuadSpeed = 2,
    LinesSpeedCamera = 3,
    Mesh = 4,
    Triangle = 5,
    LightOnly = 6,
    Beam = 7,
  };
  EStandardRenderMode StandardRenderMode;
  bool SortSprites;
  float ViewDistMax;
  CPlugMaterial* Material;
  CPlugShader* Shader;
  CPlugSolid2Model* Mesh;
  wstring MeshRef;
  bool MeshUseInstancing;
  enum class EMeshInstanceType {
    Color_Iso4 = 0,
    VolumeExplosion = 1,
  };
  EMeshInstanceType MeshInstanceType;
  CFuncKeysReal* MeshScaleOverLife;
  CFuncKeysReal* MeshRampMinOverLife;
  CFuncKeysReal* MeshRampMaxOverLife;
  iso4 MeshLocOffset;
  bool MeshLocUseScale;
  bool MeshLocScaleFromIntensity;
  uint CircularTrailVertPerPartCount;
  bool LightTrail_Hack_ImmobileEmitter;
  float SizeBirthRatioXY;
  vec2 SpritePivotPoint;
  enum class ETextureAtlas {
    None = 0,
    Fixed = 1,
    Random = 2,
    AnimatedRandom = 3,
    AnimatedSynchro = 4,
  };
  ETextureAtlas TextureAtlas;
  uint TextureAtlasDimX;
  uint TextureAtlasDimY;
  uint TextureAtlasCount;
  bool TextureAtlasTopToBottom;
  uint TextureAtlasFixedIndex;
  uint TextureAtlasAnimationPeriodMs;
  bool TextureAtlasAnimationRandomPhase;
  CFuncEnvelope* IntensityFilter;
  float SizeBirth;
  float SizeBirthVariation;
  bool SizeBirthUseEmissionZone;
  float SizeBirthEmissionZoneScale;
  bool SizeBirthUseIntensity;
  CFuncKeysReal* SizeBirthFromSpeedKmh;
  float SizeK;
  CFuncEnvelope* SizeOverLife;
  bool SizeUseSizeX;
  CFuncEnvelope* SizeXOverLife;
  float BeamLengthSpeedScale;
  float BeamLengthMax;
  float RollSpeedBirth;
  float RollSpeedBirthVariation;
  CFuncColorGradient* ColorGradient;
  enum class EColorGradientUse {
    RandomConstantColor = 0,
    ColorOverLife = 1,
  };
  EColorGradientUse ColorGradientUse;
  bool ColorModulateWithTransparency;
  UnnamedEnum ColorType;
  bool ColorBirthUseIntensity;
  float TransparencyBirth;
  float TransparencyBirthVariation;
  bool TransparencyBirthUseIntensity;
  CFuncEnvelope* TransparencyOverLife;
  float UScaleDist;
  float VScaleDist;
  float WaterSplashVelY;
  GxLightBall* Light;
  CFuncEnvelope* LightRadiusOverLife;
  CFuncColorGradient* LightColorOverLife;
  bool LightUseEmitterHue;
  bool LightColorModulateWithTransparency;
  float WeightBirth;
  float WeightBirthVariation;
  float FluidFrictionBirth;
  float FluidFrictionBirthVariation;
  bool FluidFrictionBirthUseIntensity;
  float FluidFrictionBirthIntensityBase; // Range: 0 - 1
  bool RelativeToEmitter;
  bool CollisionEnabled;
  float CollisionBounce;
  float CollisionDamper;
  float CollisionRadius;
  bool PrecalcEnabled;
  uint PrecalcPartCount;
  uint PrecalcSampleRate;
  uint SimulatedSmokeLifeSpanMs;
  float SimulatedSmokeInfluenceRadius;
  float SimulatedSmokeGravity; // Range: 0 - 20
  CFuncKeysReal* SimulatedSmokeParticleSizeOverLife;
  CFuncKeysReal* SimulatedSmokeParticleAlphaOverLife;
  float SimulatedSmokeParticleBaseSize;
  float SimulatedSmokeParticleSizeRandomness;
  float SimulatedSmokeParticlePositionRandomRadius;
  float SimulatedSmokeParticlePositionRandomness;
  float SimulatedSmokeParticleLifeDistance;
  vec3 SimulatedSmokeParticleBaseColor;
  CFuncKeysReal* SimulatedSmokeFilamentStrengthOverLife;
  float SimulatedSmokeFilamentBaseStrength;
  float SimulatedSmokeFilamentPositionRandomRadius;
  float SimulatedSmokeFilamentPositionRandomness;
  float EmitStateFromImpactDirNormalCoef;
  float EmitStateFromImpactDirTangentialCoef;
  float LaserLength; // Range: 0.1 - 10
  float LaserRadius; // Range: 0.01 - 3
  vec3 LaserColorCenter;
  vec3 LaserColorBorder;
  float LaserColorLerpPow; // Range: 1 - 10
  float LaserColorCenterMultiplier;
  float LaserColorBorderMultiplier;
};

// File extension: 'ParticleModel.Gbx'
struct CPlugParticleEmitterModel : public CMwNod {
  CPlugParticleEmitterModel();

  bool IsSplashMode;
  MwBuffer<CPlugParticleEmitterSubModel*> ParticleEmitterSubModels;
  MwBuffer<CMwParamStringInt*> ParticleEmitterSubModelsInLibrary;
  float ShadowMapTexelSize;
  bool EnableVortexEmitter;
  uint VortexCountPerCircle;
  float Randomness;
  float Radius;
  uint EmitPeriod;
  float Strength;
  uint LifeTime;
  float Coef;
  bool IsRelativeToEmitter;
};

// File extension: 'BeamModel.Gbx'
struct CPlugBeamEmitterModel : public CMwNod {
  CPlugBeamEmitterModel();

  MwBuffer<CPlugBeamEmitterSubModel*> SubModels;
};

struct CPlugParticleSplashModel : public CMwNod {
  CPlugParticleSplashModel();

};

struct CPlugParticleImpactModel : public CMwNod {
  CPlugParticleImpactModel();

};

struct CPlugParticleMaterialImpactModel : public CMwNod {
  CPlugParticleMaterialImpactModel();

};

struct CPlugBitmapApplyArray : public CPlug {
  CPlugBitmapApplyArray();

};

struct CPlugOpModel : public CMwNod {
  CPlugOpModel();

};

// userName: 'Skel'
// File extension: 'Skel.Gbx'
struct CPlugSkel : public CMwNod {
  CPlugSkel();

  MwId Name;
  uint16 cJoint;
  MwBuffer<MwId> JointNames;
  MwBuffer<uint16> JointParentIndexs;
  MwBuffer<iso4> RefGlobalJoints;
  UnknownType AnimLodMaxDists;
  MwBuffer<uint8> AnimJointLodIndexs;
  MwBuffer<uint8> AnimJointFixedTranss;
  MwBuffer<uint16> JointChildIndexs;
  MwBuffer<uint16> JointChildArrays;
  bool DevNonOrtho;
  CPlugSkelSetup* Setup;
  UnknownType RefLocalJointsTranss;
  MwBuffer<SPlugSkelSocket> Sockets;
  MwBuffer<SPlugSkelJointExpr> JointExprs;
  MwBuffer<SPlugSkelJointExprCache> CacheJointExprs;
};

struct CPlugSolid2Model : public CMwNod {
  CPlugSolid2Model();

};

struct CPlugFileModelCollada : public CPlugFileModel {
  CPlugFileModelCollada();

};

struct CPlugTimedPixelArray : public CPlug {
  CPlugTimedPixelArray();

};

struct CPlugResource : public CMwNod {
  CPlugResource();

};

// File extension: 'WeatherModel.Gbx'
struct CPlugWeatherModel : public CMwNod {
  CPlugWeatherModel();

  MwBuffer<CFuncWeather*> FuncWeathers;
  CPlugMoodSetting* MoodSetting;
  CFuncDayTime* FuncDayTime;
  CPlugBitmap* BitmapSpecularDir;
  CPlugBitmap* BitmapWaterFog;
};

struct CPlugFileGenScriptCtx : public CPlug {
  CPlugFileGenScriptCtx();

  uint TexelCountX;
  uint TexelCountY;
  uint TexelIndexX;
  uint TexelIndexY;
  uint LevelIndex;
  float TexelValueR;
  float TexelValueG;
  float TexelValueB;
  float TexelValueA;
};

struct CPlugFxLensFlareArray : public CPlug {
  CPlugFxLensFlareArray();

};

struct CPlugParticleEmitterSubModelGpu : public CMwNod {
  CPlugParticleEmitterSubModelGpu();

};

struct CPlugParticleGpuSpawn : public CMwNod {
  CPlugParticleGpuSpawn();

};

struct CPlugParticleGpuModel : public CMwNod {
  CPlugParticleGpuModel();

};

struct CPlugCharVisModel : public CMwNod {
  CPlugCharVisModel();

};

struct CPlugSkelSetup : public CMwNod {
  CPlugSkelSetup();

};

struct CPlugCharPhyMaterial : public CMwNod {
  CPlugCharPhyMaterial();

};

struct CPlugFxLensDirtGen : public CMwNod {
  CPlugFxLensDirtGen();

  MwId AtlasId;
  uint Count;
  float ScreenSizeYMin; // Range: 0 - 1
  float ScreenSizeYMax; // Range: 0 - 1
  float Intens_Min; // Range: 0 - 1
  float Intens_Max; // Range: 0 - 1
};

struct CPlugShieldEmitterModel : public CMwNod {
  CPlugShieldEmitterModel();

};

// File extension: 'Bullet.Gbx'
struct CPlugBulletModel : public CMwNod {
  CPlugBulletModel();

  enum class EBulletType {
    Projectile = 0,
    Laser = 1,
    Beam = 2,
    TriLaser = 3,
    ProjectileHoming = 4,
    Spear = 5,
    ProjectileGuidedMouse = 6,
    ProjectileGuidedKeyboard = 7,
    ProjectileHovering = 8,
  };
  enum class EExplosionOccultationTest {
    Binary = 0,
    Smoother = 1,
  };
  enum class EFireBulletPatternMode {
    NoPattern = 0,
    GrowingOffset = 1,
    Spiral = 2,
    Hatchet = 3,
    Net = 4,
    ChaosSpiral = 5,
  };
  EBulletType BulletType;
  float BulletRadius;
  float BulletVsRadiusMargin;
  uint BulletVsMinAgeMs;
  float Speed;
  CFuncKeysReal* SpeedFromHorizonAngle;
  float GunSpeedCoef;
  float GunSpeedCoefRatioMin;
  float GunSpeedCoefRatioMax;
  float RestSpeed;
  float LifeTime;
  float LifeTimeAfterFirstImpact;
  float Mass;
  float FluidFriction;
  float TrajectoryUTurnDistance;
  float ImpactBouncingN;
  float ImpactBouncingT;
  float TriLaserRadiusAtOneMeter_Zoom0;
  float TriLaserRadiusAtOneMeter_Zoom1;
  float TriLaserNearMissDist;
  float ProjectileNearMissDist;
  float ProjectileNearMissDelay;
  uint ChargeDurationFull;
  uint ChargeDurationStop;
  float SpearLockDist;
  float BeamMaxLength;
  bool DamageAttenuationWithDist;
  CFuncKeysReal* DamageAttenuationFromDist;
  uint ExplosionOnImpactCount;
  UnnamedEnum ExplosionOnImpactCountOnlyOnMaterialId;
  bool ExplosionOnEndLife;
  UnnamedEnum ExplosionOnSurfaceMaterialId;
  float ExplosionDetectionRadius_Resting;
  float ExplosionDetectionRadius_Flying;
  bool ExplosionOnAllPlayers;
  bool ExplosionBlowOnAllPlayers;
  int DirectHitDamageValue;
  int ExplosionDamageValue;
  float ExplosionDamageRadius;
  float ExplosionDamageRadiusAttenuation; // Range: 0 - 1
  float ExplosionBlowValue;
  float ExplosionBlowRadius;
  float ExplosionBlowRadiusAttenuation; // Range: 0 - 1
  float ExplosionElectroPulseValue;
  CFuncKeysReal* ExplosionRadiusCoefFromLifeTime;
  float ExplosionBlowVerticalScale;
  UnnamedEnum EndLifeWithoutExplosionOnMaterialId;
  EExplosionOccultationTest ExplosionOccultationTest;
  float ExplosionEnergyWhenOccluded; // Range: 0 - 1
  CFuncKeysReal* ExplosionEnergyFromLifeTime;
  float HomingDist; // Range: 1 - 100
  float HomingPeriod; // Range: 0.1 - 1
  float HomingMaxAngularSpeed; // Range: 10 - 320
  uint HomingLockDuration;
  float GuidedAngularSpeed; // Range: 10 - 320
  uint GuidedMinLifeTime;
  float GuidedRollAngleMax; // Range: 0 - 3.14159
  bool IsFlare;
  float FlareAttractionRadius;
  float FlareExplosionRadius;
  bool IsWard;
  float WardRadius;
  bool MultiSphereDetection;
  bool IsIce;
  bool Sm_AutoAim;
  float Sm_AimIntertia;
  float Sm_Recoil;
  uint Sm_ThisHitOtherBulletBonusDuration;
  float Sm_ThisHitOtherBulletBonusAmmoCount;
  uint Sm_OtherHitThisBulletBonusDuration;
  float Sm_OtherHitThisBulletBonusAmmoCount;
  bool HoldTriggerToPower;
  CFuncKeysReal* SpeedFromTriggerDuration;
  uint AmmoCostDuringTriggerDuration;
  CFuncKeysReal* SpreadCoefFormChargeDuration;
  uint FirePeriod;
  uint FireEnergyCost;
  uint FireMaxEnergyStorage;
  uint EnergyGainDelay;
  uint DefuserFirePeriod;
  uint DefuserMissAmmoLoss;
  uint FireBulletCount;
  float FireBulletDispersionAngleDeg;
  float FireBulletCountSpeedCoef;
  MwBuffer<vec3> FireBulletSpreads;
  EFireBulletPatternMode FireBulletPattern_Mode;
  bool FireBulletPattern_OnlyVisual;
  MwBuffer<vec3> FireBulletPattern_GrowingOffset_Offsets;
  float FireBulletPattern_InitialBlendDuration; // Range: 0 - 60
  uint FireBulletPattern_SpiralHatchetNet_BulletCount; // Range: 1 - 255
  float FireBulletPattern_SpiralHatchetNet_Radius; // Range: 0 - 100
  float FireBulletPattern_SpiralHatchetNet_SpinPerSecond; // Range: -1000 - 1000
  bool FireBulletPattern_RotateOddBulletsCounterClockwise;
  bool FireBulletPattern_ApexRegroup;
  float FireBulletPattern_ApexRegroup_MinApexTime; // Range: 0 - 10
  bool FireBulletPattern_ChaosSpiral_Spin;
  MwBuffer<float> FireBulletPattern_ChaosSpiral_Offsets;
  CPlugSound* SoundFire;
  CPlugSound* SoundAlive;
  CPlugSound* SoundReloading;
  CPlugSound* SoundGauge;
  CPlugSound* SoundIsHoming;
  vec3 SoundFireOffset;
  CFuncKeysReal* SoundAliveVolumeFromRemainingLifeTime;
  CFuncKeysReal* SoundAlivePitchFromRemainingLifeTime;
  CFuncKeysReal* SoundFireVolumeFromRemainingAmmo;
  CFuncKeysReal* SoundFirePitchFromRemainingAmmo;
  CPlugParticleEmitterModel* ParticleModelFire;
  CPlugParticleEmitterModel* ParticleModelAlive;
  CPlugParticleMaterialImpactModel* ImpactBounce;
  CPlugParticleMaterialImpactModel* ExplosionBullet;
  CPlugParticleMaterialImpactModel* ExplosionSurface;
  CPlugBeamEmitterModel* BeamVisualModel;
  float HiddenDist;
  vec3 VisualOffsetFirstPerson;
  float VisualOffsetDuration;
  float VisualOffsetDerivTimeOffset;
  bool WarmUp;
  wstring Name;
  CPlugBitmap* BitmapLasersight;
  CPlugBitmap* BitmapCrosshair;
  CPlugBitmap* BitmapCrosshairTriLaser;
  float SizeXScreenPercent;
  float SizeYScreenPercent;
  float SizeXScreenPercentMax;
  float SizeYScreenPercentMax;
  CPlugBitmap* Icon;
  bool ShowImpactPos;
  MwId Sm_SpModelName;
  uint Sm_SpChargeDuration;
  uint Sm_SpInactivityDelayBeforeCharge;
  bool Sm_FirstPersonCam;
  vec3 Sm_FirstPersonCamOffset;
  float Sm_FirstPersonCamFov;
  uint Sm_ProtectDuration;
};

struct CPlugDataTape : public CMwNod {
  CPlugDataTape();

};

struct CPlugSpline3D : public CMwNod {
  CPlugSpline3D();

  const float Length;
  vec3 Translate;
  CFuncKeysTrans* const Keys;
};

struct CPlugFogMatter : public CPlug {
  CPlugFogMatter();

};

struct CPlugFogVolume : public CPlug {
  CPlugFogVolume();

};

struct CPlugFogVolumeBox : public CPlugFogVolume {
  CPlugFogVolumeBox();

};

struct CPlugDynaPointModel : public CMwNod {
  CPlugDynaPointModel();

  vec3 Center;
  float Radius;
  float Friction;
  float Restitution;
  float GravityCoef;
};

struct CPlugFxLightning : public CPlug {
  CPlugFxLightning();

};

struct CPlugFxWindOnDecal : public CPlug {
  CPlugFxWindOnDecal();

};

struct CPlugFileJxr : public CPlugFileImg {
  CPlugFileJxr();

};

struct CPlugFileWebP : public CPlugFileImg {
  CPlugFileWebP();

};

struct CPlugMaterialPack : public CPlug {
  CPlugMaterialPack();

};

struct CPlugCharPhyRecoilModel : public CMwNod {
  CPlugCharPhyRecoilModel();

};

struct CPlugFxWindOnTreeSprite : public CPlug {
  CPlugFxWindOnTreeSprite();

};

// userName: 'FlockModel'
// File extension: 'PlugFlockModel.Gbx'
struct CPlugFlockModel : public CMwNod {
  CPlugFlockModel();

  EPlugFlockType FlockType;
  uint DefSpawnCount;
  CMwNod* BirdModel;
  CSystemFidFile* BirdModelFid;
  CSystemFidFile* AnimFile_Fid;
  CPlugSound* SoundLoop;
  CPlugSound* SoundEventTakeOff;
  float Volatility; // Range: 0 - 1
  float Range;
  float CosViewAngle;
  float MinSpeed;
  float MaxSpeed;
  uint UpdateFrequency;
  float Variance;
  float vAvoidance;
  float kAvoidance;
  float vGrouping;
  float kGrouping;
  float vMatching;
  float kMatching;
  float vGroundAvoid;
  float kGroundAvoid;
  uint StandingDuration;
  uint AnimPeriod;
  uint Anim_StandingStart;
  uint Anim_StandingEnd;
  uint Anim_GlidingStart;
  uint Anim_GlidingEnd;
  uint Anim_FlappingStart;
  uint Anim_FlappingEnd;
};

struct CPlugVehicleVisEmitterModel : public CMwNod {
  CPlugVehicleVisEmitterModel();

};

// userName: 'VehicleVisModel'
// File extension: 'VehicleVisModel.Gbx'
struct CPlugVehicleVisModel : public CMwNod {
  CPlugVehicleVisModel();

};

struct CPlugVehicleVisModelShared : public CMwNod {
  CPlugVehicleVisModelShared();

};

struct CPlugVehicleMaterialGroup : public CMwNod {
  CPlugVehicleMaterialGroup();

};

struct CPlugVehicleCameraRace3Model : public CPlugCamControlModel {
  CPlugVehicleCameraRace3Model();

};

struct CPlugBodyPath : public CMwNod {
  CPlugBodyPath();

};

struct CPlugCharPhySpecialProperty : public CMwNod {
  CPlugCharPhySpecialProperty();

};

struct CPlugParticleGpuVortex : public CMwNod {
  CPlugParticleGpuVortex();

};

struct CPlugGameSkin : public CMwNod {
  CPlugGameSkin();

};

struct CPlugFxHdrScales_Tech3 : public CPlug {
  CPlugFxHdrScales_Tech3();

};

struct CPlugVehicleCameraRace2Model : public CPlugCamControlModel {
  CPlugVehicleCameraRace2Model();

};

struct CPlugVehicleCameraInternalModel : public CPlugCamControlModel {
  CPlugVehicleCameraInternalModel();

};

// File extension: 'AnimLocSimple.Gbx'
struct CPlugAnimLocSimple : public CMwNod {
  CPlugAnimLocSimple();

  uint Axis;
  uint RotPeriod;
  uint RotPeriodMax;
  uint TransPeriod;
  uint TransPeriodMax;
  float TransY;
};

struct CPlugLightUserModel : public CMwNod {
  CPlugLightUserModel();

  vec3 Color;
  float Intensity;
  float Distance;
  float PointEmissionRadius;
  float PointEmissionLength;
  float SpotInnerAngle;
  float SpotOuterAngle;
  float SpotEmissionSizeX;
  float SpotEmissionSizeY;
  bool NightOnly;
};

struct CPlugCharPhyMaterials : public CMwNod {
  CPlugCharPhyMaterials();

};

struct CPlugCharPhyModelCustom : public CMwNod {
  CPlugCharPhyModelCustom();

  float EyesHeight;
  float Radius;
  float SpeedCoef;
  float AggroRadius;
  float ShootRadius;
  float TargetMinDistance;
  float DisengageDistance;
  float Accuracy; // Range: 0 - 1
  uint Reaction;
  uint ShootPeriod;
  uint ArmorMax;
  uint Fov;
};

// File extension: 'Mat.Gbx'
struct CPlugMaterialUserInst : public CMwNod {
  CPlugMaterialUserInst();

  enum class ETexAddress {
    Wrap = 0,
    Mirror = 1,
    Clamp = 2,
    Border = 3,
  };
  enum class EMaterialModelStatic {
    TDSN = 0,
    TDOSN = 1,
    TDOBSN = 2,
    TDSNE = 3,
    TDSNI = 4,
    TDSNI_Night = 5,
    TIAdd = 6,
  };
  enum class EMaterialModelDyna0 {
    ZOnly_Water = 0,
    TDSNI = 1,
    TI = 2,
    TI_AddModCV = 3,
    TDSNE = 4,
    TE = 5,
    TIce = 6,
    TShield = 7,
  };
  enum class EMaterialModelChar {
    TDSNEM = 0,
    TE = 1,
    TDOSNEM = 2,
    TDOSN = 3,
    TDOSN2Sided = 4,
    TDOS = 5,
    Part = 6,
    Body = 7,
  };
  enum class EMaterialModelVehicle {
    Skin = 0,
    SkinDmg = 1,
    SkinNoSkelDmg = 2,
    Details = 3,
    DetailsDmg = 4,
    DetailsDmgNormal = 5,
    DetailsNoSkelDmg = 6,
    Glass = 7,
    GlassDmg = 8,
    GlassDmgCrack = 9,
    GlassNoSkelDmg = 10,
  };
  bool IsUsingGameMaterial;
  const string Collection;
  uint MaterialId;
  string LinkFull;
  EMaterialModelStatic ModelModelStatic;
  EMaterialModelDyna0 ModelModelDyna0;
  EMaterialModelChar ModelModelChar;
  EMaterialModelVehicle ModelModelVehicle;
  MwId Model;
  wstring BaseTexture;
  DataRef TexturesDiffuse;
  DataRef TexturesDiffuseO;
  DataRef TexturesBaseColor;
  DataRef TexturesBaseColorO;
  DataRef TexturesSpecular;
  DataRef TexturesNormal;
  DataRef TexturesEnergy;
  DataRef TexturesTeamMask;
  DataRef TexturesSelfIllum;
  DataRef TexturesDamage;
  DataRef TexturesDirt;
  DataRef TexturesShield;
  DataRef TexturesRoughMetal;
  MwId Link;
  ETexAddress TilingU;
  ETexAddress TilingV;
  float TextureSizeInMeters;
  uint PhysicsID;
  uint Dbg_PhysicsID;
  string PhysicsName;
  uint Dbg_PhysicsName;
  bool IsNatural;
  MwId HidingGroup;
};

struct CPlugMoodSetting : public CPlug {
  CPlugMoodSetting();

};

struct CPlugMoodAtmo : public CPlug {
};

struct CPlugBodyGraph : public CMwNod {
  CPlugBodyGraph();

};

struct CPlugCustomBulletModel : public CMwNod {
  float BulletSpeed;
  float BulletGunSpeedCoef;
  float BulletGunSpeedCoefRatioMin;
  float BulletGunSpeedCoefRatioMax;
  float BulletRecoil;
  float BulletFluidFriction;
  uint BulletHomingDamageMinAngle_Deg;
  uint BulletHomingDamageMaxAngle_Deg;
  bool BulletIsIce;
};

struct CPlugTriggerAction : public CMwNod {
  float StartYaw;
};

// File extension: 'BeamModel.Gbx'
struct CPlugBeamEmitterSubModel : public CMwNod {
  CPlugBeamEmitterSubModel();

  bool EdVisible;
  CPlugMaterial* Material;
  const MwBuffer<CPlugMaterial*> AdditionalMaterials;
  enum class EDisplayType {
    LinesWide = 0,
    Cylinder = 1,
    Helix = 2,
    HelixWithCylinder = 3,
    DoubleHelix = 4,
    DoubleHelixWithHelix = 5,
    BeamWithCylinders = 6,
    BeamWithSpheres = 7,
    Lightning = 8,
    Analytic = 9,
    EnergyPrim = 10,
    LinesCurved = 11,
  };
  EDisplayType DisplayType;
  float UVScale;
  uint CylinderSideCount;
  uint Duration;
  float Radius;
  float USpeed;
  float VSpeed;
  bool BackFace;
  float LightningMaxJitterDistPerStep; // Range: 0 - 1
  float LightningJitterRadius; // Range: 0 - 5
  float LightningDistStep; // Range: 0 - 10
  float LightningLenMax;
  uint LightningBeamCount;
  float FadeTimeOffset;
  float FadeTimeScale;
  uint Helix_VerticesCountPerTurn;
  float Helix_TurnLength;
  float Helix_OutterRadius;
  float Helix_InnerRadius;
  bool Helix_ClockWise;
  float Helix_DistLOD;
  float Helix_CoeffLowDef;
  uint Helix_MaxHelixCount;
  float DoubleHelix_StartAngle;
  bool DoubleHelix_ClockWise;
  uint BeamWithCylinders_NbSubDiv;
  float BeamWithCylinders_StepSize;
  float BeamWithCylinders_InnerRadius;
  float BeamWithCylinders_OutterRadius;
  float BeamWithCylinders_HalfWidth;
  float BeamWithCylinders_FadeSpeed;
  float BeamWithCylinders_TimeStartFade;
  float BeamWithCylinders_DistLOD;
  float BeamWithCylinders_CoeffLowDef;
  uint BeamWithSpheres_NbVerticalSubDiv;
  uint BeamWithSpheres_NbSpheresPerMeter;
  float BeamWithSpheres_Radius;
  float BeamWithSpheres_StartDistance;
  float BeamWithSpheres_EndDistance;
  float BeamWithSpheres_DistLOD;
  uint BeamWithSpheres_MaxDetailedRailsCount;
  float BeamWithSpheres_Speed;
  vec3 ColorCenter;
  vec3 ColorBorder;
  float ColorLerpPow; // Range: 1 - 10
  float ColorCenterMultiplier;
  float ColorBorderMultiplier;
  float LaserRadius;
  vec3 TriColorCenter;
  vec3 TriColorBorder;
  float TriColorLerpPow; // Range: 1 - 10
  float TriColorCenterMultiplier;
  float TriColorBorderMultiplier;
  float TriLaserRadius;
  float StartOffsetAtEndLife;
  bool EnableTriLaser;
  bool EnableCenterLaser;
  float SharpIntensity;
  float SharpFadeEndAtEndLife;
  float SharpStartOffset;
  float SharpScale; // Range: 0.1 - 1
  bool SharpEnabled;
  float SharpEnergy;
  bool SharpFadeOut;
  bool SharpShrinkOverLife;
  float BloomIntensity;
  float BloomFadeEndAtEndLife;
  float BloomStartOffset;
  float BloomScale; // Range: 0.1 - 1
  bool BloomEnabled;
  float BloomEnergy;
  bool BloomFadeOut;
  bool BloomShrinkOverLife;
};

// File extension: 'PlugProbe.Gbx'
struct CPlugProbe : public CPlug {
  CPlugProbe();

};

struct CPlugCustomBeamModel : public CMwNod {
  string BulletName;
  float LaserRadiusDamage;
  float BulletVsRadius;
  float LaserDispersionAngle;
  uint BeamType;
  bool DamageAttenuationWithDist;
  CFuncKeysReal* DamageAttenuationFromDist;
  vec3 VisualOffsetFirstPerson;
};

struct CPlugFileWebM : public CPlugFileVideo {
  CPlugFileWebM();

};

struct CPlugCharVisModelCustom : public CMwNod {
  CPlugCharVisModelCustom();

  const bool IsSprite;
};

struct CPlugCamShakeModel : public CMwNod {
  CPlugCamShakeModel();

};

struct CPlugCamControlModel : public CMwNod {
  CPlugCamShakeModel* Shake;
};

struct CPlugImportMeshParam : public CMwNod {
  CPlugImportMeshParam();

  float ForceScale;
  bool ForceSmoothNormals;
  string NodePrefix;
  string JointPrefix;
  string MeshSkipPrefix;
  string MeshOnlyPrefix;
  string MeshSkipSuffix;
  string MeshOnlySuffix;
  MwBuffer<CPlugMaterialUserInst*> MatUserModels;
  MwBuffer<CPlugLightUserModel*> LightUserModels;
  string Skel_GenericRootName;
  string Skel_DummyPrefix;
  string Skel_SocketPrefix;
  bool Skel_SocketOnly;
  uint TextureParams_MaxSize;
  bool TextureParams_HqDds;
  string CollectionName;
  EImportMeshType ImportMeshType;
  string FileNameSuffix;
  bool GenerateSkel;
  EPlugModelShadingType ModelShadingType;
  uint MaxInfluenceCount;
  MwBuffer<SPlugSkelJointExpr> SkelJointExprs;
};

struct CPlugVehicleCarPhyShape : public CMwNod {
  CPlugVehicleCarPhyShape();

};

// File extension: 'Turret.Gbx'
struct CPlugTurret : public CMwNod {
  CPlugTurret();

  enum class ETurretFixedAngleSignal {
    Constant = 0,
    Linear = 1,
    PingPong = 2,
  };
  enum class EOnArmorEmtpy {
    Destroy = 0,
    Disable = 1,
  };
  bool AimEnabled;
  float AimDetectRadius;
  float AimDetectFOVDeg;
  float AimMaxTrackDist;
  float AimAnticipation;
  uint AimKeepAimingDurationMs;
  uint AimFireTargetChangeDelayMs;
  float AimFireMaxAngleDeg;
  float AimFireMaxDist;
  ETurretFixedAngleSignal FixedAngleSignal;
  uint FixedAnglePeriodMs;
  float FixedAngleMinDeg;
  float FixedAngleMaxDeg;
  uint LifeArmorMax;
  float LifeDisabledDuration;
  EOnArmorEmtpy LifeOnArmorEmtpy;
  bool IsControllable;
  uint FirePeriodMs;
  MwId Joint0Name;
  vec3 Joint0LocalAxis;
  float Joint0MinAngleDeg;
  float Joint0MaxAngleDeg;
  float Joint0SpeedDegPerS;
  float Joint0NextJointUpdateAngleMaxDeg;
  MwId Joint1Name;
  vec3 Joint1LocalAxis;
  float Joint1MinAngleDeg;
  float Joint1MaxAngleDeg;
  float Joint1SpeedDegPerS;
  float Joint1NextJointUpdateAngleMaxDeg;
  MwId JointFireName;
  vec3 JointFireLocalAxis;
  MwId JointRadarName;
  CPlugParticleEmitterModel* OnFireParticle;
  DataRef Skel;
  DataRef Shape;
  DataRef BulletModel;
  DataRef Mesh;
  DataRef RotateSound1;
  DataRef VisEntFx;
};

struct CPlugVehicleCamInternalVisOffset : public CMwNod {
  CPlugVehicleCamInternalVisOffset();

};

// File extension: 'Shield.Gbx'
struct CPlugShieldModel : public CMwNod {
  CPlugShieldModel();

  bool IsBouncing;
  bool NeedActivation;
  uint ShieldArmor;
  uint ShieldDuration;
  vec3 RelativePos;
  uint TextureNotches;
  DataRef Shape;
  DataRef ShieldVisModel;
  DataRef ShieldActiveSound;
  DataRef ShieldTouchSound;
  DataRef ShieldDestroySound;
  DataRef ShieldTouchParticle;
};

struct CPlugVehicleCameraRaceModel : public CPlugCamControlModel {
  CPlugVehicleCameraRaceModel();

};

struct CPlugVehicleCameraHmdExternalModel : public CPlugCamControlModel {
  CPlugVehicleCameraHmdExternalModel();

};

struct CPlugVehicleVisGeomModel : public CMwNod {
  CPlugVehicleVisGeomModel();

};

// File extension: 'VisEntFx.Gbx'
struct CPlugVisEntFxModel : public CMwNod {
  CPlugVisEntFxModel();

  CPlugParticleEmitterModel* Part_Deactivated;
  CPlugParticleEmitterModel* Part_DeactivatedShot;
  CPlugParticleEmitterModel* Part_TeleportSpawn;
  CPlugParticleEmitterModel* Part_TeleportUnspawn;
  CFuncKeysReal* EliminatedTeleportIntens;
  CFuncKeysReal* EliminatedHighlight;
  vec3 EliminatedHighlightRgb;
  GxLightBall* TacticalLight;
};

struct CPlugGpuBuffer : public CMwNod {
  CPlugGpuBuffer();

};

struct CPlugPolyLine3 : public CMwNod {
  CPlugPolyLine3();

  MwBuffer<vec3> Poss;
  MwBuffer<vec3> Lefts;
};

struct CPlugPath : public CMwNod {
  CPlugPath();

};

struct CPlugMoodBlender : public CPlug {
  CPlugMoodBlender();

};

// File extension: 'Train.Gbx'
struct CPlugTrainModel : public CMwNod {
  CPlugTrainModel();

  MwBuffer<CPlugTrainWagonModel*> Wagons;
};

// File extension: 'Wagon.gbx'
struct CPlugTrainWagonModel : public CMwNod {
  CPlugTrainWagonModel();

  CPlugSurface* Shape;
  CPlugSolid2Model* Mesh;
  CPlugSound* Engine;
  CPlugSound* Brake;
  CPlugSound* RailContact;
  CPlugSound* Collision;
  CPlugParticleEmitterModel* SmokeEmitterModel;
  bool IsLoco;
  CFuncKeysReal* AccelCurve;
  float WagonLength;
  float WagonColOffset;
  bool GenLengthFromShape;
};

struct CPlugMoodCurve : public CPlug {
};

// userName: 'VehiclePhyModelCustom'
// File extension: 'VehiclePhyModelCustom.Gbx'
struct CPlugVehiclePhyModelCustom : public CMwNod {
  CPlugVehiclePhyModelCustom();

  float AccelCoef;
  float ControlCoef;
  float GravityCoef;
};

struct CPlugEntRecordData : public CMwNod {
  CPlugEntRecordData();

};

// File extension: 'WagonCustom.Gbx'
struct CPlugTrainWagonModelCustom : public CMwNod {
  CPlugTrainWagonModelCustom();

  float Speed;
  float Accel;
  float Mass;
};

// File extension: 'EntitySpawner.Gbx'
struct CPlugEntitySpawner : public CMwNod {
  CPlugEntitySpawner();

  UnnamedEnum EntityType;
  CMwNod* Model;
  CMwNod* ModelRef;
  iso4 Loc;
};

struct CPlugWeather_DayTimeElem_Compat : public CMwNod {
  CPlugWeather_DayTimeElem_Compat();

};

struct CPlugWeather_WindBlockerElem : public CMwNod {
  CPlugWeather_WindBlockerElem();

};

struct CPlugDynaConstraintModel : public CMwNod {
  CPlugDynaConstraintModel();

};

struct CPlugRoadChunk : public CMwNod {
  CPlugRoadChunk();

};

struct CPlugAnimGraph : public CMwNod {
  CPlugAnimGraph();

  MwId Name;
  MwBuffer<CPlugAnimGraphState> States;
  MwBuffer<CPlugAnimGraphTransition> Transitions;
  MwId DefaultStateName;
  EPlugAnimGraphBlending Blending;
};

struct SPlugVehicleOccupantSpawn {
  vec3 Pos;
  uint iSlot;
};

struct SPlugVehicleOccupantSlot {
};

struct CPlugVehicleWheelPhyModel {
  MwId Id;
  bool IsDriving;
  bool IsSteering;
};

struct CPlugDynaModel : public CMwNod {
  CPlugDynaModel();

  float LinearMass;
  float MaxDistPerStep;
  vec3 CenterOfMass;
  float AngularSpeedClamp;
  bool Use_TM_Simulation;
};

// userName: 'AdnPart'
// File extension: 'AdnPart.gbx'
struct CPlugAdnPart : public CMwNod {
  CPlugAdnPart();

  CPlugSolid2Model* Mesh;
  MwBuffer<SPlugAdnTag> RequiredTags;
  MwBuffer<SPlugAdnTag> Tags;
  CPlugMetaData* BaseShader;
  MwBuffer<CPlugMetaData*> DefaultShaders;
};

struct CPlugAnimSkelBaked : public CMwNod {
  CPlugAnimSkelBaked();

  CPlugAnimTimingFixedPeriod Timing;
  CPlugAnimSkelJointGroup* JointGroup;
  CPlugAnimClipFlags Flags;
  MwBuffer<GmTransQuat> LocalJointsData;
  MwBuffer<GmTransYaw> RootMotionFrames;
  MwBuffer<MwId> FloatChannelIds;
  MwBuffer<float> FloatChannelData;
};

struct CPlugAnimSkelJointGroup : public CMwNod {
  CPlugAnimSkelJointGroup();

  MwId Name;
  MwBuffer<MwId> JointNames;
  MwBuffer<float> JointWeights;
  CPlugSkel* OldSkel;
  MwBuffer<uint16> OldJointIndexs;
};

struct CPlugAnimSkelEdition : public CMwNod {
  CPlugAnimSkelEdition();

  CPlugSkel* Skel;
};

// userName: 'AnimClip'
// File extension: 'AnimClip.Gbx'
struct CPlugAnimClip : public CMwNod {
  CPlugAnimClip();

  MwId Name;
  CPlugAnimSkelBaked* Baked;
  CPlugAnimSkelEdition* Edition;
  CPlugAnimClipFlags Flags;
};

struct CPlugAnimPoseGrid : public CMwNod {
  CPlugAnimPoseGrid();

  MwId Name;
  CPlugAnimSkelJointGroup* JointGroup;
  MwBuffer<float> Xs;
  MwBuffer<float> Ys;
  MwBuffer<quat> RefPoseGlobalJoints;
  MwBuffer<GmTransQuat> JointOffsets;
  MwId RefPoseName;
  MwBuffer<MwId> PoseNames;
};

struct CPlugAnimPoseGroup : public CMwNod {
  CPlugAnimPoseGroup();

  MwId Name;
  CPlugAnimSkelJointGroup* JointGroup;
  uint cPose;
  MwBuffer<vec2> PoseCoords;
  MwBuffer<MwId> PoseNames;
  bool IsDifference;
  MwId DifferenceFromClip;
};

struct CPlugAnimGraphStack : public CMwNod {
  CPlugAnimGraphStack();

  MwId Name;
  MwBuffer<CPlugAnimGraph*> Graphs;
};

struct CPlugAnimChannelGroup : public CMwNod {
  CPlugAnimChannelGroup();

};

struct CPlugAnimSkelEditionPose : public CMwNod {
  CPlugAnimSkelEditionPose();

};

struct CPlugAnimVariantGroup : public CMwNod {
  CPlugAnimVariantGroup();

};

struct CPlugAnimSpotModel {
  MwId Name;
  EPlugAnimSpotType SpotType;
};

// userName: 'AdnModel'
// File extension: 'AdnModel.gbx'
struct CPlugAdnModel : public CMwNod {
  CPlugAdnModel();

  MwBuffer<CPlugAdnPartInstance> PartInstances;
  MwBuffer<SPlugAdnTag> Tags;
};

// userName: 'AdnProject'
// File extension: 'AdnProject.gbx'
struct CPlugAdnProject : public CMwNod {
  CPlugAdnProject();

  CSystemFidsFolder* RootFolder;
  CPlugMetaData* DefaultPartShader;
  CPlugMetaData* DefaultSkinShader;
  string TextureNameStopAtString;
  MwBuffer<STagFromName> TagsFromNames;
  uint PartShaderDefaultCount;
  MwBuffer<CPlugAdnRandomGroup*> RandomGroups;
};

// userName: 'AdnRandomGen'
// File extension: 'AdnRandomGen.gbx'
struct CPlugAdnRandomGen : public CMwNod {
  CPlugAdnRandomGen();

  uint RandSeed;
  uint cModel;
  uint cDispModel;
  MwBuffer<SPlugAdnTag> RequiredTags;
  MwBuffer<SPlugAdnTag> ExcludedTags;
};

struct CPlugAnimImport : public CMwNod {
  CPlugAnimImport();

  SImportParams Params;
  MwBuffer<SRigImportParams> Rigs;
  void ClipsDisableAll();
  MwBuffer<SClipImportParams> Clips;
};

// userName: 'PlugMaterial_VertexIndex'
// File extension: 'MaterialVId.Gbx'
struct CPlugMaterial_VertexIndex : public CMwNod {
  CPlugMaterial_VertexIndex();

  CPlugMaterial* MaterialModel;
  CPlugBitmap* BaseColor;
  CPlugBitmap* Normal;
  CPlugBitmap* RoughMetal;
  CPlugBitmap* BlendMask;
  MwRefBuffer<CPlugMaterial*> Materials;
};

struct CPlugAdnRandomGroup : public CMwNod {
  CPlugAdnRandomGroup();

  string Name;
  MwBuffer<SPlugAdnTag> Tags;
  MwBuffer<CPlugMetaData*> RandomMetaDatas;
};

// userName: 'PlugDynaObjectModel'
// File extension: 'DynaObject.Gbx'
struct CPlugDynaObjectModel : public CMwNod {
  CPlugDynaObjectModel();

  CPlugSolid2Model* Mesh;
  CPlugSurface* Shape;
  CPlugDynaModel* DynaModel;
};

struct CPlugPrefab : public CMwNod {
  CPlugPrefab();

  MwBuffer<SEnt> Ents;
};

// userName: 'VehicleStyles'
// File extension: 'VehicleStyles.gbx'
struct CPlugVehicleVisStyles : public CMwNod {
  CPlugVehicleVisStyles();

  MwBuffer<CPlugVehicleVisStyleRandomGroup*> RandomGroups;
  string UnwantedTrafficVehiclesMatchName;
};

struct CPlugVehicleVisStyleRandomGroup : public CMwNod {
  CPlugVehicleVisStyleRandomGroup();

  MwId Name;
  string MatchName;
  MwBuffer<SPlugVehicleVisStyle> Styles;
  void SetDefault();
};

// userName: 'MetaData'
// File extension: 'MetaData.gbx'
struct CPlugMetaData : public CMwNod {
  CPlugMetaData();

  CPlugMetaData* ParentData;
};

// userName: 'PlugImageArray'
// File extension: 'ImageArray.Gbx'
struct CPlugImageArray : public CMwNod {
  CPlugImageArray();

  CSystemFidsFolder* m_Folder;
  CPlugMaterial_VertexIndex* Material_VId;
  float m_MaskScale; // Range: 1 - 4
  bool m_MaskSmooth;
  MwBuffer<SElem> Layers;
};

struct CPlugVehicleCameraHelicoModel : public CPlugCamControlModel {
  CPlugVehicleCameraHelicoModel();

};

} // namespace Plug

namespace Scene {

struct CSceneEngine : public CMwEngine {
  CSceneEngine();

};

struct CScene : public CMwNod {
  MwBuffer<CSceneMobil*> Mobils;
  MwBuffer<CSceneCamera*> Cameras;
  MwBuffer<CSceneLight*> Lights;
  CSceneConfig* SceneConfig;
  CScenePhy* const ScenePhy;
  CScenePhy* const ServerScenePhy;
  CSceneDecalsManager* const MgrDecals;
  CSceneMgrSound* const MgrSound;
  CSceneMgrParticle* const MgrParticle;
  CSceneMgrSolidVis* const MgrSolidVis;
  CSceneMgrSolid2Vis* const MgrSolid2Vis;
  CSceneMgrCharVis* const MgrCharVis;
  CSceneMgrVehicleVis* const MgrVehicleVis;
  CSceneMgrFlock* const MgrFlock;
  CSceneMgrAnim* const MgrAnim;
  CSceneMgrBulletVis* const MgrBulletVis;
  CSceneMgrBody* const MgrBody;
  CSceneMgrWeather* const MgrWeather;
  CSceneMgrMapColoring* const MgrMapColoring;
  CHmsMgrVisDyna* const MgrVisDyna;
  CMwNod* const MgrObjectVis;
  CMwNod* const MgrGateVis;
  CMwNod* const MgrShieldVis;
  CMwNod* const MoodBlender;
  float EditorHelperHdrScale;
  void LogSceneStats();
};

// File extension: 'Scene2d.Gbx'
struct CScene2d : public CScene {
  CScene2d();

  CSceneSector* const Sector;
  vec2 OverlayMin;
  vec2 OverlayMax;
  MwBuffer<CSceneLight*> Lights;
};

struct CSceneLayout : public CMwNod {
  CSceneLayout();

  MwBuffer<CSceneObject*> Objects;
  CSystemFid* WeatherModel;
  float CameraFarZ;
  float EdCamFocusZ;
  float EdCamLensSize;
  CMwNod* SceneFxNod;
  CSceneFxNod* BitmapWaterFog;
  CPlugBitmap* BitmapCubeReflectHardSpecA;
  CPlugBitmap* BitmapCubeReflectHdrAlpha2;
};

struct CSceneSector : public CMwNod {
  CSceneSector();

  CHmsZone* Zone;
  CScene* const Scene;
};

struct CSceneObject : public CMwNod {
  CScene* Scene;
  void SetLocation(iso4 Location, CSceneSector* Sector);
  CMwNod* Motion;
};

struct CSceneMgrGUI : public CMwNod {
};

struct CSceneLocation : public CSceneObject {
  CSceneLocation();

  iso4 Location;
};

struct CScenePoc : public CSceneObject {
  CHmsPoc* HmsPoc;
  bool IsActive;
};

struct CSceneCamera : public CScenePoc {
  CSceneCamera();

  MwArray<CScene2d*> Overlays;
  uint iPrecalcRender;
  const uint cPrecalcRender;
};

// File extension: 'SceneLight.Gbx'
struct CSceneLight : public CScenePoc {
  CSceneLight();

  GxLight* Light;
};

// File extension: 'Mobil.Gbx'
struct CSceneMobil : public CSceneObject {
  CSceneMobil();

  CSceneMobil* const Model;
  bool IsVisible;
  CHmsItem* Item;
  CPlugSolid* Solid;
  CPlugSolid* SolidModel;
  void Show();
  void Hide();
  CMwNod* LinkedObject;
  MwBuffer<CSceneObjectLink*> Links;
  CMotion* const MotionSolid;
  uint CastedShadows;
  bool SelfShadow;
  void SolidObjectsRefresh();
  void LinkForceUpdateAll();
};

// File extension: 'Toy.Gbx'
struct CSceneToy : public CSceneMobil {
  CSceneToy();

};

struct CSceneCloudSystem : public CMwNod {
  bool IsVisible;
  bool AutoSizeFarZ;
  float ScaleFarZ_Visibility; // Range: 0 - 1
  uint InstCountX;
  uint InstCountZ;
  float WindVortexSpeed;
  bool WindVortexUseHyperbolicSpeed;
  float WindSpeed;
  float WindDir; // Range: 0 - 6.28
  bool FadeAlpha;
  bool ForceSize;
  vec2 GridSizeXZ;
  bool MaterialUseT3b;
  const MwBuffer<CPlugShader*> Shaders;
  const UnnamedEnum OutputMode;
};

// File extension: 'Link.Gbx'
struct CSceneObjectLink : public CMwNod {
  CSceneObjectLink();

  const bool IsToSave;
  const bool IsFromModel;
  bool UseOnlyMobilPosition;
  bool UseOnlyMobilTreePosition;
  bool UseTreeVisibilityForPoc;
  iso4 RelativeLocation;
  CSceneObject* Object;
  CSceneMobil* Mobil;
  MwId MobilTreeId;
  bool IsActive2;
  const bool IsDynamic;
};

struct CScenePickerManager : public CMwNod {
  CHmsPicker* const Picker;
};

struct CSceneVehicleVis {
};

// userName: 'Character'
struct CSceneCharVis : public CMwNod {
};

// File extension: 'Scene3d.Gbx'
struct CScene3d : public CScene {
  CScene3d();

  MwBuffer<CSceneSector*> Sectors;
  MwBuffer<CSceneLight*> Lights;
  MwBuffer<CSceneLocation*> Locations;
  float CameraFarZ;
  float EdCamFocusZ;
  float EdCamLensSize;
  vec3 CameraClearColor;
  CMwNod* SceneFxMgr;
};

struct CPlugBitmapRenderScene3d : public CPlugBitmapRenderCamera {
  CPlugBitmapRenderScene3d();

  CScene3d* Scene3d;
  iso4 Location;
  void CreateCamera();
  void CreateOverlayCameraSettings();
};

struct CSceneMgrSound : public CMwNod {
};

struct CSceneMgrVehicleVisImpl : public CMwNod {
  CSceneMgrVehicleVisImpl();

  UnnamedEnum Extrapolation;
  bool HermiteInterp;
};

struct CSceneVehicleCar : public CSceneVehicle {
  CSceneVehicleCar();

};

// File extension: 'MobilClouds.Gbx'
struct CSceneMobilClouds : public CSceneToy {
  CSceneMobilClouds();

  CSceneCloudSystem* const Clouds;
  void ReBuildInstances();
};

struct CSceneMgrFlock : public CSceneMgrVis {
  CSceneMgrFlock();

  bool IsPlaying;
  SBirdPhysicsParams BirdPhysicsParams;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxColors : public CSceneFxCompo {
  CSceneFxColors();

  float ParamInverseRGB; // Range: 0 - 1
  float ParamHue; // Range: 0 - 1
  float ParamSaturation; // Range: -1 - 1
  float ParamBrightness; // Range: -1 - 1
  float ParamContrast; // Range: -1 - 1
  vec3 ParamModulateRGB;
  float ParamModulateR; // Range: 0 - 1
  float ParamModulateG; // Range: 0 - 1
  float ParamModulateB; // Range: 0 - 1
  vec3 ParamBlendRGB;
  float ParamBlendAlpha; // Range: 0 - 1
  bool ParamUserEnable;
  float UserIntensity; // Range: 0 - 1
  float CloudsIntensity; // Range: 0 - 1
  float ZFarIntensity; // Range: 0 - 1
  float ParamZFar_StartZ;
  float ParamZFar_StopZ;
  float ParamZFarInverseRGB; // Range: 0 - 1
  float ParamZFarHue; // Range: 0 - 1
  float ParamZFarSaturation; // Range: -1 - 1
  float ParamZFarBrightness; // Range: -1 - 1
  float ParamZFarContrast; // Range: -1 - 1
  vec3 ParamZFarModulateRGB;
  float ParamZFarModulateR; // Range: 0 - 1
  float ParamZFarModulateG; // Range: 0 - 1
  float ParamZFarModulateB; // Range: 0 - 1
  vec3 ParamZFarBlendRGB;
  float ParamZFarBlendAlpha; // Range: 0 - 1
  CPlugMaterial* MaterialColors;
  CPlugShaderApply* ShaderAutoSaturateWithLight;
  CPlugBitmap* BitmapDepth;
  CPlugBitmap* BitmapSbch;
  vec2 BitmapTcScale;
  vec2 BitmapTcPeriod;
  vec2 BitmapRangeR;
  vec2 BitmapRangeG;
  vec2 BitmapRangeB;
  vec2 BitmapRangeA;
  CPlugShader* ShaderColorGrading;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxSuperSample : public CSceneFxCompo {
  CSceneFxSuperSample();

};

struct CSceneLocationCamera : public CSceneLocation {
  CSceneLocationCamera();

  float StereoScreenDist;
  vec2 FovRectMin;
  vec2 FovRectMax;
};

struct CSceneMgrVehicleVis : public CSceneMgrVis {
  CSceneMgrVehicleVis();

  CSceneMgrVehicleVisImpl* Impl;
  CMwRefBuffer* const CustomSkinModels;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxFlares : public CSceneFxCompo {
  CSceneFxFlares();

  uint FlarePerBlock;
};

// File extension: 'SceneFxNod.Gbx'
struct CSceneFxNod : public CMwNod {
  CSceneFxNod();

  bool IsActive;
  CSceneFx* Fx;
  CSceneFxNod* const NodInput;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxBloom : public CSceneFxCompo {
  CSceneFxBloom();

  uint BlurSize;
  float Intensity; // Range: 0 - 1
  float DataBlend; // Range: 0 - 1
  bool DualData;
  const MwBuffer<CSceneFxBloomData*> Datas;
  UnnamedEnum RadialInput;
  float RadialIntens; // Range: 0 - 1
  uint m_RadialProjQuality;
  float RadialRadius2d;
  float RadialRadius3d;
  vec2 RadialOffset2d;
  vec3 RadialOffset3d;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxToneMapping : public CSceneFxCompo {
  CSceneFxToneMapping();

};

struct CSceneFxBloomData : public CMwNod {
  CSceneFxBloomData();

  float HighInvExponent; // Range: 0 - 1
  float FakeHdrExponent; // Range: 0 - 1
  float FakeHdrMin; // Range: 0 - 1
};

// File extension: 'SceneConfig.Gbx'
struct CSceneConfig : public CMwNod {
  CSceneConfig();

  CSceneConfigVision* VisionPC0;
  CSceneConfigVision* VisionPC1;
  CSceneConfigVision* VisionPC2;
  CSceneConfigVision* VisionPC3;
};

struct CSceneConfigVision : public CMwNod {
  CSceneConfigVision();

  CHmsConfig* const HmsConfig;
};

// File extension: 'SceneMood.Gbx'
struct CSceneMood : public CMwNod {
  CSceneMood();

};

// File extension: 'SceneFx.Gbx'
struct CSceneFxStereoscopy : public CSceneFxCompo {
  CSceneFxStereoscopy();

  UnnamedEnum Output;
  bool ExternalControl;
  const float EyeSeparation;
  float SeparationUserScale; // Range: 0 - 1
  const float SeparationGameScale; // Range: 0 - 1
  uint MarginPixelCount;
  UnnamedEnum SplitRatio;
  UnnamedEnum AnaglyphColor;
  float AnaglyphColorFactor; // Range: 0 - 1
  CPlugFilePHlsl* PHlsl_AnaglyphFullColor;
  CPlugFilePHlsl* PHlsl_AnaglyphHalfColor;
  CPlugFilePHlsl* PHlsl_AnaglyphLinear;
  CPlugShaderApply* Shader_Interlaced;
  CPlugShaderApply* Shader_DebugBlend;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxHeadTrack : public CSceneFxCompo {
  CSceneFxHeadTrack();

};

struct CSceneMgrCharVis : public CSceneMgrVis {
  CSceneMgrCharVis();

  CMwRefBuffer* const CustomSkinModels;
  CSceneMgrAnim* const MgrAnim;
  CPlugAnimFile* const CinematicLib;
  float TacticalFxRadius;
  float TacticalFxSize;
  float TacticalFxMaxY;
  float TacticalFxMinY;
  float TacticalFxMinDotN;
  float TacticalFxIntens;
  uint LodMaxVert;
  bool ForceHideShield;
};

struct CSceneMgrAnim : public CMwNod {
  CSceneMgrAnim();

  bool Active;
  bool FootGroundIKEnabled;
  bool FootWallIKEnabled;
  float EdClingOffsetDist;
  float EdWaterOffset;
  bool EdVelFromPos;
  uint EdVelFilterDelay;
  bool EdForceNullInputSpeed;
  uint WallJumpDuration;
  uint WallJumpImpulseTopDuration;
  float WallJumpHDist;
  float WallJumpVDist;
  bool EdForceLod;
  uint EdForceLodIndex;
  bool EdForceLowerJaw;
  float Params_EdForceLowerJawVal; // Range: 0 - 1
  bool Params_EdForceLayerWeight;
  float Params_EdForceLayerWeightVal; // Range: 0 - 1
  ENSceneAnim__EHandIKMode Params_HandIKParams_Mode;
  float Params_HandIKParams_OffsetHand_Pen; // Range: 0 - 0.3
  float Params_HandIKParams_OffsetElbow_Pen; // Range: 0 - 0.3
  float Params_HandIKParams_Anticipation_Pen; // Range: 0 - 1
  float Params_HandIKParams_DistThreshold; // Range: 0 - 2
  float Params_HandIKParams_Duration; // Range: 0 - 1
  float Params_HandIKParams_OffsetY; // Range: -1 - 1
  float Params_HandIKParams_OffsetX; // Range: -1 - 1
  float Params_HandIKParams_WallOffset_Touch; // Range: 0 - 0.15
  ENSceneAnim__EAnimPartialMode Params_PartialAnimParams_Mode;
  ENSceneAnim__EPartialAnimBlendFunc Params_PartialAnimParams_BlendFunc;
  MwBuffer<surf> Bindings;
};

struct CSceneMgrParticle : public CMwNod {
  CSceneMgrParticle();

};

struct CSceneMoods : public CMwNod {
  CSceneMoods();

};

struct CSceneMgrSolidVis : public CMwNod {
  const uint cSolidVis;
  const uint cSolidVisDynamic;
};

struct CSceneVehicle : public CSceneMobil {
};

struct CSceneDecalsManager : public CMwNod {
  CSceneMobil* const Decal3dMobil;
  void Draw();
  void EdShowHide();
  vec3 Bucket3dGridCellSize;
  uint Bucket3dGridCellCountX;
  uint Bucket3dGridCellCountY;
  uint Bucket3eGridCellCountZ;
  vec3 Bucket2dGridCellSize;
  uint Bucket2dGridCellCountX;
  uint Bucket2dGridCellCountY;
  uint Bucket2dGridCellCountZ;
  vec3 Bucket2dGridOrigin;
  const uint DrawnCount3d;
  const uint DrawnCount2d;
  const uint DiscardCount3d;
  const uint AllocFailedCount3d;
  bool EnableDecals3d;
  bool EnableDecals2d;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFx : public CMwNod {
  float Intensity; // Range: 0 - 1
  bool WantPreLoad;
};

struct CScenePhy : public CMwNod {
  CHmsCollZone* const MgrCollision;
  UnnamedType const MgrCharPhy;
  UnnamedType const MgrVehiclePhy;
  CSceneMgrBulletPhy* const MgrBulletPhy;
  CSceneMgrDyna* const MgrDyna;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxOverlay : public CSceneFx {
  CSceneFxOverlay();

  CPlugShader* Shader;
};

struct CSceneFxCompo : public CSceneFx {
};

struct CSceneFxDepthOfField : public CSceneFxCompo {
  CSceneFxDepthOfField();

};

// File extension: 'SceneFx.Gbx'
struct CSceneFxMotionBlur : public CSceneFxCompo {
  CSceneFxMotionBlur();

  UnnamedEnum Technique;
  float T2_MotionScale;
  float T2_MotionMaxLen;
  bool T2_DelayShadows;
  CPlugFilePHlsl* T2_Fid_PHlsl_MotionLenCmp;
  CPlugFilePHlsl* T3_PHlsl_MotionBlur;
  CPlugBitmap* T3_BitmapDepth;
  CPlugBitmap* T3_BitmapMotion;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxCameraBlend : public CSceneFxCompo {
  CSceneFxCameraBlend();

  bool CaptureEnable;
  float CaptureWeight; // Range: 0 - 1
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxDistor2d : public CSceneFxCompo {
  CSceneFxDistor2d();

  CPlugBitmap* BitmapDistor;
  float DistorScale;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxEdgeBlender : public CSceneFxCompo {
  CSceneFxEdgeBlender();

  float EdgeDotMax; // Range: 0 - 1
  float EdgeDepthMax;
  uint GutterPassCount;
  float GutterWeight; // Range: 0 - 1
  CPlugShaderApply* ShaderEdgeDetect;
  CPlugShaderApply* ShaderEdgeGutter;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxOccZCmp : public CSceneFxCompo {
  CSceneFxOccZCmp();

  bool UsePointsInSphere;
  float ImageRadius; // Range: 0 - 0.2
  uint BlurTexelCount;
  CPlugShaderApply* Shader;
  CPlugPointsInSphereOpt* PointsInSphere;
  UnnamedEnum Blend;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxBloomHdr : public CSceneFxCompo {
  CSceneFxBloomHdr();

  bool BloomIntensUseCurve;
  float MinIntensInBloomSrc;
  uint DownCount;
  bool PreDown4x4_Else2x2;
  uint BlurSizeDown1_2x2;
  const uint BlurSizeDown1;
  const uint BlurSizeDown2;
  const uint BlurSizeDown3;
  const uint BlurSizeDown4;
  const uint BlurSizeDown5;
  float BlurSizeScaleByLevel;
  float BlurCenterOverEdges;
  float UpScale;
  float UpScaleAlpha;
  UnnamedEnum BlurTexAddress;
  bool UseFakedFlares;
  float LensDirtIntens; // Range: 0 - 1
  float StreaksSrcMin; // Range: 0 - 1
  uint StreaksRotationCount;
  float StreaksRotation; // Range: 0 - 360
  uint StreaksPassCount;
  CPlugShaderApply* FidShaderBloomSelectFilterDown2;
  CPlugShaderApply* FidShaderBloomSelectFilterDown4;
  CPlugShaderApply* ShaderBloomFinal;
  CPlugShaderApply* ShaderDistorImageSpace;
  CPlugShaderApply* ShaderDistorGetDepthIntens;
  CPlugShaderApply* ShaderDistorAtDepth;
  CPlugShaderApply* ShaderHorizonBlur;
  bool DistorEnable;
  uint DistorPeriodTime;
  float DistorRedSelectRatio; // Range: 0 - 2
  bool DistorUseDepth;
  CPlugFilePHlsl* const PHlsl_Final;
  CPlugFilePHlsl* const PHlsl_StreaksSelectSrc;
  CPlugFilePHlsl* const PHlsl_StreaksWorkDir;
  CPlugFilePHlsl* const PHlsl_EdShowBlow;
};

// File extension: 'CarMarksModel.Gbx'
struct CSceneVehicleCarMarksModel : public CMwNod {
  CSceneVehicleCarMarksModel();

  bool Disabled;
  MwBuffer<CSceneVehicleCarMarksModelSub*> Models;
};

// File extension: 'CarMarksModelSub.Gbx'
struct CSceneVehicleCarMarksModelSub : public CMwNod {
  CSceneVehicleCarMarksModelSub();

  float SampleMinDist;
  float Width;
  float WidthCoefForceX;
  float WidthCoefForceZ;
  float WidthMax;
  float Alpha;
  float AlphaCoefForceX;
  float AlphaCoefForceZ;
  float AlphaMax;
  float GroundOffset;
  float TexVPerMeter;
  float FadeDist;
  bool CondGroundContact;
  bool CondSliding;
  UnnamedEnum CondMaterialId;
  float CondForceXGreaterThan;
  float CondForceZGreaterThan;
  CPlugMaterial* Material;
  bool DebugDisplay;
};

struct CSceneVehicleCarMarksSamples : public CMwNod {
  CSceneVehicleCarMarksSamples();

  string Name;
  const uint ByteSize;
  bool Disabled;
  MwBuffer<uint> Stops;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxCellEdge : public CSceneFxCompo {
  CSceneFxCellEdge();

  uint BlurTexelCount;
  float BlurCenterOverEdges;
  CPlugShaderApply* ShaderEdgeDetect;
};

struct CSceneFxMgr : public CMwNod {
};

struct CSceneMgrBulletPhy : public CSceneMgrPhy {
  uint BulletRemovalDelay;
  bool LaserVsBullet;
  bool LaserSkewering;
};

struct CSceneMgrBulletVis : public CSceneMgrVis {
};

struct CSceneMgrTrafficVis : public CSceneMgrVis {
};

// File extension: 'SceneFx.Gbx'
struct CSceneMgrWeather : public CMwNod {
  CPlugFxLightning* const FxLightning;
  CMwNod* CloudSystem;
  float SiteLatitude; // Range: -90 - 90
  float TimeRemapped; // Range: 0 - 1
  enum class EClearMode {
    Fixed = 0,
    Fog = 1,
  };
  EClearMode ClearMode;
  vec3 ClearColor;
  float SunIntensity;
  float MoonIntensity;
  bool EnableUpdate;
  bool EnableMoodArray;
};

struct CSceneMgrTrafficPhy : public CSceneMgrPhy {
};

struct CSceneMgrMapColoring : public CMwNod {
  CPlugBitmap* const BitmapTeamEmblem;
};

struct CSceneMgrBody : public CMwNod {
  CSceneMgrBody();

  void StartBodies();
  void StopBodies();
  uint BulletModelIndex;
  uint MaxAmmo;
  float SightScope0;
  float SightScope1;
  float SightScope2;
  float SightScope3;
  uint ShotDelay;
  uint ReloadDelay;
  uint DurationTargetKeptInMemory;
  float EyesHeight;
  uint InitialRandSeed;
  uint SimultaneousBodies;
  uint InitialLifePoints;
  float SpeedCoeff;
  float DistToPathForVictor;
};

struct CSceneMobilSolid2 : public CSceneMobil {
};

struct CSceneMgrSolid2Vis : public CMwNod {
  const uint cSolid2Vis;
  const uint cSolid2VisDynamic;
};

struct CSceneMgrPhy : public CMwNod {
};

struct CSceneMgrSpawn : public CMwNod {
};

struct CSceneTriggerAction : public CMwNod {
};

// userName: 'Bullet'
struct CSceneBulletVis : public CMwNod {
};

struct CSceneMgrVis : public CMwNod {
};

struct CSceneMgrRail : public CMwNod {
  CSceneMgrRail();

};

struct CSceneMgrTrainVis : public CSceneMgrVis {
};

struct CSceneMgrTrainPhy : public CSceneMgrPhy {
};

// userName: 'Wagon'
struct CSceneWagonPhy {
};

// userName: 'Wagon'
struct CSceneWagonVis {
};

// userName: 'Bullet'
struct CSceneBulletPhy : public CMwNod {
};

struct CSceneGunVis {
};

struct CSceneMgrGunVis : public CSceneMgrVis {
};

struct CSceneMgrGunPhy : public CSceneMgrPhy {
};

// userName: 'TrafficVis'
struct CSceneTrafficVis : public CMwNod {
};

struct CSceneMgrRoad : public CMwNod {
  CSceneMgrRoad();

};

struct CSceneRecorder : public CMwNod {
};

// File extension: 'Sea.Gbx'
struct CSceneToySea : public CSceneToy {
  CSceneToySea();

  CSceneToySeaHouleTable* Houles;
  float CoefMovTexture;
  float MinTextureView;
  float MaxTextureView;
  float CoefMinView;
  float Valtest1;
  float Valtest2;
  CSceneToySeaHouleTable* HouleTable3;
  CSceneToySeaHouleTable* HouleTable4;
  CSceneToySeaHouleTable* HouleTable5;
  CSceneToySeaHouleTable* HouleTable6;
  CSceneToySeaHouleTable* HouleTable7;
  const float UpdateGeomTimeMs;
};

// File extension: 'SeaHoule.Gbx'
struct CSceneToySeaHoule : public CMwNod {
  CSceneToySeaHoule();

  bool UsedForAssiette;
  CPlugBitmap* TextureCPU;
  float RepresentedX;
  float RepresentedZ;
  float Amplitude;
  float Speed;
  float AngleWindDeltaInDegree; // Range: 0 - 360
  float DistorFactorXZ; // Range: 0 - 2
  float FoamMin; // Range: 0 - 1
  float FoamScale; // Range: 0 - 2
};

// File extension: 'SeaHouleTable.Gbx'
struct CSceneToySeaHouleTable : public CMwNod {
  CSceneToySeaHouleTable();

  float SeaBumpScale;
  vec2 SeaBumpScaleUV;
  float FoamExponant;
  float FoamScaleWorldXZ; // Range: 0 - 1
  void AddHoule();
  MwArray<CSceneToySeaHoule*> Houles;
  bool FieldHouleUncompress;
  float HouleGlobalScale;
};

// File extension: 'SeaHouleFixe.Gbx'
struct CSceneToySeaHouleFixe : public CSceneToySeaHoule {
  CSceneToySeaHouleFixe();

  float CoefFoam;
  float ExposantFoam;
};

struct CSceneMobilSolid : public CSceneMobil {
};

// File extension: 'Character.Gbx'
struct CSceneMobilCharVis : public CSceneMobil {
  CSceneMobilCharVis();

  CPlugCharVisModel* const CharVisModel;
  UnnamedType const CharPhyModel;
};

} // namespace Scene

namespace System {

struct CSystemEngine : public CMwEngine {
  CSystemEngine();

  void SynchUpdate();
};

struct CSystemMouse : public CNodSystem {
  CSystemMouse();

};

struct CSystemKeyboard : public CNodSystem {
  CSystemKeyboard();

};

struct CSystemWindow : public CNodSystem {
  CSystemWindow();

  const uint SizeX; // Range: 0 - 64000
  const uint SizeY; // Range: 0 - 64000
  const uint PosX; // Range: 0 - 64000
  const uint PosY; // Range: 0 - 64000
  const float Ratio;
  const bool HasSizeChanged;
  const bool HasPosChanged;
  string StatusString;
};

// File extension: 'SystemConfig.Gbx'
struct CSystemConfig : public CMwNod {
  CSystemConfig();

  bool IsSafeMode;
  CSystemConfigDisplay* const Display;
  CSystemConfigDisplay* const DisplaySafe;
  bool NetworkUseProxy;
  string NetworkProxyUrl;
  uint NetworkServerPort;
  uint NetworkP2PServerPort;
  uint NetworkClientPort;
  UnnamedEnum NetworkSpeed;
  uint NetworkDownloadRate;
  uint NetworkUploadRate;
  bool NetworkForceUseLocalAddress;
  string NetworkForceServerAddress;
  uint NetworkServerBroadcastLength;
  bool NetworkTestInternetConnection;
  bool NetworkUseNatUPnP;
  string NetworkLastUsedMSAddress;
  string NetworkLastUsedMSPath;
  bool FileTransferEnableDownload;
  bool FileTransferEnableUpload;
  uint FileTransferMaxCacheSize;
  bool EnableLocators;
  bool AutoUpdateFromLocatorAtInternetConnection;
  bool AutoUpdateFromLocator;
  string AutoUpdateLocatorDBUrl;
  bool FileTransferEnableAvatarDownload;
  bool FileTransferEnableAvatarUpload;
  bool FileTransferEnableAvatarLocators;
  bool FileTransferEnableMapDownload;
  bool FileTransferEnableMapUpload;
  bool FileTransferEnableMapLocators;
  bool FileTransferEnableMapModDownload;
  bool FileTransferEnableMapModUpload;
  bool FileTransferEnableMapModLocators;
  bool FileTransferEnableMapSkinDownload;
  bool FileTransferEnableMapSkinUpload;
  bool FileTransferEnableMapSkinLocators;
  bool FileTransferEnableTagSkinDownload;
  bool FileTransferEnableTagSkinUpload;
  bool FileTransferEnableTagSkinLocators;
  bool FileTransferEnableVehicleSkinDownload;
  bool FileTransferEnableVehicleSkinUpload;
  bool FileTransferEnableVehicleSkinLocators;
  bool FileTransferEnableUnknownTypeDownload;
  bool FileTransferEnableUnknownTypeUpload;
  bool FileTransferEnableUnknownTypeLocators;
  bool IsIgnorePlayerSkins;
  bool IsSkipRollingDemo;
  bool ProfileEnableMulti;
  string ProfileName;
  void SetProfileNameUnassigned();
  uint PlayerInfoDisplaySize; // Range: 1 - 5
  enum class _EUnnamedEnum {
    Name = 0,
    Avatar = 1,
    Avatar_and_Name = 2,
  };
  _EUnnamedEnum PlayerInfoDisplayType;
  bool EdDontConnect;
  bool DisableReplayRecording;
  bool Dynamic_ParentalLock_IsLocked;
  bool Dynamic_ParentalLock_HasPassword;
  UnnamedEnum Vsk3SeaQuality;
  UnnamedEnum Vsk3BoatQuality;
  UnnamedEnum Vsk3TeamMate;
  UnnamedEnum Vsk3Stem;
  UnnamedEnum TmCarQuality;
  UnnamedEnum TmCarParticlesQuality;
  UnnamedEnum PlayerShadow;
  UnnamedEnum PlayerOcclusion;
  UnnamedEnum TmOpponents;
  uint TmMaxOpponents;
  UnnamedEnum TmBackgroundQuality;
  uint SmMaxPlayerResimStepPerFrame;
  bool AudioEnabled;
  float AudioSoundVolume; // Range: 0 - 1
  float AudioMusicVolume; // Range: 0 - 1
  bool AudioSoundHdr;
  UnnamedEnum AudioGlobalQuality;
  string AudioDevice_Oal;
  UnnamedEnum AudioAcceleration_Dx9;
  UnnamedEnum AudioQuality3d_Dx9;
  bool AudioAllowEFX;
  bool AudioAllowHRTF;
  bool AudioDisableDoppler;
  UnnamedEnum AudioSpeakerConfig;
  bool InputsAlternateMethod;
  bool InputsCaptureKeyboard;
  bool InputsFreezeUnusedAxes;
  bool InputsEnableRumble;
  UnnamedEnum Advertising_Enabled;
  float Advertising_TunningCoef; // Range: -1 - 1
  bool Advertising_DisabledByUser;
  bool EnableCrashLogUpload;
  string BlackListUrl;
  string AntiCheatServerUrl;
};

struct CSystemMemoryMonitor : public CMwNod {
  CSystemMemoryMonitor();

};

struct CNodSystem : public CMwNod {
  CNodSystem();

};

struct CSystemFid : public CMwNod {
  CSystemFid();

  CMwNod* const Nod;
  bool Text;
  bool Compressed;
};

struct CSystemFids : public CMwNod {
  const MwBuffer<CSystemFids*> Trees;
  const MwBuffer<CSystemFidFile*> Leaves;
};

struct CSystemFidFile : public CSystemFid {
  CSystemFidFile();

  const uint ByteSize;
  const uint ByteSizeEd;
  bool IsReadOnly;
  const wstring FileName;
  const wstring FullFileName;
  const wstring ShortFileName;
  CSystemFidsFolder* const ParentFolder;
  CSystemFidFile* const Container;
  void CopyToFileRelative(string RelFileName, bool FailIfExists);
};

struct CSystemFidsFolder : public CSystemFids {
  CSystemFidsFolder();

  const uint ByteSize;
  const uint ByteSizeEd;
  const wstring DirName;
  const wstring FullDirName;
  CSystemFidsFolder* const ParentFolder;
};

struct CSystemFidsDrive : public CSystemFidsFolder {
  CSystemFidsDrive();

};

struct CSystemFidMemory : public CSystemFid {
  CSystemFidMemory();

};

struct CSystemPlatformScript : public CMwNod {
  enum class ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum class ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  const ESystemPlatform Platform; // Maniascript
  const ESystemSkuIdentifier SkuIdentifier; // Maniascript
  const string ExeVersion; // Maniascript
  const uint CurrentLocalDate; // Maniascript
  const string CurrentLocalDateText; // Maniascript
  const wstring CurrentTimezone; // Maniascript
  const string ExtraTool_Info; // Maniascript
  wstring ExtraTool_Data; // Maniascript
  void ClipboardSet(wstring ClipboardText); // Maniascript
};

// File extension: 'RefBuffer.Gbx'
struct CSystemDependenciesList : public CMwNod {
  CSystemDependenciesList();

  MwBuffer<CMwNod*> Files;
  MwBuffer<CSystemFidsFolder*> Folders;
  CMwRefBuffer* FillFromRefBuffer;
  void CleanRedondancies();
};

struct CSystemConfigDisplay : public CMwNod {
  CSystemConfigDisplay();

  UnnamedEnum RenderingApi;
  UnnamedEnum DisplayMode;
  bool StereoscopyByDefault;
  bool StereoscopyAdvanced;
  uint RefreshRate;
  UnnamedEnum DisplaySync;
  UnnamedEnum TripleBuffer;
  UnnamedEnum AutoScale;
  bool Customize;
  UnnamedEnum Preset;
  UnnamedEnum Antialiasing;
  UnnamedEnum DeferredAA;
  UnnamedEnum ShaderQuality;
  UnnamedEnum TexturesQuality;
  UnnamedEnum FilterAnisoQ;
  UnnamedEnum ZClip;
  UnnamedEnum ZClipAuto;
  uint ZClipNbBlock;
  UnnamedEnum GeometryQuality;
  float GeomLodScaleZ;
  UnnamedEnum WaterReflect;
  bool WaterGeomStadium;
  UnnamedEnum VehicleReflect;
  uint VehicleReflectMaxCount;
  bool TextureDecals_3D;
  bool TextureDecals_2D;
  bool PostFxEnable;
  UnnamedEnum FxBloomHdr;
  UnnamedEnum FxMotionBlur;
  float FxMotionBlurIntens; // Range: 0 - 1
  UnnamedEnum LightMapSizeMax;
  UnnamedEnum LightMapQuality;
  bool LightMapQualityUltra;
  bool LightMapLightIndex;
  UnnamedEnum ScreenShotExt;
  UnnamedEnum Shadows;
  UnnamedEnum GpuSync0;
  UnnamedEnum GpuSync1;
  UnnamedEnum GpuSync2;
  UnnamedEnum GpuSync3;
  uint GpuSyncTimeOut;
  uint MaxFps;
  bool EmulateCursorGDI;
  bool OptimizePartDyna;
  bool DisableZBufferRange;
  bool DisableWindowedAntiAlias;
  bool DisableHdrCubeRenderMipMap;
  bool EnableFullscreenGDI;
  UnnamedEnum LightFromMap;
  bool EnableCheckLags;
  float AgpUseFactor; // Range: 0 - 1
  float ParticleMaxGpuLoadMs;
  bool AsyncRenderEnabled;
  bool MultiThreadEnable;
  uint MultiThreadCountMax;
};

struct CSystemPackManager : public CMwNod {
};

struct CSystemPackDesc : public CMwNod {
  const wstring Name;
  const string Checksum;
  const wstring FileName;
  CSystemFidFile* const Fid;
  const wstring LocatorFileName;
  const string Url;
  const bool AutoUpdate;
};

struct CSystemNodWrapper : public CMwNod {
  CSystemNodWrapper();

};

struct CSystemData : public CMwNod {
  string Url;
  CSystemPackDesc* const PackDesc;
  CMwNod* Data;
};

struct CSystemFidContainer : public CMwNod {
};

} // namespace System

namespace Vision {

struct CVisionViewport : public CHmsViewport {
  bool EmulateCursor;
  const MwBuffer<wstring> Display_Win32DeviceNames;
  void ReGen_TextureGenUVs();
  void GetPerformance();
  bool Alpha01BlendEdges;
  uint Alpha01ClipRef_NoAtoC;
  const float TimeGpuMs_Total;
  const float TimeGpuMs_Particles;
  const uint cPerf_BufferRefract;
  const float Fill01_BufferRefract; // Range: 0 - 1
  bool AsyncRender;
  void FreeTextureMem();
  void RestoreTextureMem();
  CMwNod* VisionResourceFile;
  bool ShotHqLighting_Enable;
  CMwNod* ShotHqLightingParam;
  bool ShadowCache_Enable;
  const surf ShadowCacheMgr;
  bool EnableVolumetricFog;
  float FogTexMaxDepth; // Range: 5 - 200
  float FogSliceDistribCoef; // Range: 0.001 - 8
  float ScatteringCoef; // Range: 0 - 5
  float AbsorptionCoef; // Range: 0 - 5
  float FogAmbientTweak; // Range: 0 - 1
  float ExtinctionTweak; // Range: 0 - 1
  float PhaseAnisotropy; // Range: 0 - 1
  float HeightDensity0; // Range: 0 - 5
  float HeightScalingCoef; // Range: 0 - 5
  vec3 Albedo;
  float NoiseMaxDensity; // Range: 0 - 2
  float NoiseScalingCoef; // Range: 0 - 5
};

struct CVisionViewportNull : public CVisionViewport {
};

// File extension: 'VisionResourceFile.Gbx'
struct CVisionResourceFile : public CMwNod {
  CVisionResourceFile();

  CVisionResourceShaders* Shaders;
  CSystemFidsFolder* FolderShaderBench;
  CPlugBitmap* Bitmap_DeferredDiffuseAmbient;
  float BlurDepthTestMaxDist;
  CPlugShaderApply* ShaderZOnly;
  CPlugShaderApply* ShaderZOnly_Alpha01;
  CPlugShaderApply* ShaderFillConst;
  CPlugShaderApply* ShaderFillConst_Alpha01;
  CPlugShaderApply* ShaderDeferredFog;
  CPlugShaderApply* Shader3DVolumetricFog;
  CPlugShaderApply* ShaderDeferredLightFxCylinder;
  CPlugShaderApply* ShaderDeferredLightFxSphere;
  CPlugShaderApply* ShaderDeferredBurnSphere;
  CPlugShaderApply* ShaderT3Sea;
  CPlugShaderApply* ShaderCubeToSphereHdrA2;
  CPlugShaderApply* ShaderDecal3dSetInvalid;
  CPlugShaderApply* ShaderDecal3dSetInvalidBox;
  CPlugShaderApply* ShaderCloudsEdgeLight;
  CPlugShaderApply* ShaderCloudsGodLight;
  CPlugShaderApply* ShaderCloudsGodMask;
  CPlugShaderApply* ShaderMoon2d;
  CPlugShaderApply* ShaderShadowFakeQuad;
  CPlugShaderApply* ShaderShadowDepthPeel;
  CPlugShaderApply* ShaderShadowDepthPeel_Alpha01;
  CPlugShaderApply* ShaderSoapBubble;
  CPlugShaderApply* ShaderSpecularInHemi_sRGB;
  CPlugShaderApply* ShaderSpecularInHemi_Linear;
  CPlugShaderApply* ShaderSphereProjInv;
  CPlugShaderApply* ShaderWaterSplash_TransformVertices;
  CPlugShaderApply* ShaderWaterSplash_IntersectTriangles;
  CPlugShaderApply* ShaderWaterSplash_DebugEdges;
  CPlugShaderApply* ShaderDecal2d_CV_DefDecal;
  CPlugShaderApply* ShaderRasterCircularGauge;
  CPlugShaderApply* ShaderBlitCubeMapFromNormal;
  CPlugFont* FontDebugText;
  CPlugShaderApply* FillVtxColor_sRGB;
  CPlugShaderApply* LensFlareOccQuery;
  CPlugShaderApply* BlackNoSpec;
  CPlugShaderApply* SignedDistanceField_DebugRender;
  CPlugShaderApply* AnalyticalEnergyCapsule;
  CPlugShaderApply* ShaderEnergyPrismAA;
  CPlugShaderApply* FrustumCluster_Dbg;
  CPlugShaderApply* RasterMsaaResolveHdr;
  CPlugFileVHlsl* VHlslProjector1;
  CPlugFileVHlsl* VHlslLensFlareOccQuery;
  CPlugFileVHlsl* VHlslFillColor;
  CPlugFileVHlsl* VHlslFillColor_Alpha01;
  CPlugFileVHlsl* VHlslFill_0001;
  CPlugFileVHlsl* VHlslFill_0001_Alpha01;
  CPlugFileVHlsl* VHlslFill_0000;
  CPlugFileVHlsl* VHlslFillAlpha;
  CPlugFileVHlsl* VHlslFillDepthMask;
  CPlugFileVHlsl* VHlslDebugTexelPerMeter;
  CPlugFilePHlsl* PHlslBitmap;
  CPlugFilePHlsl* PHlslBitmapModCV;
  CPlugFilePHlsl* PHlslFillConst;
  CPlugFilePHlsl* PHlslFillColor;
  CPlugFilePHlsl* PHlslFillColor_Alpha01;
  CPlugFilePHlsl* PHlslFillAlpha;
  CPlugFilePHlsl* PHlslFillDepthMask;
  CPlugFilePHlsl* PHlslDebugText;
  CPlugFilePHlsl* PHlslDebugTexelPerMeter;
  CPlugFilePHlsl* PHlslShadowSmoothDepth;
  CPlugFilePHlsl* PHlslShadowDepthAsRed;
  CPlugFilePHlsl* PHlslShadowDepthAsRed_Alpha;
  CPlugFilePHlsl* PHlslForwardTileCull_DbgDraw;
  CPlugFilePHlsl* PHlslRasterDown4x4_SkipX;
  CPlugFilePHlsl* PHlslRasterSum2HdrMaps;
  CPlugFileGPU* CsCopyRawTexture2D;
  CPlugFileGPU* CsMakeMips8x8;
  CPlugFileGPU* CsMakeMipsTail8x8;
  CPlugFileGPU* CsForwardTileCull;
  CPlugFileGPU* CsVolumetricFog_ComputeDensity;
  CPlugFileGPU* CsVolumetricFog_RayMarching;
  CPlugFileGPU* CsComputeDistanceField_Analytic;
  CPlugFileGPU* CsComputeDistanceField_BruteForce;
  CPlugFileGPU* CsParticleTileCulling;
  CPlugFileGPU* CsParticleTileDebugRender;
  CPlugFileGPU* CsPs4ClearHTileVr;
  CPlugFileVHlsl* VHlslRasterTc;
  CPlugShaderApply* ShaderDownSize2x2AvgInLdr;
  CPlugShaderApply* ShaderDownSize3x3AvgInLdr;
  CPlugShaderApply* ShaderFilterDown2x2;
  CPlugShaderApply* ShaderFilterDown4x4;
  CPlugShaderApply* ShaderAddUpscale2x2;
  CPlugShaderApply* ShaderDepthUp;
  CPlugShaderApply* ShaderDepthDown2x2;
  CPlugShaderApply* ShaderDepthDown3x3;
  CPlugShaderApply* ShaderDepthDown2x2Range;
  CPlugShaderApply* ShaderDepthGutter;
  CPlugShaderApply* ShaderColorDepthAlphaDown2x2_Min;
  CPlugShaderApply* ShaderGeomToMotion;
  CPlugShaderApply* ShaderGeomToMotion_Alpha01;
  CPlugShaderApply* ShaderGeomToDepth;
  CPlugShaderApply* ShaderGeomToDepth_Alpha01;
  CPlugShaderApply* ShaderGeomToEyeLengthBias;
  CPlugShaderApply* ShaderGeomToEyeLengthBias_Alpha01;
  CPlugShaderApply* ShaderGeomToReflectCubeMap;
  CPlugShaderApply* ShaderGeomToReflectCubeDist;
  CPlugShaderApply* ShaderGeomToFaceNormal;
  CPlugShaderApply* ShaderGeomToFaceNormal_Alpha01;
  CPlugShaderApply* ShaderGeomFakeShadows;
  CPlugShaderApply* ShaderBoxesRasterBitmapBlendPreMod;
  CPlugShaderApply* ShaderT3DynaSpriteDiffuse;
  CPlugShaderApply* ShaderFaceNormalFromLinearDepth;
  CPlugShaderApply* ShaderRasterDistor2d;
  CPlugShaderApply* ShaderRasterGetZ01FromZBuffer;
  CPlugShaderApply* ShaderRasterZOnly;
  CPlugShaderApply* ShaderRasterBlendCubes;
  CPlugShaderApply* ShaderLightFromMap;
  CPlugShaderApply* ShaderSmVortexParticle;
  CPlugShaderApply* ShaderDeferredZBufferToDist01;
  CPlugShaderApply* ShaderDeferredOccZCmp;
  CPlugBitmap* BitmapHyperZ;
  CPlugBitmap* BitmapDeferredZ;
  CPlugBitmap* BitmapDeferredPixelNormalInC;
  CPlugBitmap* BitmapDeferredVertexNormalInC;
  CPlugBitmap* BitmapDeferredFaceNormalInC;
  CPlugBitmap* BitmapDeferredMDiffuse;
  CPlugBitmap* BitmapDeferredMSpecular;
  CPlugBitmap* BitmapDeferredLightMask;
  CPlugBitmap* BitmapDeferredPreShade;
  CPlugBitmap* BitmapWaterRefract;
  CPlugBitmap* BitmapWaterReflect;
  CPlugBitmap* BitmapWaterCaustics;
  CPlugBitmap* BitmapPostFxCopyHdrA;
  CPlugBitmap* BitmapSwapR8;
  CPlugBitmap* BitmapShadowLDir0;
  CPlugBitmap* BitmapShadowLDir0_Texture1;
  CPlugBitmap* BitmapShadowStaticSprite;
  CPlugBitmap* BitmapShadowStaticSprite_T1;
  CPlugBitmap* BitmapShadowMaskDepth;
  CPlugBitmap* BitmapShadowPssmDepth;
  CPlugBitmap* BitmapMotion;
  CPlugBitmap* BitmapHeightField;
  CPlugBitmap* BitmapCloudsOcc;
  CPlugBitmap* BitmapProbeGrid;
  CPlugBitmap* BitmapProbeGridSpread1;
  CPlugBitmap* BitmapInvFresnelPC3;
  CPlugBitmap* BitmapSeaSxSySzPC3;
  CPlugBitmap* BitmapToneMap_AutoScale;
  CPlugBitmap* BitmapPreLightGenTx;
  CPlugBitmap* BitmapPreLightGenTy;
  CPlugBitmap* BitmapPreLightGenTz;
  CPlugBitmap* BitmapLmDiffuse;
  CPlugBitmap* BitmapDefaultFresnelFaceBump;
  CPlugBitmap* BitmapReflectCubeHdr;
  CPlugBitmap* BitmapReflectCubeHdrLQ;
  CPlugBitmap* BitmapReflectCubeLQ_IsForeground;
  CPlugBitmap* BitmapImageSpaceReflectCube;
  CPlugBitmap* BitmapTranslucentDown;
  CPlugBitmap* BitmapOverlayBlur;
  CPlugBitmap* BitmapDynaHueIntensGauge;
  CPlugBitmap* BitmapDynaTcSxyTzw;
  CPlugBitmap* BitmapDynaTcSxyTzw_RenderOverlay;
  CPlugBitmap* BitmapPerlinPerm2D;
  CPlugBitmap* BitmapPerlinGradOfPerm1D;
  CPlugBitmap* BitmapPerlinGrad3OfPerm2D;
  CPlugBitmap* BitmapPerlinGrad4OfPerm2D;
  CPlugBitmap* BitmapNoise3d_Fog0_32;
  CPlugBitmap* BitmapNoise3d_Fog0_64;
  CPlugFxLensFlareArray* FxLensFlareArray;
  CPlugShaderApply* Shader2dFlareAdd_Hdr;
  CPlugShaderApply* Shader2dLensDirtAdd;
  CPlugShaderApply* Shader2dLightHistoryUpdate;
  CPlugBitmap* BitmapLmLListIndexLow;
  CPlugBitmap* BitmapLmLListIndexHigh;
  CPlugBitmap* BitmapTileListUv;
  CPlugBitmap* BitmapTileList;
  CPlugBitmap* BitmapTileMask;
  CPlugBitmap* BitmapTileGpu;
  CPlugBitmap* BitmapSpecIE_to_Roughness;
  CPlugBitmap* EnergyHueIntens_Additif;
  CPlugBitmap* EnergyHueIntens_Blend;
  CPlugBitmap* RandVec3_2d;
};

struct CDx11Viewport : public CVisionViewport {
  const string FeatureLevel;
  bool ZBuffer_Near1_Far0;
  bool ZBuffer_Float;
};

struct CVisionResourceShaders : public CMwNod {
  CPlugShader* DeferredFogLighting_Inter0;
  CPlugShader* DeferredFogLighting_Inter1;
  CPlugShader* DeferredWaterFog0;
  CPlugShader* DeferredWaterFog1;
  CPlugShader* DeferredWaterFog2;
  CPlugShader* DeferredWaterFog3;
};

struct SVisShadowCacheMgr {
  nat2 c2TexelShadow;
  uint Stat_cShadowUsed;
  uint Stat_cShadowFace;
  uint Stat_cSharedFace;
  uint Stat_cClippedFace;
  uint Cfg_cShadowMax;
  float Cfg_cPixelInTexelMax;
  float Cfg_cTexelByMeterMax;
  float Cfg_cPixelBorder;
  bool Cfg_DoRotateSpots;
  bool Cfg_DoScissorSpotOuter;
  bool Cfg_DoMergeSplittedY;
  bool Cfg_DoFaceCameraClip;
  bool Cfg_IsDynaOnly;
  bool Cfg_SwitchInvertY;
  bool Cfg_BasicAlloc;
  uint cLightIn;
  CPlugBitmap* MapShadowCache;
};

} // namespace Vision

namespace Audio {

struct CAudioPort : public CMwNod {
  bool IsEnabled;
  float SoundVolume; // Range: -40 - 0
  float MusicVolume; // Range: -40 - 0
  bool AudioAlwaysOn;
  UnnamedEnum SettingQuality;
  float SettingSoundHdrFactor; // Range: 0 - 1
  bool SettingDisableDoppler;
  uint SettingUpdatePeriod; // Range: 0 - 1000
  uint SettingSoundsPerUpdate;
  uint SettingMaxSimultaneousSounds;
  const MwBuffer<CAudioZone*> Zones;
  const MwBuffer<CAudioListener*> Listeners;
  const MwBuffer<CAudioSource*> Sources;
  const MwBuffer<CAudioBufferKeeper*> BufferKeepers;
  const uint Manager_AllocatedVoices;
  const uint Manager_AvailableVoices;
  CPlugAudioBalance* const BaseBalanceLoud;
  CPlugAudioBalance* const BaseBalanceSoft;
  CPlugAudioBalance* const CurBalance;
  const float CurScriptLimitMusicVolumedB;
  const float CurScriptLimitSceneSoundVolumedB;
  const float CurScriptLimitUiSoundVolumedB;
  float CurSoundVolumeRms;
  float CurSoundHdrCorrection;
  int ForceEnableMusicCount;
  bool MuteSounds_FromLoadScreen;
  uint IsCapturing;
  const MwBuffer<CPlugFileSnd*> CapturedFileSnds;
  CPlugFileText* ModifierXmlFile;
  void ParseModifierXml();
  void LoadExternalSoundParam();
  void SaveExternalSoundParam();
  const string AnalyzerEstimatedVolume;
  const float AnalyzerAudioTimePerSec;
  const float AnalyzerAudioTimePerSecUpdate;
  const float AnalyzerAudioTimePerSecStream;
  const uint AnalyzerStreamBytesPerSec;
  const uint AnalyzerAudioLongestSlice;
  const uint AnalyzerTotalKeepersMem;
  const string AnalyzerNbSoundsStr;
  const uint AnalyzerNbFadingSounds;
  const uint AnalyzerNbAutoDuckedSounds;
  const uint AnalyzerNbStreamingSounds;
  const uint AnalyzerNbDestoyedPerUpdate;
  const uint AnalyzerNbCreatedPerUpdate;
};

struct CAudioPortNull : public CAudioPort {
};

struct CAudioSoundImplem : public CMwNod {
  CAudioSource* const Source;
  const bool IsActuallyPlaying;
  void RefreshStaticProperties();
  float PlayCursor;
  float PlayCursorUi; // Range: 0 - 1
};

struct CAudioBufferKeeper : public CMwNod {
  CPlugFileSnd* const PlugFileSnd;
  const uint HwAllocSize;
  const bool IsStreaming;
  const bool IsSilent;
  const uint NbUses;
};

struct CAudioListener : public CMwNod {
  CPlugAudioEnvironment* AudioEnvironment;
  float InsideCoef;
  float EnclosedCoef;
  float UnderwaterCoef;
  MwBuffer<uint> AudioGroupHandlesInFocus;
};

struct CAudioZone : public CMwNod {
  const MwBuffer<CAudioZoneSource*> Sources;
  const MwBuffer<CAudioListener*> Listeners;
};

struct CAudioScriptManager : public CMwNod {
  enum class ELibSound {
    Alert = 0,
    ShowDialog = 1,
    HideDialog = 2,
    ShowMenu = 3,
    HideMenu = 4,
    Focus = 5,
    Valid = 6,
    Start = 7,
    Countdown = 8,
    Victory = 9,
    ScoreIncrease = 10,
    Checkpoint = 11,
  };
  CAudioScriptSound* CreateSound(string Url); // Maniascript
  CAudioScriptSound* CreateSoundEx(string Url, float VolumedB, bool IsMusic, bool IsLooping, bool IsSpatialized); // Maniascript
  void DestroySound(CAudioScriptSound* Sound); // Maniascript
  const MwBuffer<CAudioScriptSound*> Sounds; // Maniascript
  CAudioScriptMusic* CreateMusic(string Url); // Maniascript
  void DestroyMusic(CAudioScriptMusic* Music); // Maniascript
  void PlaySoundEvent(CAudioScriptSound* Sound, float VolumedB); // Maniascript
  void PlaySoundEventUrl(string Url, float VolumedB); // Maniascript
  void PlaySoundLibrary(ELibSound Sound, uint SoundVariant, float VolumedB); // Maniascript
  void PlayDelayedSoundEvent(CAudioScriptSound* Sound, float VolumedB, int Delay); // Maniascript
  void PlayDelayedSoundEventUrl(string Url, float VolumedB, int Delay); // Maniascript
  void PlayDelayedSoundLibrary(ELibSound Sound, uint SoundVariant, float VolumedB, int Delay); // Maniascript
  void PlaySoundEventMix(CAudioScriptSound* Sound, float VolumedB, vec3 PanRadiusLfe); // Maniascript
  void PlaySoundEventMixUrl(string Url, float VolumedB, vec3 PanRadiusLfe); // Maniascript
  void PlayDelayedSoundEventMix(CAudioScriptSound* Sound, float VolumedB, vec3 PanRadiusLfe, int Delay); // Maniascript
  void PlayDelayedSoundEventMixUrl(string Url, float VolumedB, vec3 PanRadiusLfe, int Delay); // Maniascript
  void ClearAllDelayedSoundsEvents(); // Maniascript
  bool ForceEnableMusic; // Maniascript
  float LimitMusicVolumedB; // Maniascript
  float LimitSceneSoundVolumedB; // Maniascript
  float LimitUiSoundVolumedB; // Maniascript
};

struct CAudioScriptSound : public CMwNod {
  void Play(); // Maniascript
  void Stop(); // Maniascript
  const bool IsPlaying; // Maniascript
  const bool DownloadInProgress; // Maniascript
  float Volume; // Maniascript
  float FadeDuration; // Maniascript
  float VolumedB; // Maniascript
  float Pitch; // Maniascript
  vec3 RelativePosition; // Maniascript
  vec3 PanRadiusLfe; // Maniascript
  float PlayCursor; // Maniascript
  const float PlayLength; // Maniascript
};

struct CAudioScriptMusic : public CAudioScriptSound {
  enum class EUpdateMode {
    Cut = 0,
    OnNextBar = 1,
    OnNextHalfBar = 2,
    OnNextBeat = 3,
  };
  MwArray<float> Tracks_Volume; // Maniascript
  MwArray<float> Tracks_VolumedB; // Maniascript
  const MwArray<wstring> Tracks_Name; // Maniascript
  const MwArray<float> Tracks_Length; // Maniascript
  const uint Tracks_Count; // Maniascript
  const float BeatsPerMinute; // Maniascript
  const float BeatDuration; // Maniascript
  const uint BeatsPerBar; // Maniascript
  EUpdateMode UpdateMode; // Maniascript
  bool Dbg_ForceIntensity; // Maniascript
  bool Dbg_ForceSequential; // Maniascript
  bool Dbg_ForceRandom; // Maniascript
  float LPF_CutoffRatio; // Range: 0 - 1 // Maniascript
  float LPF_Q; // Range: 0.1 - 20 // Maniascript
  float HPF_CutoffRatio; // Range: 0 - 1 // Maniascript
  float HPF_Q; // Range: 0.1 - 20 // Maniascript
  float FadeTracksDuration; // Maniascript
  float FadeFiltersDuration; // Maniascript
  void MuteAllTracks(); // Maniascript
  void UnmuteAllTracks(); // Maniascript
  void NextVariant(); // Maniascript
  void NextVariant2(bool IsIntensityDecreasing); // Maniascript
  void EnableSegment(wstring SegmentName); // Maniascript
  bool UseNewImplem; // Maniascript
};

struct CAudioZoneSource : public CMwNod {
  enum class EAudioBalanceGroup {
    Auto = 0,
    Music = 1,
    Menus = 2,
    Ambiance = 3,
    Player = 4,
    Bengs = 5,
    Guns = 6,
    BackingDirect = 7,
    Trails = 8,
    GameUI = 9,
    Custom1 = 10,
    Custom2 = 11,
    OtherPlayers = 12,
    ImpactWarning = 13,
    Environment = 14,
  };
  CPlugSound* PlugSound;
  float PriorityAdjustement;
  bool UseLowQuality;
  vec3 VolumicSize;
  EAudioBalanceGroup BalanceGroup;
  uint AudioGroupHandle;
  bool Play;
  bool Stop;
  float Volume; // Range: 0 - 2
  float Pitch; // Range: 0 - 5
  uint Variant;
  uint MaxVariants;
  float RpmOrSpeed;
  float Accel; // Range: 0 - 1
  uint Gear;
  uint SurfaceId;
  float SkidIntensity;
  float SkidSpeedKmh;
  CMwNod* const AudioSourceMain;
  CMwNod* const AudioSourceBacking;
};

struct CAudioSource : public CMwNod {
  enum class EAudioBalanceGroup {
    Auto = 0,
    Music = 1,
    Menus = 2,
    Ambiance = 3,
    Player = 4,
    Bengs = 5,
    Guns = 6,
    BackingDirect = 7,
    Trails = 8,
    GameUI = 9,
    Custom1 = 10,
    Custom2 = 11,
    OtherPlayers = 12,
    ImpactWarning = 13,
    Environment = 14,
  };
  const bool IsPlaying;
  void Play();
  void Stop();
  CPlugSound* const PlugSound;
  bool UseLowQuality;
  float PriorityAdjustement;
  EAudioBalanceGroup BalanceGroup;
  uint AudioGroupHandle;
  float PlayCursor;
  float PlayCursorUi; // Range: 0 - 1
  float VolumedB; // Range: -60 - 6
  float LfeSenddB; // Range: -60 - 6
  float Pitch; // Range: 0.01 - 5
  float PanAngleDeg; // Range: -180 - 180
  float Radius;
  vec3 Position;
  iso4 Loc;
  vec3 Velocity;
  CAudioSoundImplem* const Implementation;
};

struct CAudioSourceMusic : public CAudioSource {
  MwArray<float> TracksVolume;
  MwArray<float> TracksVolumedB;
  float LPF_CutoffRatio; // Range: 0 - 1
  float LPF_Q; // Range: 0.1 - 20
  float HPF_CutoffRatio; // Range: 0 - 1
  float HPF_Q; // Range: 0.1 - 20
  float FadeTrackDuration;
  float FadeFiltersDuration;
  void MuteAllTracks();
  void UnmuteAllTracks();
};

struct CAudioSourceEngine : public CAudioSource {
  float RpmNormalised; // Range: 0 - 1
  float Rpm;
  float Accel; // Range: 0 - 1
  float VehicleSpeed;
  float Alpha; // Range: -1 - 1
  uint Gear;
};

struct CAudioSourceSurface : public CAudioSource {
  enum class ESurfId {
    Concrete = 0,
    Pavement = 1,
    Grass = 2,
    Ice = 3,
    Metal = 4,
    Sand = 5,
    Dirt = 6,
    Turbo = 7,
    DirtRoad = 8,
    Rubber = 9,
    SlidingRubber = 10,
    Test = 11,
    Rock = 12,
    Water = 13,
    Wood = 14,
    Danger = 15,
    Asphalt = 16,
    WetDirtRoad = 17,
    WetAsphalt = 18,
    WetPavement = 19,
    WetGrass = 20,
    Snow = 21,
    ResonantMetal = 22,
    GolfBall = 23,
    GolfWall = 24,
    GolfGround = 25,
    Turbo2 = 26,
    Bumper = 27,
    NotCollidable = 28,
    FreeWheeling = 29,
    TurboRoulette = 30,
    WallJump = 31,
    MetalTrans = 32,
    Stone = 33,
    Player = 34,
    Trunk = 35,
    TechLaser = 36,
    SlidingWood = 37,
    PlayerOnly = 38,
    Tech = 39,
    TechArmor = 40,
    TechSafe = 41,
    OffZone = 42,
    Bullet = 43,
    TechHook = 44,
    TechGround = 45,
    TechWall = 46,
    TechArrow = 47,
    TechHook2 = 48,
    Forest = 49,
    Wheat = 50,
    TechTarget = 51,
    PavementStair = 52,
    TechTeleport = 53,
    Energy = 54,
    TechMagnetic = 55,
    TurboTechMagnetic = 56,
    Turbo2TechMagnetic = 57,
    TurboWood = 58,
    Turbo2Wood = 59,
    FreeWheelingTechMagnetic = 60,
    FreeWheelingWood = 61,
    TechSuperMagnetic = 62,
    TechNucleus = 63,
    TechMagneticAccel = 64,
    MetalFence = 65,
    TechGravityChange = 66,
    TechGravityReset = 67,
    RubberBand = 68,
    Gravel = 69,
    NoGrip = 70,
    Bumper2 = 71,
    NoSteering = 72,
    NoBrakes = 73,
    CustomIce = 74,
  };
  ESurfId SurfaceId;
  float SpeedNormalised; // Range: 0 - 1
  float SpeedKmh;
  float SkidIntensity; // Range: 0 - 1
  float SkidSpeedKmh;
};

struct CAudioSourceMulti : public CAudioSource {
  uint Variant;
  uint MaxVariants;
};

struct CAudioSourceMood : public CAudioSource {
  float InsideFactor; // Range: 0 - 1
};

struct CAudioSourceGauge : public CAudioSource {
  float Ratio; // Range: 0 - 1
  float FullRatio;
  float GradingRatio;
  float Rate;
};

struct COalAudioPort : public CAudioPort {
  const wstring OpenALDllPath;
  string DeviceName;
  bool SettingAllowEFX;
  bool SettingAllowHRTF;
  const uint NbMaxSounds;
  void EnumerateDevicesNames_WriteToLog();
  void EnumerateDevices();
  void EnumerateDevices_WriteToLog();
  const MwBuffer<COalDevice*> OalDevices;
  const bool EFXEnabled;
  const uint Manager_SpacialVoices;
  const uint Manager_DirectVoices;
  CPlugAudioEnvironment* const CurrentEnvironment;
};

struct COalAudioBufferKeeper : public CAudioBufferKeeper {
};

// File extension: 'OpenALDevice.Gbx'
struct COalDevice : public CMwNod {
  COalDevice();

  const string DeviceSpecifier;
  const string OtherNames;
  const bool CanCapture;
  const string AlExtensions;
  const string AlcExtensions;
  const uint VersionMajor;
  const uint VersionMinor;
  const bool IsSync;
  const uint RefreshPeriod;
  const uint MixFrequency;
  const uint NbMonoVoices;
  const uint NbStereoVoices;
  const uint XRAMFree;
  const uint XRAMSize;
  const uint EFX_VersionMajor;
  const uint EFX_VersionMinor;
  const uint EFX_MaxAuxSends;
};

} // namespace Audio

namespace Script {

struct CScriptSetting : public CMwNod {
  const UnnamedEnum Type;
  const string Name;
  bool BooleanVal;
  int IntegerVal;
  float RealVal;
  wstring TextVal;
};

struct CScriptTraitsPersistent : public CMwNod {
  CScriptTraitsPersistent();

  const uint PersistentTraitsCount;
};

struct CScriptTraitsMetadata : public CMwNod {
  CScriptTraitsMetadata();

  const uint MetadataTraitsCount;
  void ClearMetadata();
};

struct CScriptInterfacableValue : public CMwNod {
  const UnnamedEnum Type;
  bool BooleanVal;
  int IntegerVal;
  float RealVal;
  wstring TextVal;
  bool Bool1;
  string String1;
  wstring StringInt1;
};

struct CScriptBaseEvent : public CScriptBaseConstEvent {
  const bool HasBeenPassed; // Maniascript
  const bool HasBeenDiscarded; // Maniascript
};

// Description: "An event"
struct CScriptBaseConstEvent : public CMwNod {
  bool HasBeenProcessed; // Maniascript
};

} // namespace Script

namespace Net {

struct CNetNod : public CMwNod {
};

struct CNetServerInfo : public CMwNod {
  const string GameID;
  const string GameVersion;
  const string SessionTitleId;
  const string HostName;
  const string LocalIP;
  const uint LocalUDPPort;
  const uint LocalTCPPort;
  const string RemoteIP;
  const uint RemoteUDPPort;
  const uint RemoteTCPPort;
};

struct CNetClientInfo : public CMwNod {
  const string GameID;
  const string GameVersion;
  const string HostName;
  const string LocalIP;
  const string RemoteIP;
};

struct CNetFormTimed : public CNetNod {
};

struct CNetFormQuerrySessions : public CNetNod {
  CNetFormQuerrySessions();

};

struct CNetFormEnumSessions : public CNetNod {
  CNetFormEnumSessions();

};

struct CNetFormPing : public CNetFormTimed {
  CNetFormPing();

};

struct CNetServer : public CMwNod {
  const uint P2PPort;
  const bool AcceptConnections;
  const uint NbrNewConnections;
  const uint NbrConnections;
  const uint NbrConnectionsDone;
  const uint NbrConnectionsPending;
  const uint NbrConnectionsDisconnecting;
  const uint SendingDataRate;
  const uint TCPSendingDataRate;
  const uint UDPSendingDataRate;
  const uint ReceivingDataRate;
  const uint TCPReceivingDataRate;
  const uint UDPReceivingDataRate;
  const uint ReceptionPacketTotal;
  const uint UDPReceptionPacketTotal;
  const uint TCPReceptionPacketTotal;
  const uint SendingPacketTotal;
  const uint UDPSendingPacketTotal;
  const uint TCPSendingPacketTotal;
  const uint ReceptionNodTotal;
  const uint UDPReceptionNodTotal;
  const uint TCPReceptionNodTotal;
  const uint SendingNodTotal;
  const uint UDPSendingNodTotal;
  const uint TCPSendingNodTotal;
};

struct CNetClient : public CMwNod {
  const MwBuffer<CNetConnection*> Connections;
  const uint NbrNewConnections;
  const uint NbrConnections;
  const uint NbrConnectionsInProgress;
  const uint NbrConnectionsDone;
  const uint NbrConnectionsDisconnecting;
  const uint SendingDataRate;
  const uint TCPSendingDataRate;
  const uint UDPSendingDataRate;
  const uint ReceivingDataRate;
  const uint TCPReceivingDataRate;
  const uint UDPReceivingDataRate;
  const uint ReceptionPacketTotal;
  const uint UDPReceptionPacketTotal;
  const uint TCPReceptionPacketTotal;
  const uint SendingPacketTotal;
  const uint UDPSendingPacketTotal;
  const uint TCPSendingPacketTotal;
  const uint ReceptionNodTotal;
  const uint UDPReceptionNodTotal;
  const uint TCPReceptionNodTotal;
  const uint SendingNodTotal;
  const uint UDPSendingNodTotal;
  const uint TCPSendingNodTotal;
  const int TimeLatestHumanPing;
  const int TimeLatestGamePing;
  const float TimeLatestEpsilon;
  const float TimeSmoothedEpsilon;
  const uint LatestTimeSynchronization;
  const uint LatestTimeSyncReception;
  bool TimeNotifyDiscontinuity;
  uint PrevDiscontinuityTime;
  const float TimeCorrectionWeight;
  float TimeThreshold;
  float TimeSmoothing;
  uint TimeLookahead;
};

struct CNetConnection : public CMwNod {
  const bool ClientToServer;
  CMwNod* Info;
  const uint TCPPort;
  const uint UDPPort;
  const uint State;
  const bool Broken;
  const bool ConnectionTCP;
  const bool ConnectionWaiting;
  const bool ConnectionRequest;
  const bool TestingUDP;
  const bool Connected;
  const bool CanReceiveTCP;
  const bool CanSendTCP;
  const bool CanReceiveUDP;
  const bool CanSendUDP;
  const uint TCPEmissionQueue;
  const bool WasUDPPacketDropped;
  const bool IsTCPSaturated;
  const uint LatestNetworkActivity;
  const uint LatestUDPActivity;
  const uint ReceptionPacketTotal;
  const uint UDPReceptionPacketTotal;
  const uint TCPReceptionPacketTotal;
  const uint SendingPacketTotal;
  const uint UDPSendingPacketTotal;
  const uint TCPSendingPacketTotal;
  const uint ReceptionNodTotal;
  const uint UDPReceptionNodTotal;
  const uint TCPReceptionNodTotal;
  const uint SendingNodTotal;
  const uint UDPSendingNodTotal;
  const uint TCPSendingNodTotal;
  const uint ReceptionPacketLoss;
  const uint ReceptionPacketTotalWithoutLoss;
  const uint ReceptionCounter;
  const uint SendingCounter;
  void Disconnect();
};

struct CNetFormConnectionAdmin : public CNetNod {
  CNetFormConnectionAdmin();

};

struct CNetHttpClient : public CMwNod {
  string Server;
  uint Port;
  uint Context;
  string ProxyUrl;
  const string LastError;
  string LanguageHeader;
  string UserAgentHeader;
  const MwBuffer<CNetHttpResult*> Requests;
};

struct CNetHttpResult : public CMwNod {
  const string Server;
  const string Path;
  enum class EKind {
    Download = 0,
    Upload = 1,
  };
  const EKind Kind;
  const EStatus Status;
  const uint ExpectedTransfertSize;
  const string ContentType;
  const string ContentEncoding;
  const uint CurrentSize;
  const uint HttpError;
};

struct CNetMasterServer : public CMwNod {
  string GameVersion;
  const MwBuffer<CNetMasterServerUserInfo*> MasterServerUserInfos;
  const MwBuffer<CNetHttpClient*> HttpClientCache;
  const MwBuffer<CNetMasterServerDownload*> Downloads;
  const MwBuffer<CNetMasterServerDownload*> CurrentDownloads;
  const MwBuffer<CNetHttpClient*> HttpDownloadClients;
  const MwBuffer<CNetMasterServerUptoDateCheck*> UpToDateChecks;
  const MwBuffer<CNetMasterServerUptoDateCheck*> CurrentUpToDateChecks;
  const MwBuffer<CNetHttpClient*> HttpCheckUpToDateClients;
};

struct CNetMasterHost : public CMwNod {
  string NetHostName;
  const string TitleIdName;
};

struct CNetFileTransfer : public CMwNod {
  const MwBuffer<CNetIPSource*> IPSources;
  const MwBuffer<CNetFileTransferUpload*> Uploads;
  const MwBuffer<CNetFileTransferDownload*> Downloads;
  const MwBuffer<CNetFileTransferDownload*> TerminatedDownloads;
  const bool DownloadEnabled;
  const bool UploadEnabled;
  const bool WaitForDownload;
  const string IPAddress;
  const uint P2PKey;
  const uint ClientUId;
  const bool IsServer;
  const uint UploadRate;
  const uint DownloadRate;
  const uint NbOfCurrentUls;
  const uint SendBandwidthLimit;
  const uint TotalSendingSize;
  const uint NbSendChannelLeft;
  const uint NbSendChannelToRestore;
  const uint NbSendChannelUsed;
  const uint FirstTimeNotEnoughSendBandwidth;
  const bool IsEmissionSaturated;
  const uint NbOfCurrentDls;
  const uint ReceiveBandwidthLimit;
  const uint TotalReceivingSize;
  const uint NbReceiveChannelLeft;
  const uint NbReceiveChannelToRestore;
  const uint NbReceiveChannelUsed;
  const uint FirstTimeNotEnoughReceiveBandwidth;
  const uint MaxDownloadRateLeft;
  const uint MaxDownloadChannelLeft;
  const uint MaxUploadRateLeft;
  const uint MaxUploadChannelLeft;
  const uint MinSizeTransfer;
  const uint MaxSizeTransfer;
  const uint MaxDownloads;
  const uint MaxUploads;
  const uint MaxChannelPerTransfer;
  const uint NewConnectionTimeoutForDownload;
  const uint NewConnectionTimeoutForUpload;
  const uint SendMsgThroughServerTimeoutForDownload;
  const uint SendMsgThroughServerTimeoutForUpload;
  const uint LastUpdateTime;
  const uint UpdateDelta;
  const uint WriteOnDiskError;
  CNetServer* const Server;
  CNetClient* const Client;
  CNetMasterServer* const MasterServer;
  CSystemPackManager* const PackManager;
  CSystemFidsFolder* const DiskCacheDir;
};

struct CNetMasterServerInfo : public CMwNod {
  string Addr;
  string Path;
  string Name;
  wstring Message;
  bool LadderEnabled;
};

struct CNetFileTransferNod : public CMwNod {
  const wstring Name;
  const string Checksum;
  CSystemFidFile* const File;
  const uint TotalSize;
  const uint CurrentOffset;
};

struct CNetFileTransferForm : public CNetNod {
  CNetFileTransferForm();

};

struct CNetFileTransferDownload : public CNetFileTransferNod {
  const uint IdDownload;
  const UnnamedEnum DownloadState;
  CSystemPackDesc* const PackDesc;
  const uint PriorityLevel;
  const uint PriorityFlags;
  const MwBuffer<CNetSource*> Sources;
  const uint NbOfEffectiveSources;
  CNetSource* const ActiveSource;
  const MwBuffer<CNetURLSource*> UrlSources;
  CNetURLSource* const ActiveUrlSource;
  const string Url;
  const string LastUrlUsed;
  const bool AcceptP2P;
  const bool AcceptUrl;
  const bool SkipServerSource;
  const bool IsNearFinished;
  const wstring TempFileName;
  const uint LastWriteTimeout;
  CNetMasterServerUptoDateCheck* const PackDescUpToDateCheck;
  const bool PackDescUpToDateChecked;
  const uint LastDataMsgTime;
  const uint LastDataReception;
  const uint LastDataWrite;
  const uint SendEfficiency;
  const uint InstantaneousEfficiency;
  const uint AverageEfficiency;
};

struct CNetFileTransferUpload : public CNetFileTransferNod {
  const uint IdUpload;
  const uint IdDownload;
  const uint IdSource;
  const UnnamedEnum UploadState;
  CNetIPSource* const IPSource;
  CNetConnection* const Connection;
  const uint DownloadPriorityLevel;
  const uint PriorityLevel;
  const uint NbChannelsUsed;
  const uint NbChannelsUsedValidated;
  const uint TimeOut;
  const uint ValidityTimeOut;
  const bool IsActive;
  const bool MustBeActive;
  const uint LastActiveTime;
  const bool IsConnecting;
  const bool FirstToConnect;
  const bool MustSendReqAck;
  const bool ReqAckSent;
  const uint UploadAttempt;
  const uint MsgAttempt;
  bool ForceCancel;
  const uint ReadOffset;
  const uint LastMessageTime;
  const uint LastReadTimeOut;
  const uint LastSentTime;
  const uint LastDataComplete;
  const uint InstantaneousEfficiency;
  const uint AverageEfficiency;
};

struct CNetSource : public CMwNod {
  CNetSource();

  const uint IdSource;
  const uint IdUpload;
  const UnnamedEnum SourceState;
  CNetFileTransferDownload* const Download;
  CNetIPSource* const SourceAddress;
  CNetConnection* const Connection;
  const uint LastMessageTime;
  const uint TimeOut;
  const uint NbChannelsUsed;
  const uint LastNbChannelsUsedProposition;
  const bool TestedAtLeastOnce;
  const bool OwnsFile;
  const bool IsConnecting;
  const bool FirstToConnect;
  const bool ReqSent;
  const bool MustSendRequest;
  const bool MustSendUploadAck;
  const bool ForceSending;
  const bool HasReceivedUrl;
  bool InterruptTransfer;
  bool ForceCancel;
  const uint SourceAttempt;
  const uint MsgAttempt;
};

struct CNetIPC : public CMwNod {
  CNetIPC();

  const uint Port;
  const string VersionString;
  uint MaxPacketSize;
};

struct CNetFormRpcCall : public CNetNod {
  CNetFormRpcCall();

};

struct CNetUPnP : public CMwNod {
};

struct CNetMasterServerRequest : public CMwNod {
};

struct CNetIPSource : public CMwNod {
  const string RemoteIP;
  const uint DownloadRate;
  const uint UploadRate;
  const bool IsServer;
  const bool IsUploadEnabled;
  const uint P2PKey;
  const uint ClientUId;
  CNetConnection* const GameConnection;
  CNetConnection* const ConnectionFrom;
  CNetConnection* const ConnectionTo;
  const uint ConnectTimeOut;
  const uint LastConnectionTime;
  const uint LastContactTime;
  const uint ConnectionFromTimeOut;
  const uint ConnectionToTimeOut;
  const bool IsConnecting;
  const uint ConnectionAttempt;
  const bool ConnectionTested;
  const bool ConnectionPossible;
  const uint ThroughServerAttempt;
  const bool ThroughServerTested;
  const bool ThroughServerPossible;
  const bool CanBeConnectedBy;
  const MwBuffer<CNetSource*> SourcesUsingConnectionFrom;
  const MwBuffer<CNetFileTransferUpload*> UploadsUsingConnectionFrom;
  const MwBuffer<CNetSource*> SourcesUsingConnectionTo;
  const MwBuffer<CNetFileTransferUpload*> UploadsUsingConnectionTo;
  bool ForceCancel;
};

struct CNetMasterServerUptoDateCheck : public CMwNod {
  const string Server;
  const string Path;
  const uint Port;
  const uint PriorityLevel;
  const bool IsUpToDate;
  const uint ReturnedError;
  CNetHttpResult* const HttpResult;
  const bool IsFinished;
};

struct CNetURLSource : public CMwNod {
  const UnnamedEnum URLSourceState;
  CNetFileTransferDownload* const Download;
  CNetFileTransferDownload* const MasterServerDownload;
  const string Url;
};

// Description: "Manager for HTTP requests"
struct CNetScriptHttpManager : public CMwNod {
  CNetScriptHttpRequest* CreateGet(string Url); // Maniascript
  CNetScriptHttpRequest* CreateGet2(string Url, bool UseCache); // Maniascript
  CNetScriptHttpRequest* CreateGet3(string Url, bool UseCache, string AdditionalHeaders); // Maniascript
  CNetScriptHttpRequest* CreatePost(string Url, string Resource); // Maniascript
  CNetScriptHttpRequest* CreatePost2(string Url, string Resource, string AdditionalHeaders); // Maniascript
  CNetScriptHttpRequest* CreatePostFile(string Url, wstring FileName, string AdditionalHeaders); // Maniascript
  void Destroy(CNetScriptHttpRequest* Request); // Maniascript
  bool IsValidUrl(string Url); // Maniascript
  const MwBuffer<CNetScriptHttpRequest*> Requests; // Maniascript
  const uint SlotsAvailable; // Maniascript
  const MwBuffer<CNetScriptHttpEvent*> PendingEvents; // Maniascript
  bool AutomaticHeaders_Timezone; // Maniascript
};

// Description: "An HTTP request."
struct CNetScriptHttpRequest : public CMwNod {
  const string Url; // Maniascript
  const wstring Result; // Maniascript
  const uint StatusCode; // Maniascript
  const bool IsCompleted; // Maniascript
};

struct CNetXmpp_Timer : public CMwNod {
  CNetXmpp_Timer();

};

struct CNetMasterServerDownload : public CMwNod {
  const string Server;
  const string Path;
  const uint Port;
  enum class EContext {
    None = 0,
    Browser = 1,
    Menu = 2,
    Screen = 3,
    InGameInterface = 4,
  };
  const EContext Context;
  const uint Offset;
  enum class EUploadMethod {
    None = 0,
    Post = 1,
    Put = 2,
  };
  const EUploadMethod UploadMethod;
  const uint TotalSize;
  const uint DownloadStartTime;
  const uint DownloadingTime;
  const uint PriorityLevel;
  const uint ReturnedError;
  const string RequestHeaders;
  const uint Timeout;
  CNetHttpResult* const HttpResult;
  const bool IsFinished;
  const bool IsPaused;
};

struct CNetFormNewPing : public CNetNod {
  CNetFormNewPing();

};

// Description: "Masterserver user info."
struct CNetMasterServerUserInfo : public CMwNod {
  enum class EFirstPartySignInState {
    Unknown = 0,
    NotSignedUp = 1,
    SignedOut = 2,
    SignedIn = 3,
  };
  enum class EMasterServerConnectionStatus {
    NotConnected = 0,
    Connecting = 1,
    Connected = 2,
    Disconnecting = 3,
  };
  enum class EMasterServerConnectionDetailedStatus {
    NotConnected = 0,
    CheckingNetworkAvailability = 1,
    CheckingMasterServerConnexion = 2,
    WaitingCredentials = 3,
    CheckingMasterServerWaitingQueue = 4,
    WaitingOnMasterServerQueue = 5,
    WaitingSubscriptionCredentials = 6,
    CheckingSubscriptionCredentials = 7,
    WaitingSubscriptionInfo = 8,
    Subscribe = 9,
    OpeningSession = 10,
    Identifying = 11,
    GettingZones = 12,
    WaitingNewZone = 13,
    ChangingZone = 14,
    GettingOnlineProfile = 15,
    SynchronizingProfileChunks = 16,
    AssociatingKey = 17,
    UpdatingProfile = 18,
    GettingBannedCryptedChecksumsList = 19,
    GettingTitleInfo = 20,
    ConnectingToUbiServices = 21,
    FinalizingConnection = 22,
    Connected = 23,
    Disconnecting = 24,
  };
  enum class EMasterServerConnectionError {
    NetworkNotAvailable = 0,
    FirstPartySignedOut = 1,
    NoUbiServicesSession = 2,
    MasterServerDisabled = 3,
    MasterServerInSafeMode = 4,
    KillSwitchEnabled = 5,
    BetaBanned = 6,
    BetaNotApproved = 7,
    NoUplayPC = 8,
  };
  const MwId Id; // Maniascript
  const int UserId;
  const string Login; // Maniascript
  const wstring DisplayName; // Maniascript
  const string Password;
  const string NewPassword;
  CNetMasterServerInfo* const MasterServerInfo;
  const EMasterServerConnectionStatus ConnectionStatus; // Maniascript
  const string LastConnectionErrorType; // Maniascript
  const string LastConnectionErrorCode; // Maniascript
  const wstring LastConnectionErrorDescription; // Maniascript
  const bool HasUplayProfile; // Maniascript
  const bool HasAcceptedNDA; // Maniascript
};

struct CWebServicesTask : public CMwNod {
};

struct CWebServicesTaskSequence : public CWebServicesTask {
};

// Description: "Asynchronous task result."
struct CWebServicesTaskResult : public CMwNod {
  const MwId Id; // Maniascript
  const bool IsProcessing; // Maniascript
  const bool HasSucceeded; // Maniascript
  const bool HasFailed; // Maniascript
  const bool IsCanceled; // Maniascript
  const string ErrorType; // Maniascript
  const string ErrorCode; // Maniascript
  const wstring ErrorDescription; // Maniascript
  void Cancel(); // Maniascript
};

struct CWebServicesTaskScheduler : public CMwNod {
};

struct CWebServicesTask_Empty : public CWebServicesTaskVoid {
};

struct CNetUplayPC : public CMwNod {
};

struct CNetNadeoServicesTask_GetNadeoServicesIdFromWebServicesIdentity : public CNetNadeoServicesRequestTask {
};

struct CWebServicesTask_GetDisplayNameFromNadeoServicesId : public CWebServicesTaskSequence {
};

struct CWebServicesTask_GetDisplayNameFromWebServicesIdentity : public CWebServicesTaskSequence {
};

struct CNetMasterServerRequestTask : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Bool : public CWebServicesTaskResult {
  const bool Value; // Maniascript
};

struct CWebServicesTaskResult_String : public CWebServicesTaskResult {
  const string Value; // Maniascript
};

struct CNetMasterServerTask_GetClientConfigUrls : public CNetMasterServerRequestTask {
};

struct CNetUplayPCTask_OpenOverlay : public CWebServicesTaskSequence {
};

struct CWebServicesTask_CheckNetworkAvailability : public CWebServicesTaskSequence {
};

struct CNetUplayPCUserInfo : public CMwNod {
};

struct CNetMasterServerTask_GetApplicationConfig : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_ClientConfig : public CWebServicesTaskResult {
};

struct CNetMasterServerTask_GetWaitingParams : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_CheckLoginForSubscribe : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_Subscribe : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_OpenSession : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_Connect : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_Session_Get : public CWebServicesTaskResult {
  const string SessionId; // Maniascript
  const string ServerLogin; // Maniascript
  const string ServerPassword; // Maniascript
};

struct CNetMasterServerTask_ShowProfile : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_Get : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_JoinOrCreate : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_Leave : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_InviteBuddy : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_ShowInviteUI : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_GetFeatureTimeLimit : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_Natural : public CWebServicesTaskResult {
  const uint Value; // Maniascript
};

struct CNetMasterServerTask_CheckFeatureTimeLimit : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_SetFeatureTimeUse : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_PlayerFeatureLimitList : public CWebServicesTaskResult {
};

// Description: "UbiServices news."
struct CNetUbiServicesNews : public CMwNod {
  const MwId Id; // Maniascript
  const string NewsId; // Maniascript
  const string Type; // Maniascript
  const string Placement; // Maniascript
  const string Locale; // Maniascript
  const wstring Title; // Maniascript
  const wstring Body; // Maniascript
  const string MediaUrl; // Maniascript
  const string MediaType; // Maniascript
  const uint Priority; // Maniascript
  const uint DisplayTime; // Maniascript
  uint GetPublicationDate(uint Month, uint Day, uint Hour, uint Minute, uint Second); // Maniascript
  const uint LinksCount; // Maniascript
  void GetLinkInfo(uint LinkIndex, string Type, string Param, wstring ActionName, wstring ActionDescription); // Maniascript
};

struct CNetMasterServerTask_GamerPic_GetUrl : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_StringInt : public CWebServicesTaskResult {
  const wstring Value; // Maniascript
};

struct CNetUplayPCTask_UserTrophiesUnlock : public CWebServicesTaskSequence {
};

struct CWebServicesTaskVoid : public CWebServicesTask {
};

struct CNetMasterServerTask_ImportAccount : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_ImportAccount_IsFinished : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_OpenSession : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_StringIntList : public CWebServicesTaskResult {
  const MwBuffer<wstring> Values; // Maniascript
};

// Description: "An HTTP event."
struct CNetScriptHttpEvent : public CMwNod {
  enum class EType {
    RequestComplete = 0,
  };
  const EType Type; // Maniascript
  CNetScriptHttpRequest* const Request; // Maniascript
};

struct CNetNadeoServices : public CMwNod {
};

struct CNetNadeoServicesUserInfo : public CMwNod {
};

struct CNetNadeoServicesRequestTask : public CWebServicesTaskSequence {
};

struct CNetNadeoServicesRequest : public CMwNod {
};

struct CWebServicesTaskResult_UrlShortCutList : public CWebServicesTaskResult {
};

struct CNetNadeoServicesTask_GetClientConfig : public CNetNadeoServicesRequestTask {
};

struct CNetNadeoServicesTask_Authenticate : public CNetNadeoServicesRequestTask {
};

struct CWebServicesTaskResult_Connect : public CWebServicesTaskResult {
};

struct CNetNadeoServicesTask_GetAccountClientSignature : public CNetNadeoServicesRequestTask {
};

struct CNetNadeoServicesTask_SetClientCaps : public CNetNadeoServicesRequestTask {
};

struct CWebServicesTaskResult_Signature : public CWebServicesTaskResult {
};

struct CNetNadeoServicesTask_GetEncryptedPackageAccountKey : public CNetNadeoServicesRequestTask {
};

struct CNetNadeoServicesTask_GetZones : public CNetNadeoServicesRequestTask {
};

struct CWebServicesTaskResult_NSZoneList : public CWebServicesTaskResult {
};

struct CNetNadeoServicesRequestManager : public CMwNod {
};

struct CNetNadeoServicesTask_GetAccountClientUrls : public CNetNadeoServicesRequestTask {
};

struct CNetNadeoServicesTask_GetAccountZone : public CNetNadeoServicesRequestTask {
};

struct CWebServices : public CMwNod {
};

// Description: "WebServices user info."
struct CWebServicesUserInfo : public CMwNod {
  const MwId Id; // Maniascript
  const int UserId;
  const string NadeoServicesId; // Maniascript
};

struct CWebServicesTask_Connect : public CWebServicesTaskSequence {
};

struct CNetNadeoServicesTask_GetApiRequests : public CNetNadeoServicesRequestTask {
};

struct CWebServicesTask_ConnectToNadeoServices : public CWebServicesTaskSequence {
};

struct CWebServicesTask_UpdateNadeoServicesConfig : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_NSWebServicesIdentityList : public CWebServicesTaskResult {
};

struct CNetNadeoServicesTask_GetWebServicesIdentityFromNadeoServicesId : public CNetNadeoServicesRequestTask {
};

struct CWebServicesTaskResult_ApplicationConfig : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_NSProfileChunkList : public CWebServicesTaskResult {
};

} // namespace Net

namespace Input {

struct CInputPort : public CMwNod {
  const UnnamedEnum InputsMode;
  const string CurrentActionMap;
  bool IsDoingIME;
  const bool IsFocused;
  UnnamedEnum MouseVisibility;
  float RumbleIntensity; // Range: 0 - 2
  float CenterSpringIntensity; // Range: 0 - 1
  float ForceFeedbackIntensity; // Range: 0 - 1
  bool PollingEnabled;
  const bool DeviceHasBeenHotPlugged;
  const uint DevicePlugEventCount;
  void DeviceHotPlugUpdate();
  const MwBuffer<CInputDevice*> ConnectedDevices;
  uint MaxSampleRate;
  uint MinHistoryLength;
  const uint EventInStoreCount;
  bool IgnoreFocusForGamePads;
  CInputReplay* InputsReplay_Replay;
  void InputsReplay_Record();
  void InputsReplay_Playback();
  void InputsReplay_Stop();
  void InputsReplay_Pause();
  void InputsReplay_Resume();
  const bool IsPadModuleExclusive;
  const MwBuffer<CInputScriptPad*> Script_Pads;
  uint AutoRepeat_InitialDelay;
  uint AutoRepeat_Period;
  const bool StatsDInputOverflowedLastFrame;
  const uint StatsDInputOverflowCount;
  const uint StatsDInputEventsLastFrame;
  const uint StatsDInputEventsCount;
  const uint StatsLatestEvent;
  const uint StatsDInputTimedEventsCount;
  const uint StatsDInputWrongTimestampAhead;
  const float StatsDInputWrongTimestampRatioAhead;
  const uint StatsDInputWrongTimestampLate;
  const float StatsDInputWrongTimestampRatioLate;
  const float StatsDInputWrongTimestampAvgDelta;
  const uint StatsNbMappedInputsReceived;
};

struct CInputPortDx8 : public CInputPort {
  CInputPortDx8();

};

struct CInputPortNull : public CInputPort {
};

struct CInputScriptEvent : public CMwNod {
  enum class EType {
    PadButtonPress = 0,
  };
  enum class EButton {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    A = 4,
    B = 5,
    X = 6,
    Y = 7,
    L1 = 8,
    R1 = 9,
    LeftStick = 10,
    RightStick = 11,
    Menu = 12,
    View = 13,
    LeftStick_Left = 14,
    LeftStick_Right = 15,
    LeftStick_Up = 16,
    LeftStick_Down = 17,
    RightStick_Left = 18,
    RightStick_Right = 19,
    RightStick_Up = 20,
    RightStick_Down = 21,
    L2 = 22,
    R2 = 23,
    None = 24,
  };
  const EType Type; // Maniascript
  CInputScriptPad* const Pad; // Maniascript
  const EButton Button; // Maniascript
  const bool IsAutoRepeat; // Maniascript
  const uint KeyCode; // Maniascript
  const string KeyName; // Maniascript
};

struct CInputBindingsConfig : public CMwNod {
  CInputBindingsConfig();

};

struct CInputDevice : public CMwNod {
  const uint UserData;
  const wstring InstanceName;
  const MwId InstanceId;
  const wstring DeviceModelName;
  const MwId DeviceModelId;
  const bool IsDisabled;
  const bool InputNotAvailable;
  const bool IsUnPlugged;
  const bool MustBePolled;
  const bool CanRumble;
  const uint ObjectCount;
  void ReadHardwareCurState();
};

struct CInputDeviceMouse : public CInputDevice {
  const bool IsInsideWindow;
  const vec2 PosInViewport;
  const vec2 KineticScrollVel;
};

struct CInputDeviceDx8Mouse : public CInputDeviceMouse {
};

struct CInputDeviceDx8Keyboard : public CInputDevice {
};

struct CInputDeviceDx8Pad : public CInputDevice {
  void DevSwitchUserIdInvalid();
};

// File extension: 'InputReplay.Gbx'
struct CInputReplay : public CMwNod {
  CInputReplay();

  const uint NbEvents;
};

// Description: "Input devices."
struct CInputScriptManager : public CMwNod {
  enum class EButton {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    A = 4,
    B = 5,
    X = 6,
    Y = 7,
    L1 = 8,
    R1 = 9,
    LeftStick = 10,
    RightStick = 11,
    Menu = 12,
    View = 13,
    LeftStick_Left = 14,
    LeftStick_Right = 15,
    LeftStick_Up = 16,
    LeftStick_Down = 17,
    RightStick_Left = 18,
    RightStick_Right = 19,
    RightStick_Up = 20,
    RightStick_Down = 21,
    L2 = 22,
    R2 = 23,
    None = 24,
  };
  const MwBuffer<CInputScriptEvent*> PendingEvents; // Maniascript
  const uint Now; // Maniascript
  const uint Period; // Maniascript
  const MwBuffer<CInputScriptPad*> Pads; // Maniascript
  const vec2 MousePos; // Maniascript
  const vec2 MouseKineticScrollVel; // Maniascript
  const bool MouseLeftButton; // Maniascript
  const bool MouseRightButton; // Maniascript
  const bool MouseMiddleButton; // Maniascript
  const MwBuffer<vec2> TouchPoints_Cur; // Maniascript
  const MwBuffer<vec2> TouchPoints_Init; // Maniascript
  wstring GetPadButtonPlaygroundBinding(CInputScriptPad* Pad, EButton Button); // Maniascript
  wstring GetPadButtonCurrentBinding(CInputScriptPad* Pad, EButton Button); // Maniascript
  wstring GetPadButtonBinding(CInputScriptPad* Pad, EButton Button); // Maniascript
  bool ExclusiveMode; // Maniascript
  bool IsKeyPressed(int KeyCode); // Maniascript
  uint Dbg_AutoRepeat_InitialDelay; // Maniascript
  uint Dbg_AutoRepeat_Period; // Maniascript
  const uint TimeSinceLatestMouseActivity; // Maniascript
  const uint TimeSinceLatestTouchActivity; // Maniascript
  const uint TimeSinceLatestKeyboardActivity; // Maniascript
  const uint TimeSinceLatestPadActivity; // Maniascript
};

// Description: "game controller."
struct CInputScriptPad : public CMwNod {
  enum class EButton {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    A = 4,
    B = 5,
    X = 6,
    Y = 7,
    L1 = 8,
    R1 = 9,
    LeftStick = 10,
    RightStick = 11,
    Menu = 12,
    View = 13,
    LeftStick_Left = 14,
    LeftStick_Right = 15,
    LeftStick_Up = 16,
    LeftStick_Down = 17,
    RightStick_Left = 18,
    RightStick_Right = 19,
    RightStick_Up = 20,
    RightStick_Down = 21,
    L2 = 22,
    R2 = 23,
    None = 24,
  };
  enum class EPadType {
    Keyboard = 0,
    Mouse = 1,
    Generic = 2,
    XBox = 3,
    PlayStation = 4,
    Vive = 5,
  };
  const int ControllerId; // Maniascript
  const MwId UserId; // Maniascript
  const EPadType Type; // Maniascript
  const wstring ModelName; // Maniascript
  const uint IdleDuration; // Maniascript
  const uint Left; // Maniascript
  const uint Right; // Maniascript
  const uint Up; // Maniascript
  const uint Down; // Maniascript
  const uint A; // Maniascript
  const uint B; // Maniascript
  const uint X; // Maniascript
  const uint Y; // Maniascript
  const uint L1; // Maniascript
  const uint R1; // Maniascript
  const uint LeftStickBut; // Maniascript
  const uint RightStickBut; // Maniascript
  const uint Menu; // Maniascript
  const uint View; // Maniascript
  const float LeftStickX; // Range: -1 - 1 // Maniascript
  const float LeftStickY; // Range: -1 - 1 // Maniascript
  const float RightStickX; // Range: -1 - 1 // Maniascript
  const float RightStickY; // Range: -1 - 1 // Maniascript
  const float L2; // Range: 0 - 1 // Maniascript
  const float R2; // Range: 0 - 1 // Maniascript
  const MwBuffer<EButton> ButtonEvents; // Maniascript
  void ClearRumble(); // Maniascript
  void AddRumble(uint Duration, float LargeMotor, float SmallMotor); // Maniascript
  void SetColor(vec3 Color); // Maniascript
};

} // namespace Input

namespace Xml {

// Description: "Tool for parsing document"
struct CXmlScriptParsingManager : public CMwNod {
  CXmlScriptParsingDocumentXml* Create(wstring Contents); // Maniascript
  CXmlScriptParsingDocumentXml* Create2(wstring Contents, bool GenerateText, bool GenerateTextRaw, bool GenerateTextResursive); // Maniascript
  void Destroy(CXmlScriptParsingDocumentXml* Document); // Maniascript
  void Destroy2(CXmlScriptParsingDocumentJson* Document); // Maniascript
  CXmlScriptParsingDocumentXml* Parse_Xml(wstring Contents); // Maniascript
  CXmlScriptParsingDocumentXml* Parse_Xml2(wstring Contents, bool GenerateText, bool GenerateTextRaw, bool GenerateTextResursive); // Maniascript
  CXmlScriptParsingDocumentXml* Parse_Json(wstring Contents); // Maniascript
  CXmlScriptParsingDocumentJson* Parse_JsonEx(wstring Contents); // Maniascript
  void Parse_Destroy(CXmlScriptParsingDocumentXml* Document); // Maniascript
  void Parse_Destroy2(CXmlScriptParsingDocumentJson* Document); // Maniascript
  uint DocumentsSlotsLimit; // Maniascript
  const MwBuffer<CXmlScriptParsingDocumentXml*> Documents; // Maniascript
  const MwBuffer<CXmlScriptParsingDocumentXml*> DocumentsXml; // Maniascript
  const MwBuffer<CXmlScriptParsingDocumentJson*> DocumentsJson; // Maniascript
  MwId Compose_Start_Xml(bool Compact); // Maniascript
  MwId Compose_Start_Json(bool Compact); // Maniascript
  void Compose_End(MwId ComposerId); // Maniascript
  void Compose_Destroy(MwId ComposerId); // Maniascript
  void Compose_Node_Open(MwId ComposerId, wstring Name); // Maniascript
  void Compose_Node_Close(MwId ComposerId); // Maniascript
  void Compose_Array_Open(MwId ComposerId, wstring Name); // Maniascript
  void Compose_Array_Close(MwId ComposerId); // Maniascript
  void Compose_Attribute_Text(MwId ComposerId, wstring Name, wstring Value); // Maniascript
  void Compose_Attribute_Integer(MwId ComposerId, wstring Name, int Value); // Maniascript
  void Compose_Attribute_Real(MwId ComposerId, wstring Name, float Value); // Maniascript
  void Compose_Attribute_Boolean(MwId ComposerId, wstring Name, bool Value); // Maniascript
  void Compose_Value(MwId ComposerId, wstring Name, wstring Value); // Maniascript
  wstring Compose_GetResult(MwId ComposerId); // Maniascript
};

struct CXmlScriptParsingDocumentXml : public CMwNod {
  const string TextContents; // Maniascript
  CXmlScriptParsingNodeXml* const Root; // Maniascript
  const MwBuffer<CXmlScriptParsingNodeXml*> Nodes; // Maniascript
  CXmlScriptParsingNodeXml* GetFirstChild(string Name); // Maniascript
};

struct CXmlScriptParsingNodeXml : public CMwNod {
  const wstring Name; // Maniascript
  const wstring TextContents; // Maniascript
  const string TextRawContents; // Maniascript
  const string TextRecursiveContents; // Maniascript
  const MwBuffer<CXmlScriptParsingNodeXml*> Children; // Maniascript
  wstring GetAttributeText(wstring Name, wstring DefaultValue); // Maniascript
  int GetAttributeInteger(wstring Name, int DefaultValue); // Maniascript
  float GetAttributeReal(wstring Name, float DefaultValue); // Maniascript
  bool GetAttributeBoolean(wstring Name, bool DefaultValue); // Maniascript
  CXmlScriptParsingNodeXml* GetFirstChild(string Name); // Maniascript
};

struct CXmlScriptParsingDocumentJson : public CMwNod {
  const string TextContents; // Maniascript
  CXmlScriptParsingNodeJson* const Root; // Maniascript
  const MwBuffer<CXmlScriptParsingNodeJson*> Nodes; // Maniascript
  CXmlScriptParsingNodeJson* GetFirstChild(string Name); // Maniascript
};

struct CXmlScriptParsingNodeJson : public CMwNod {
  enum class ENodeType {
    Object = 0,
    Array = 1,
    Value = 2,
  };
  const MwBuffer<wstring> Keys; // Maniascript
  const MwBuffer<CXmlScriptParsingNodeJson*> Children; // Maniascript
  const wstring AsText; // Maniascript
  const int AsInteger; // Maniascript
  const float AsReal; // Maniascript
  const bool AsBool; // Maniascript
  const ENodeType NodeType; // Maniascript
  CXmlScriptParsingNodeJson* GetFirstChild(string Name); // Maniascript
};

} // namespace Xml

namespace TrackMania {

// File extension: 'ManiaPlanet.Gbx'
struct CTrackMania : public CGameManiaPlanet {
  CTrackMania();

  void ScanDiskForChallenges();
  void ScanDiskForReplays();
  const MwBuffer<CTrackManiaMatchSettings*> MatchSettings;
};

// File extension: 'TitleCore.Gbx'
struct CTrackManiaCore : public CGameManiaTitleCore {
  CTrackManiaCore();

  CGameManiaPlanet* const Dummy;
  CTrackManiaResource* Resource;
};

struct CTrackManiaRace : public CGameRace {
  CTrackManiaRace();

  uint LapCount;
  const uint NbRespawns;
  const float Fps;
  float VehicleFadeDistMinBoxCoef;
  float VehicleFadeDistMaxBoxCoef;
  void ResetForParam();
  MwBuffer<CGameCtnGhost*> RaceGhosts;
  bool IsBestRaceGhostVisible;
  bool ForceDisplayNames;
  CGameCtnReplayRecord* ValidateAReplay;
  float ScaleCarValue; // Range: 0.1 - 10
  float ScaleSpeedSec;
  CFuncKeysReal* ScaleFunc;
  uint ScaleDuration;
  CFuncKeysReal* BonusMiniCarWeight;
  CFuncKeysReal* BonusEmptyCarsWeight;
  CFuncKeysReal* BonusJumpWeight;
  CFuncKeysReal* BonusTurboWeight;
  CFuncKeysReal* BonusBigCarWeight;
  CFuncKeysReal* BonusSpeedyCarWeight;
  uint BonusIsGoldChance;
  uint BonusTurboStock;
  float BonusCarScale;
  float BonusCarScaleAccel;
  uint BonusMiniCarDuration;
  uint BonusBigCarDuration;
  uint BonusEmptyCarsStock;
  float EmptyCarInitVelCoef;
  float EmptyCarMassCoef;
  uint EmptyCarMaxLimit;
  uint SpeedyCarInitVel;
  float FireCarScaleCoef;
  uint BonusEventTimeStartMin;
  uint BonusEventTimeStartMax;
  uint BonusEventTimeCooldownMin;
  uint BonusEventTimeCooldownMax;
  uint BonusEventTimeWarningDuration;
  uint BonusEventIsGoldChance;
  float StuntModePointCoef;
  uint StuntStickHelperTime;
  uint StuntJumpHelperTime;
  uint StuntContactHelperTime;
  float StuntBodyOffsetMax;
  float StuntBodyOffsetPow;
  float CameraHeight; // Range: 0 - 10
  float CameraOffset; // Range: 0 - 30
  float FovY;
  float SpeedCoef; // Range: 0 - 2
  uint AutoAdaptSpeedStrat;
  float OutOfScreenTimeLimitSec; // Range: 0 - 5
  bool DrawPath;
  uint SampleTimeStepMs;
  uint SampleCount;
  float MinGhostSpeed;
  float MaxGhostSpeed;
  float ReswpawnSpeedBonusCoef;
  float ComeBackDistanceCoef;
  float MinRespawnSpeed;
  int AllowedRespawnCount;
  bool AllowSelfRespawn;
  uint SpeedHistoryIntervalDurationMs;
  uint HelperPathTimeStep;
  uint LateRespawnTimeDurationMs;
  float LateRespawnPenaltyCoef;
  bool ClampRespawnSpeed;
};

struct CTrackManiaRaceNew : public CTrackManiaRace {
  CTrackManiaRaceNew();

};

// Description: "Rules API for TrackMania gamemodes."
struct CTrackManiaRaceRules : public CGamePlaygroundScript {
  enum class ETmScoreSortOrder {
    TotalPoints = 0,
    BestRace_Time = 1,
    BestRace_Stunts = 2,
    BestRace_NbRespawns = 3,
    BestRace_CheckpointsProgress = 4,
    PrevRace_Time = 5,
    Name = 6,
    LadderRankSortValue = 7,
  };
  enum class ETMRespawnBehaviour {
    Normal = 0,
    DoNothing = 1,
    GiveUpBeforeFirstCheckPoint = 2,
    AlwaysGiveUp = 3,
  };
  enum class ETmRaceChronoBehaviour {
    Auto = 0,
    Hidden = 1,
    CountDown = 2,
    Normal = 3,
  };
  enum class EPersonalGhost {
    Disabled = 0,
    Latest = 1,
    FastestRace = 2,
  };
  const MwBuffer<CTmRaceRulesPlayer*> AllPlayers; // Maniascript
  const MwBuffer<CTmRaceRulesPlayer*> Spectators; // Maniascript
  const MwBuffer<CTmRaceRulesPlayer*> Players; // Maniascript
  const MwBuffer<CTmRaceRulesPlayer*> PlayersRacing; // Maniascript
  const MwBuffer<CTmRaceRulesPlayer*> PlayersWaiting; // Maniascript
  CTmRaceRulesPlayer* GetPlayerFromUI(CGamePlaygroundUIConfig* UI); // Maniascript
  CTmRaceRulesPlayer* GetPlayerFromLogin(string Login); // Maniascript
  const MwBuffer<CTmRaceRulesScore*> Scores; // Maniascript
  uint Clan1Score; // Maniascript
  uint Clan2Score; // Maniascript
  MwArray<int> ClanScores; // Maniascript
  const uint ClansNbTotal; // Maniascript
  const MwBuffer<uint> ClansNbPlayers; // Maniascript
  const MwBuffer<CTmRaceRulesEvent*> PendingEvents; // Maniascript
  bool PassOn(CTmRaceRulesEvent* Event); // Maniascript
  void Discard(CTmRaceRulesEvent* Event); // Maniascript
  void SpawnPlayer(CTmRaceRulesPlayer* Player, int ClanNum, int RaceStartTime); // Maniascript
  void UnspawnPlayer(CTmRaceRulesPlayer* Player); // Maniascript
  void SetPlayerClan(CTmRaceRulesPlayer* Player, int ClanNum); // Maniascript
  void Scores_Sort(ETmScoreSortOrder SortOrder); // Maniascript
  void Scores_Clear(); // Maniascript
  void Ladder_ComputeRank(ETmScoreSortOrder SortOrder); // Maniascript
  int CutOffTimeLimit; // Maniascript
  int NbLaps; // Maniascript
  bool IndependantLaps; // Maniascript
  bool UseClans; // Maniascript
  bool UseForcedClans; // Maniascript
  ETMRespawnBehaviour RespawnBehaviour; // Maniascript
  bool UiRounds; // Maniascript
  bool UiLaps; // Maniascript
  bool UiStuntsMode; // Maniascript
  bool UiDisplayStuntsNames; // Maniascript
  bool UiDisableHelpMessage; // Maniascript
  int UiScoresPointsLimit; // Maniascript
  ETmRaceChronoBehaviour UiRaceChrono; // Maniascript
  void Cheats_Reset(); // Maniascript
  bool EnableCollisions; // Maniascript
  bool EnableScaleCar; // Maniascript
  bool EnableCheckpointBonus; // Maniascript
  bool EnableUniqueCamera; // Maniascript
  bool EnableBonusEvents; // Maniascript
  bool HideOpponents; // Maniascript
  uint ForceMaxOpponents; // Maniascript
  bool EnableLegacyXmlRpcCallbacks; // Maniascript
  bool MedalGhost_ShowGold; // Maniascript
  bool MedalGhost_ShowSilver; // Maniascript
  bool MedalGhost_ShowBronze; // Maniascript
  EPersonalGhost PersonalGhost; // Maniascript
  bool ValidationGhost_Use; // Maniascript
  bool ValidationGhost_Visible; // Maniascript
  const MwId ValidationGhost_Id; // Maniascript
  bool StuntModel_EnableCustomisation; // Maniascript
  bool StuntModel_MP3Combo; // Maniascript
  bool StuntModel_MP3Points; // Maniascript
  bool StuntModel_UseStricterAngle; // Maniascript
  uint StuntModel_MinStuntDuration; // Maniascript
  uint StuntModel_RespawnPenalty; // Maniascript
  uint StuntModel_InterComboDelay; // Maniascript
  uint StuntModel_InterComboDelayExtendPerPoint; // Maniascript
  float StuntModel_FigureRepeatMalus; // Maniascript
  MwId RaceGhost_Add(CGameGhostScript* Ghost, bool DisplayAsPlayerBest); // Maniascript
  MwId RaceGhost_AddWithOffset(CGameGhostScript* Ghost, uint OffsetMs); // Maniascript
  MwId RaceGhost_AddModel(CGameGhostScript* Ghost, bool DisplayAsPlayerBest, MwId ModelId); // Maniascript
  void RaceGhost_Remove(MwId GhostInstId); // Maniascript
  void RaceGhost_RemoveAll(); // Maniascript
  uint RaceGhost_GetStartTime(MwId GhostInstId); // Maniascript
  uint RaceGhost_GetCurCheckpoint(MwId GhostInstId); // Maniascript
  uint RaceGhost_GetCheckpointTime(MwId GhostInstId, uint Checkpoint); // Maniascript
  vec3 RaceGhost_GetPosition(MwId GhostInstId); // Maniascript
  bool RaceGhost_IsVisible(MwId GhostInstId); // Maniascript
  bool RaceGhost_IsReplayOver(MwId GhostInstId); // Maniascript
  const vec3 MapStartLinePos; // Maniascript
  const MwBuffer<vec3> MapCheckpointPos; // Maniascript
  const MwBuffer<vec3> MapFinishLinePos; // Maniascript
  const bool MapIsLapRace; // Maniascript
  const uint MapNbLaps; // Maniascript
  const MwBuffer<CTmRaceRulesPlayer*> ConnectedPlayers; // Maniascript
  void FakePlayers_Add(wstring NickName); // Maniascript
  void FakePlayers_Remove(CGamePlayerInfo* User); // Maniascript
  void FakePlayers_RemoveAll(); // Maniascript
};

struct CTrackManiaRace1P : public CTrackManiaRace {
  CTrackManiaRace1P();

};

struct CTmRaceRulesScore : public CGamePlaygroundScore {
  const uint TeamNum; // Maniascript
  int Points; // Maniascript
  CTmRaceResultNod* BestRace; // Maniascript
  CTmRaceResultNod* BestLap; // Maniascript
  int PrevRaceDeltaPoints; // Maniascript
  CTmRaceResultNod* PrevRace; // Maniascript
  CTmRaceResultNod* TempResult; // Maniascript
  void Clear(); // Maniascript
};

// File extension: 'TrackManiaMenus.Gbx'
struct CTrackManiaMenus : public CGameCtnMenusManiaPlanet {
  CTrackManiaMenus();

  CGameCtnChallenge* const SelectedChallenge;
  uint LastPage;
  const UnnamedEnum Medal;
  const uint CampaignChallengeNumber;
  wstring TestComment;
  wstring Mptp_Score;
  wstring GhostFileName;
  wstring GhostFileNameExt;
  uint LastScore;
  uint LastRecord;
  UnnamedEnum NetworkGameMode;
  const wstring NetworkGameModeName;
  uint MedalsCount;
  bool TestDifficulty0;
  bool TestDifficulty1;
  bool TestDifficulty2;
  bool TestDifficulty3;
  bool TestDifficulty4;
  bool TestQuality0;
  bool TestQuality1;
  bool TestQuality2;
  bool TestQuality3;
  bool TestQuality4;
  void OnChooseAvatar1();
  void OnChooseAvatar2();
  void OnChooseAvatar3();
  void OnChooseAvatar4();
  void OnChooseAvatar5();
  void OnChooseAvatar6();
  void OnChooseAvatar7();
  void OnChooseAvatar8();
  void OnChooseProfile1();
  void OnChooseProfile2();
  void OnChooseProfile3();
  void OnChooseProfile4();
  void OnChooseProfile5();
  void OnChooseProfile6();
  void OnChooseProfile7();
  void OnChooseProfile8();
  void MenuChoosePlaylistHotseat();
  void MenuChoosePlaylistNetwork();
  void MenuChoosePlaylist_Init();
  void MenuChoosePlaylist_Clean();
  void MenuChoosePlaylist_OnPlaylistSelected();
  void MenuChoosePlaylist_OnBack();
  void MenuChoosePlaylist_OnCustom();
  void MenuChoosePlaylist_OnRefresh();
  const uint MenuChoosePlaylist_PlaylistsCount;
  void MenuChoosePlaylist_OnOfficialTracks();
  void MenuChoosePlaylist_OnMyTracks();
  void MenuChoosePlaylist_OnDownloadedTracks();
  void MenuPlayChallenge_Solo();
  void MenuPlayChallenge_Solo_Challenges();
  void MenuPlayChallenge_Solo_MyTracks();
  void MenuPlayChallenge_Solo_DownloadedTracks();
  void MenuChooseChallenge_OnSaveSettings();
  void MenuChooseChallenge_OnSaveSettings_OnYes();
  void MenuChooseChallenge_OnSaveSettings_DoSave();
  void MenuCampaignChallenges();
  void MenuCampaignChallenges_OnBack();
  void MenuCampaignChallenges_OnChallengeCardSelected();
  const wstring MenuCampaignChallenges_Location;
  const uint MenuCampaignChallenges_Level;
  CPlugBitmap* MenuCampaignChallenges_ZoneLogoBitmap;
  void MenuCampaignChallenges_OnChallengeGridPrevPage();
  void MenuCampaignChallenges_OnChallengeGridNextPage();
  void MenuCampaignChallenges_OnChallengeCardRemoved();
  void MenuCampaignChallenges_OnChallengeCardRemovedConfirmed();
  void MenuCampaignChallenges_OnFriendUnlockYes();
  void MenuCampaignChallenges_OnFriendUnlockNo();
  void MenuCampaignChallenges_OnToggleLadder();
  void MenuReplayEditor();
  void MenuGhostEditor();
  bool MenuMultiPlayerNetworkCreate_AcceptReferee;
  void MenuMultiPlayerNetworkCreate_ChooseScriptName();
  void MenuMultiPlayerNetworkCreate_OpenDialogScriptName_Yes();
  void MenuMultiPlayer_OnLan();
  void MenuMultiPlayer_OnInternet();
  void MenuStatistics();
  void MenuStatistics_OnBack();
  void MenuMultiLocal_OnBrowseChallenge();
  void MenuMultiLocal_OnBrowseReplay();
  void DialogQuitRace();
  void DialogQuitRace_OnResume();
  void DialogQuitRace_OnRestart();
  void DialogQuitRace_OnRestartMap();
  void DialogQuitRace_OnNextMap();
  void DialogQuitRace_OnInputSettings();
  void DialogQuitRace_OnStereoscopySettings();
  void DialogQuitRace_OnSelectOpponents();
  void DialogQuitRace_OnEdit();
  void DialogQuitRace_OnQuit();
  void DialogQuickChooseGhostOpponents();
  void DialogLowFpsWarn_OnOk();
  void DialogLowFpsWarn_OnCancel();
  bool DialogLowFpsWarn_NeverAskAgain;
  void DialogQuitEditor();
  void DialogQuitEditor_OnDelete();
  void DialogQuitEditor_OnQuit();
  void DialogChallengeResult_OnRetry();
  void DialogChallengeResult_OnQuit();
  void DialogChallengeResult_OnSaveReplay();
  void DialogChallengeResult_OnEdit();
  void DialogChallengeResult_OnSendScore();
  void DialogChallengeResult_OnRewind();
  void DialogChallengeResult_OnChooseOpponents();
  void DialogChallengeResult_OnNextMap();
  bool DialogChallengeResult_IsPaused;
  bool DialogChallengeResult_IsPlaying;
  void DialogNewUnlock_OnOk();
  void DialogUseGhost();
  void DialogUseGhost_OnYes();
  void DialogUseGhost_OnNo();
  void DialogCreateGhost();
  void DialogCreateGhost_OnUse();
  void DialogCreateGhost_OnRetry();
  void DialogCreateGhost_OnQuit();
  void DialogCreateGhost_OnReallyQuit();
  void DialogCreateGhost_OnSaveReplay();
  void DialogChooseNbGhosts();
  void DialogChooseNbGhosts_On4();
  void DialogChooseNbGhosts_On7();
  void DialogHotSeatResult_OnRevenge();
  void DialogHotSeatResult_OnNext();
  void DialogHotSeatResult_OnQuit();
  void DialogHotSeatInGameMenu_OnResume();
  void DialogHotSeatInGameMenu_OnGiveUp();
  void DialogHotSeatInGameMenu_OnQuit();
  void ShowMenus();
  void ShowDialogs();
  const uint CatalogChapterTotalCoppers;
  const MwBuffer<CGameCtnChallengeInfo*> DialogChallengeInfos;
  void DialogNextGhostOpponent_OnOk();
  void DialogNextGhostOpponent_OnCancel();
  void DialogNextGhostOpponent_OnKeepTraining();
  void DialogNextGhostOpponent_OnSelectAnotherMap();
  void DialogSendScore_OnCopyToClipboard();
  void DialogSendScore_OnExportGhost();
  void DialogSendScore_OnOk();
};

struct CTrackManiaNetwork : public CGameManiaPlanetNetwork {
  CTrackManiaRaceRules* const TmRaceRules;
  CTrackManiaPlayerInfo* PlayerInfo;
  bool CurrentRaceIsValid;
  bool ForceEndRound;
  uint WaitTimeBeforeTwoValidations;
  uint SpectatorTimeshift; // Range: 0 - 60000
};

struct CTrackManiaNetForm : public CGameNetForm {
  CTrackManiaNetForm();

};

struct CTrackManiaPlayer : public CGamePlayer {
  enum class ERaceState {
    BeforeStart = 0,
    Running = 1,
    Finished = 2,
    Eliminated = 3,
  };
  CTrackManiaScriptPlayer* const ScriptAPI;
  CTrackManiaScore* const Score;
  const ERaceState RaceState;
  const bool IsSpawned;
  const int CurTriggerIndex;
  const uint CurrentNbLaps;
  const uint CurCheckpointRaceTime;
  const uint CurCheckpointLapTime;
  const uint CurRaceContinuousRank;
  const uint ControllerCount;
  const int ControllerId0;
  const int ControllerId1;
  const int ControllerId2;
  const int ControllerId3;
  const vec3 Position;
  const float Distance;
  const float Speed;
  const uint DisplaySpeed;
  uint BonusEventStartTime;
  uint BonusEventDuration;
  uint BonusEventWarningDuration;
  const uint NbRespawns;
  bool AutoPilotEnabled;
  const iso4 SpawnLoc;
  const uint CurLapIndex;
  int InOffZoneStartTime;
};

struct CTrackManiaGameTerminal : public CGameTerminal {
  enum class SpectatorCameraType {
    _SpectatorCam_Replay = 0,
    _SpectatorCam_Follow = 1,
    _SpectatorCam_Free = 2,
  };
  enum class SpectatorCameraTarget {
    _SpectatorCam_Manual = 0,
    _SpectatorCam_Auto = 1,
  };
  float ScriptedInputs_Steer;
  bool ScriptedInputs_Accelerate;
  bool ScriptedInputs_Brake;
  bool ScriptedInputs_RequestRespawn;
  bool ScriptedInputs_RequestGiveUp;
  bool ScriptedInputs_RequestHorn;
};

struct CTrackManiaNetworkServerInfo : public CGameCtnNetServerInfo {
  enum class EGameMode {
    _GameMode_Script = 0,
    _GameMode_Rounds = 1,
    _GameMode_Time_Attack = 2,
    _GameMode_Team = 3,
    _GameMode_Laps = 4,
    _GameMode_Cup = 5,
    _GameMode_Stunts = 6,
  };
  enum class EGameMode_Script {
    Script = 0,
    Rounds = 1,
    TimeAttack = 2,
    Team = 3,
    Laps = 4,
    Cup = 5,
    Stunts = 6,
  };
  const EGameMode CurGameMode;
  const EGameMode_Script CurGameMode_Script;
  const wstring CurGameModeStr;
  const uint CurRoundPointsLimit;
  const uint CurRoundForcedLaps;
  const bool CurRoundUseNewRules;
  const uint CurRoundPointsLimitNewRules;
  const uint CurTeamPointsLimit;
  const uint CurTeamMaxPoints;
  const bool CurTeamUseNewRules;
  const uint CurTeamPointsLimitNewRules;
  const uint CurTimeAttackLimit;
  const uint CurTimeAttackSynchStartPeriod;
  const uint CurLapsNbLaps;
  const uint CurLapsTimeLimit;
  const uint CurEswcCupPointsLimit;
  const uint CurEswcCupRoundsPerChallenge;
  const uint CurEswcCupNbWinners;
  const uint CurEswcCupWarmUpDuration;
  const uint CurChatTime;
  const uint CurFinishTimeout;
  const uint CurAllWarmUpDuration;
  const bool CurDisableRespawn;
  const uint CurForceMaxOpponents;
  const wstring CurScriptRelName;
  EGameMode NextGameMode;
  EGameMode_Script NextGameMode_Script;
  uint NextRoundPointsLimit;
  uint NextRoundForcedLaps;
  bool NextRoundUseNewRules;
  uint NextRoundPointsLimitNewRules;
  uint NextTeamPointsLimit;
  uint NextTeamMaxPoints;
  bool NextTeamUseNewRules;
  uint NextTeamPointsLimitNewRules;
  uint NextTimeAttackLimit;
  uint NextTimeAttackSynchStartPeriod;
  uint NextLapsNbLaps;
  uint NextLapsTimeLimit;
  uint NextEswcCupPointsLimit;
  uint NextEswcCupRoundsPerChallenge;
  uint NextEswcCupNbWinners;
  uint NextEswcCupWarmUpDuration;
  uint NextChatTime;
  uint NextFinishTimeout;
  uint NextAllWarmUpDuration;
  bool NextDisableRespawn;
  uint NextForceMaxOpponents;
  wstring NextScriptRelName;
};

struct CTrackManiaPlayerInfo : public CGamePlayerInfo {
  CTrackManiaScore* const RaceScore;
};

struct CTrackManiaRaceNetRounds : public CTrackManiaRaceNet {
  CTrackManiaRaceNetRounds();

  const uint NbValidRounds;
  const uint CupWarmUpDuration;
  const uint CupRoundsPerChallenge;
};

// Description: "Player for CTmMode."
struct CTmRaceRulesPlayer : public CGameScriptPlayer {
  enum class ETmRacePlayerCoopMode {
    None = 0,
    Symbiosys = 1,
    Checkpoint = 2,
  };
  enum class ETmJumpMode {
    Disabled = 0,
    Simple = 1,
    Double = 2,
    Infinite = 3,
  };
  const int CurrentClan; // Maniascript
  CTmRaceRulesScore* const Score; // Maniascript
  int RaceStartTime; // Maniascript
  bool IsSpawned; // Maniascript
  CTmRaceResultNod* CurRace; // Maniascript
  CTmRaceResultNod* CurLap; // Maniascript
  int CurrentNbLaps; // Maniascript
  const int CurTriggerIndex; // Maniascript
  const vec3 Position; // Maniascript
  const float AimYaw; // Maniascript
  const float AimPitch; // Maniascript
  const vec3 AimDirection; // Maniascript
  const vec3 Velocity; // Maniascript
  const float Speed; // Maniascript
  MwId ForceModelId; // Maniascript
  const uint IdleDuration; // Maniascript
  float AccelCoef; // Maniascript
  float ControlCoef; // Maniascript
  float GravityCoef; // Maniascript
  ETmRacePlayerCoopMode CoopMode; // Maniascript
  uint ControllerCount; // Maniascript
  int ControllerId0; // Maniascript
  int ControllerId1; // Maniascript
  int ControllerId2; // Maniascript
  int ControllerId3; // Maniascript
  uint CoopModeControllerCount; // Maniascript
  int CoopModeControllerId0; // Maniascript
  int CoopModeControllerId1; // Maniascript
  int CoopModeControllerId2; // Maniascript
  int CoopModeControllerId3; // Maniascript
  bool ForcedAerialCamera; // Maniascript
  bool ButtonSmashFrenzy; // Maniascript
  bool EnableTurboButton; // Maniascript
  bool MaxiAirControl; // Maniascript
  bool EnableEmptyCars; // Maniascript
  ETmJumpMode JumpMode; // Maniascript
  bool TinyCar; // Maniascript
  bool EnableCatchUpSpeed; // Maniascript
  bool EnableStuntMode; // Maniascript
  bool EnableOnlineMode; // Maniascript
};

struct CTrackManiaMatchSettings : public CGameFid {
  wstring Comment;
  bool IsSolo;
  bool IsHotSeat;
  bool IsLan;
  bool IsInternet;
  uint SortIndex;
  bool RandomMapOrder;
  const uint NbChallenges;
  const UnnamedEnum Network_GameMode;
  UnnamedEnum HotSeat_GameMode;
  const uint HotSeat_TimeLimit;
  const uint HotSeat_Rounds;
  const MwBuffer<CGameCtnChallenge*> ChallengeInfos;
};

struct CTrackManiaRaceMultiLocal : public CTrackManiaRace1P {
  CTrackManiaRaceMultiLocal();

  const MwBuffer<CTrackManiaPlayerInfo*> MultiLocalPlayerInfos;
  const float PlayerTimeLeft1; // Range: 0 - 1
  const float PlayerTimeLeft2; // Range: 0 - 1
  const float PlayerTimeLeft3; // Range: 0 - 1
  const float PlayerTimeLeft4; // Range: 0 - 1
  const float PlayerTimeLeft5; // Range: 0 - 1
  const float PlayerTimeLeft6; // Range: 0 - 1
  const float PlayerTimeLeft7; // Range: 0 - 1
  const float PlayerTimeLeft8; // Range: 0 - 1
  const wstring PlayerName1;
  const wstring PlayerName2;
  const wstring PlayerName3;
  const wstring PlayerName4;
  const wstring PlayerName5;
  const wstring PlayerName6;
  const wstring PlayerName7;
  const wstring PlayerName8;
  const string PlayerBestScore1;
  const string PlayerBestScore2;
  const string PlayerBestScore3;
  const string PlayerBestScore4;
  const string PlayerBestScore5;
  const string PlayerBestScore6;
  const string PlayerBestScore7;
  const string PlayerBestScore8;
  const uint PlayerGeneralPosition;
};

struct CTrackManiaRaceNet : public CTrackManiaRace {
  MwBuffer<CTrackManiaScore*> GeneralScores;
  MwBuffer<CTrackManiaScore*> CurrentScores;
  MwBuffer<CTrackManiaScore*> TeamScores;
  CGamePlaygroundSpectating* const Spectating;
};

struct CTrackManiaRaceNetTimeAttack : public CTrackManiaRaceNet {
  CTrackManiaRaceNetTimeAttack();

  const uint Bidon;
};

struct CTmRaceRulesEvent : public CMwNod {
  enum class EType {
    Unknown = 0,
    StartLine = 1,
    WayPoint = 2,
    GiveUp = 3,
    Respawn = 4,
    Stunt = 5,
    OnPlayerAdded = 6,
    OnPlayerRemoved = 7,
    OnCommand = 8,
  };
  enum class EStuntFigure {
    None = 0,
    StraightJump = 1,
    Flip = 2,
    BackFlip = 3,
    Spin = 4,
    Aerial = 5,
    AlleyOop = 6,
    Roll = 7,
    Corkscrew = 8,
    SpinOff = 9,
    Rodeo = 10,
    FlipFlap = 11,
    Twister = 12,
    FreeStyle = 13,
    SpinningMix = 14,
    FlippingChaos = 15,
    RollingMadness = 16,
    WreckNone = 17,
    WreckStraightJump = 18,
    WreckFlip = 19,
    WreckBackFlip = 20,
    WreckSpin = 21,
    WreckAerial = 22,
    WreckAlleyOop = 23,
    WreckRoll = 24,
    WreckCorkscrew = 25,
    WreckSpinOff = 26,
    WreckRodeo = 27,
    WreckFlipFlap = 28,
    WreckTwister = 29,
    WreckFreeStyle = 30,
    WreckSpinningMix = 31,
    WreckFlippingChaos = 32,
    WreckRollingMadness = 33,
    TimePenalty = 34,
    RespawnPenalty = 35,
    Grind = 36,
    Reset = 37,
  };
  const EType Type; // Maniascript
  CTmRaceRulesPlayer* const Player; // Maniascript
  uint RaceTime; // Maniascript
  const uint CheckpointInRace; // Maniascript
  const uint CheckpointInLap; // Maniascript
  const bool IsEndLap; // Maniascript
  const bool IsEndRace; // Maniascript
  uint LapTime; // Maniascript
  int StuntsScore; // Maniascript
  uint NbRespawns; // Maniascript
  const MwId BlockId; // Maniascript
  float Speed; // Maniascript
  float Distance; // Maniascript
  float Damages; // Maniascript
  const EStuntFigure StuntFigure; // Maniascript
  const uint Angle; // Maniascript
  const uint Points; // Maniascript
  const float Factor; // Maniascript
  const uint Combo; // Maniascript
  const bool IsStraight; // Maniascript
  const bool IsReverse; // Maniascript
  const bool IsPerfectLanding; // Maniascript
  const bool IsMasterJump; // Maniascript
  const bool IsMasterLanding; // Maniascript
  const bool IsEpicLanding; // Maniascript
  CGamePlayerInfo* const User; // Maniascript
  const bool PlayerWasSpawned; // Maniascript
  const bool PlayerWasInLadderMatch; // Maniascript
  const string CommandName; // Maniascript
  const bool CommandValueBoolean; // Maniascript
  const int CommandValueInteger; // Maniascript
  const float CommandValueReal; // Maniascript
  const wstring CommandValueText; // Maniascript
};

// Description: "This is the client ManiaApp for Trackmania game modes."
struct CTrackManiaAppPlayground : public CGameManiaAppPlayground {
  void SetVehicleInputs(uint SplitScreenNum, float Steer, bool Accelerate, bool Brake, bool Respawn, bool GiveUp, bool Horn); // Maniascript
};

struct CTrackManiaRaceNetLaps : public CTrackManiaRaceNet {
  CTrackManiaRaceNetLaps();

  void ComputeScores();
};

// Description: "Trackmania race API for Manialink scripts"
struct CTmRaceInterfaceManialinkScripHandler : public CGameScriptHandlerPlaygroundInterface {
  CTrackManiaScriptPlayer* const InputPlayer; // Maniascript
  CTrackManiaScriptPlayer* const GUIPlayer; // Maniascript
  const MwBuffer<CTmRaceClientEvent*> RaceEvents; // Maniascript
  const uint NbLaps; // Maniascript
  const bool IndependantLaps; // Maniascript
  const MwBuffer<CTrackManiaScriptPlayer*> Players; // Maniascript
  const MwBuffer<CTmRaceRulesScore*> Scores; // Maniascript
  const MwBuffer<int> ClanScores; // Maniascript
  uint CurPlayerCamera; // Maniascript
  uint SpectatorTimeshift; // Maniascript
  const vec3 MapStartLinePos; // Maniascript
  const MwBuffer<vec3> MapCheckpointPos; // Maniascript
  const MwBuffer<vec3> MapFinishLinePos; // Maniascript
  const bool MapIsLapRace; // Maniascript
  const uint MapNbLaps; // Maniascript
  bool ValidationGhost_IsVisible(); // Maniascript
  vec3 ValidationGhost_GetPosition(); // Maniascript
};

// File extension: '.Frame.Gbx'
struct CTrackManiaControlCheckPointList : public CControlFrame {
  CTrackManiaControlCheckPointList();

  CControlStyle* StyleName;
  CControlStyle* StyleRank;
  CControlStyle* StyleTime;
  CControlFrame* CardModel;
};

struct CTrackManiaRace1PGhosts : public CTrackManiaRace1P {
  CTrackManiaRace1PGhosts();

  MwArray<CGameCtnGhost*> MedalGhosts;
  const MwBuffer<CGameCtnGhostInfo*> ChallengeGhostInfos;
};

struct CTrackManiaReplayRecord_deprecated : public CGameCtnReplayRecord {
  CTrackManiaReplayRecord_deprecated();

};

struct CCtnMediaBlockEventTrackMania_deprecated : public CGameCtnMediaBlockEvent_deprecated {
  CCtnMediaBlockEventTrackMania_deprecated();

};

// File extension: 'Frame.Gbx'
struct CTrackManiaControlPlayerInfoCard : public CTrackManiaControlCard {
  CTrackManiaControlPlayerInfoCard();

  bool ShowBasedTimeInfosInRounds;
  CPlugBitmap* Avatar;
  const wstring StrPlayerName;
  const wstring StrCountryName;
  const string StrLadderTeamName;
  const uint StrLadderRankingSimple;
  const float StrLadderScore;
  const string StrLadderRaceScore;
  const string StrCurrentRaceRank;
  const uint SpectatorMode;
  const uint NbSpectators;
  const string StrTotalRoundScore;
  const string StrLastRaceRoundScore;
  const string StrBestTimeOrScore;
  const string StrPlayerRaceBestTimeOrScoreDelay;
  const string StrPlayerBestRaceTime;
  const string StrPlayerBestRaceScore;
  const string StrRaceBestTime;
  const string StrPrevRaceTimeOrScore;
  const string StrOffsetFromBestAtCurrentCP_MmSsCc;
  const string StrRaceBestScore;
  const string StrScoreOffsetFromBestAtCurrentCP;
  CTrackManiaRace* Race;
  bool IsStuntsMode;
  bool IsRoundsMode;
};

// File extension: 'Frame.Gbx'
struct CTrackManiaControlCard : public CGameControlCard {
  CTrackManiaControlCard();

};

struct CCtnMediaBlockUiTMSimpleEvtsDisplay_deprecated : public CGameCtnMediaBlockUiSimpleEvtsDisplay_deprecated {
  CCtnMediaBlockUiTMSimpleEvtsDisplay_deprecated();

};

struct CTrackManiaScore : public CTmRaceRulesScore {
  uint Score;
  int LastRaceDeltaPoints;
  uint LastRaceTime;
  uint BestTime;
  uint BestStuntsScore;
  uint LapsNbCheckpoint;
  uint RaceInputsDuration;
  uint RaceSimDataSimulationSeed;
  uint BestRaceInputsTimeStartInReplay;
  uint BestRaceInputsForceModelItemIndex;
  const string StrRaceBestTime;
  const string StrPrevRaceTime;
  const string StrPrevRaceDeltaPoints;
  const string StrBestStuntsScore;
};

// File extension: 'Frame.Gbx'
struct CTrackManiaControlMatchSettingsCard : public CTrackManiaControlCard {
  CTrackManiaControlMatchSettingsCard();

  const wstring StrName;
  const wstring StrComment;
  const uint ChallengesCount;
  const uint Medals;
  const wstring StrTracks;
  CPlugBitmap* BmpBannerGrey;
  CPlugBitmap* BmpBanner;
};

struct CTrackManiaRaceInterface : public CGamePlaygroundInterface {
  CTrackManiaRaceInterface();

  CTrackManiaRace* const Race;
  float DownloadProgressMapsTotal;
  float DownloadProgressMapsCur;
  float DownloadProgressAvatarsTotal;
  float DownloadProgressAvatarsCur;
  float DownloadProgressChallengeTotal;
  float DownloadProgressChallengeCur;
  float DownloadProgressPlayersTotal;
  float DownloadProgressPlayersCur;
  float DownloadProgressActivity;
  const uint WarmUpRoundCur;
  const uint WarmUpRoundCount;
  const uint TimeCountDown;
  const uint PlayerGeneralPosition;
  const uint NbPlayers;
  CTrackManiaPlayerInfo* const UiPlayerInfo0;
  CTrackManiaPlayer* const UiPlayer0;
  const uint CurLapNum0;
  const uint RaceChrono0;
  const uint CarSpeedDisplay0;
  const uint CarDistanceDisplay0;
  const string CheckPointInfo_TimeText0;
  const string CheckPointInfo_OffsetTimeText0;
  const wstring CheckPointInfo_CurrentRacePositionText0;
  CTrackManiaPlayerInfo* const UiPlayerInfo1;
  CTrackManiaPlayer* const UiPlayer1;
  const uint CurLapNum1;
  const uint RaceChrono1;
  const uint CarSpeedDisplay1;
  const uint CarDistanceDisplay1;
  const string CheckPointInfo_TimeText1;
  const string CheckPointInfo_OffsetTimeText1;
  const wstring CheckPointInfo_CurrentRacePositionText1;
  CTrackManiaPlayerInfo* const UiPlayerInfo2;
  CTrackManiaPlayer* const UiPlayer2;
  const uint CurLapNum2;
  const uint RaceChrono2;
  const uint CarSpeedDisplay2;
  const uint CarDistanceDisplay2;
  const string CheckPointInfo_TimeText2;
  const string CheckPointInfo_OffsetTimeText2;
  const wstring CheckPointInfo_CurrentRacePositionText2;
  CTrackManiaPlayerInfo* const UiPlayerInfo3;
  CTrackManiaPlayer* const UiPlayer3;
  const uint CurLapNum3;
  const uint RaceChrono3;
  const uint CarSpeedDisplay3;
  const uint CarDistanceDisplay3;
  const string CheckPointInfo_TimeText3;
  const string CheckPointInfo_OffsetTimeText3;
  const wstring CheckPointInfo_CurrentRacePositionText3;
};

struct CTrackManiaRaceAnalyzer : public CGameAnalyzer {
  CMwStatsValue* const InputValue1;
  CMwStatsValue* const InputValue2;
  const uint InputDeltaT1;
  const uint InputDeltaT2;
  const uint InputDeltaT3;
};

struct CTmEditorPluginMapType : public CGameEditorPluginMapMapType {
  CTrackManiaRaceRules* const Mode; // Maniascript
  void TMObjective_SetFromBestRace(CTmRaceRulesScore* Score); // Maniascript
  const MwBuffer<CTmRaceRulesPlayer*> AllPlayers; // Maniascript
  const MwBuffer<CTmRaceRulesPlayer*> Players; // Maniascript
};

struct CTmRaceClientEvent : public CMwNod {
  enum class EType {
    Unknown = 0,
    WayPoint = 1,
    Respawn = 2,
    Turbo = 3,
    Horn = 4,
    Impact = 5,
    WaterSplash = 6,
    GlassSmash = 7,
    PartDetached = 8,
    StopEngine = 9,
    StartEngine = 10,
    AirSpawnRelease = 11,
  };
  const EType Type; // Maniascript
  CTrackManiaScriptPlayer* const Player; // Maniascript
  const uint CheckpointInRace; // Maniascript
  const uint CheckpointInLap; // Maniascript
  const bool IsEndRace; // Maniascript
  const bool IsEndLap; // Maniascript
  const uint RaceTime; // Maniascript
  const uint LapTime; // Maniascript
  const int StuntsScore; // Maniascript
  const uint NbRespawns; // Maniascript
};

struct CGamePlayerProfileChunk_TrackManiaSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_TrackManiaSettings();

  uint RespawnCount;
  uint RestartCount;
  bool IsShowPlayerGhost;
  bool NadeoGhostsUnlockMessage;
  MwBuffer<bool> IsDisplayRaceHelp;
};

// File extension: 'TrackManiaResource.Gbx'
struct CTrackManiaResource : public CMwNod {
  CTrackManiaResource();

  CPlugBitmap* Badge_OcclusionMap;
  CPlugBitmap* Badge_OverLayer_DiffuseOpacity;
  CPlugBitmap* Badge_OverLayer_Gloss;
  CPlugBitmap* Badge_StickersMask;
  CPlugSolid2Model* Badge_Mesh;
  CPlugBitmap* Badge_Mesh_MaterialToReplaceBitmap;
  CPlugBitmap* Badge_Mesh_MaterialToReplaceImage;
  CSceneLayout* Badge_AvatarRenderScene;
  CSceneLayout* Badge_BadgeRenderScene;
  CGameBadgeStickerSlots* Badge_StickerSlots;
  CFuncKeysReal* BadgeEditor_FuncBloomIntensAtHdrNorm;
  CFuncKeysReal* BadgeEditor_FuncAvgLumiToKeyValue;
  CControlFrame* CardPlayerScore_Small;
  CControlFrame* CardPlayerScore_Small_Rev;
  CControlFrame* CardPlayerScore_Medium;
  CControlFrame* CardPlayerScore_Medium_Rev;
  CControlFrame* CardPlayerScore_Big;
  CControlFrame* CardPlayerScore_Big_Rev;
};

struct CTmModuleManager : public CGamePlaygroundModuleManagerClient {
};

struct CTmModuleScoresTable : public CGamePlaygroundModuleClientScoresTable {
};

// Description: "Player for CTmMlScriptIngame."
struct CTrackManiaScriptPlayer : public CGameScriptPlayer {
  enum class ERaceState {
    BeforeStart = 0,
    Running = 1,
    Finished = 2,
    Eliminated = 3,
  };
  enum class ETmRacePlayerCoopMode {
    None = 0,
    Symbiosys = 1,
    Checkpoint = 2,
  };
  enum class ETmJumpMode {
    Disabled = 0,
    Simple = 1,
    Double = 2,
    Infinite = 3,
  };
  enum class ETmBonusModeEventType {
    None = 0,
    Bumps = 1,
    LowGravity = 2,
    FreeWheeling = 3,
    LockedDirections = 4,
  };
  enum class ESceneVehiclePhyStuntFigure {
    None = 0,
    StraightJump = 1,
    Flip = 2,
    BackFlip = 3,
    Spin = 4,
    Aerial = 5,
    AlleyOop = 6,
    Roll = 7,
    Corkscrew = 8,
    SpinOff = 9,
    Rodeo = 10,
    FlipFlap = 11,
    Twister = 12,
    FreeStyle = 13,
    SpinningMix = 14,
    FlippingChaos = 15,
    RollingMadness = 16,
    WreckNone = 17,
    WreckStraightJump = 18,
    WreckFlip = 19,
    WreckBackFlip = 20,
    WreckSpin = 21,
    WreckAerial = 22,
    WreckAlleyOop = 23,
    WreckRoll = 24,
    WreckCorkscrew = 25,
    WreckSpinOff = 26,
    WreckRodeo = 27,
    WreckFlipFlap = 28,
    WreckTwister = 29,
    WreckFreeStyle = 30,
    WreckSpinningMix = 31,
    WreckFlippingChaos = 32,
    WreckRollingMadness = 33,
    TimePenalty = 34,
    RespawnPenalty = 35,
    Grind = 36,
    Reset = 37,
  };
  const int CurrentClan; // Maniascript
  const ERaceState RaceState; // Maniascript
  const bool IsSpawned; // Maniascript
  CTrackManiaScore* const Score; // Maniascript
  const uint RaceStartTime; // Maniascript
  const uint LapStartTime; // Maniascript
  CTmRaceResultNod* CurRace; // Maniascript
  CTmRaceResultNod* CurLap; // Maniascript
  const uint CurrentNbLaps; // Maniascript
  const int CurTriggerIndex; // Maniascript
  const uint CurCheckpointRaceTime; // Maniascript
  const uint CurCheckpointLapTime; // Maniascript
  const int CoopSymbiosysPercentTotal; // Maniascript
  const uint CoopCheckpointCurController; // Maniascript
  const ETmRacePlayerCoopMode CoopMode; // Maniascript
  const uint ControllerCount; // Maniascript
  const int ControllerId0; // Maniascript
  const int ControllerId1; // Maniascript
  const int ControllerId2; // Maniascript
  const int ControllerId3; // Maniascript
  const uint CoopModeControllerCount; // Maniascript
  const int CoopModeControllerId0; // Maniascript
  const int CoopModeControllerId1; // Maniascript
  const int CoopModeControllerId2; // Maniascript
  const int CoopModeControllerId3; // Maniascript
  const bool ForcedAerialCamera; // Maniascript
  const bool ButtonSmashFrenzy; // Maniascript
  const bool EnableTurboButton; // Maniascript
  const bool MaxiAirControl; // Maniascript
  const bool EnableEmptyCars; // Maniascript
  const ETmJumpMode JumpMode; // Maniascript
  const bool TinyCar; // Maniascript
  const bool EnableCatchUpSpeed; // Maniascript
  const bool EnableStuntMode; // Maniascript
  const bool EnableOnlineMode; // Maniascript
  const float AccelCoef; // Maniascript
  const float ControlCoef; // Maniascript
  const float GravityCoef; // Maniascript
  const vec3 Position; // Maniascript
  const vec3 AimDirection; // Maniascript
  const float AimYaw; // Maniascript
  const float AimPitch; // Maniascript
  const float Upwardness; // Maniascript
  const uint CurRaceContinuousRank; // Maniascript
  const float Distance; // Maniascript
  const float Speed; // Maniascript
  const uint DisplaySpeed; // Maniascript
  const float InputSteer; // Maniascript
  const float InputGasPedal; // Maniascript
  const bool InputIsBraking; // Maniascript
  const float EngineRpm; // Maniascript
  const int EngineCurGear; // Maniascript
  const float EngineTurboRatio; // Maniascript
  const uint WheelsContactCount; // Maniascript
  const uint WheelsSkiddingCount; // Maniascript
  const float DamageHullRatio; // Maniascript
  const float DamageWindowRatio; // Maniascript
  const uint InWaterDuration; // Maniascript
  const uint FreeWheelingDuration; // Maniascript
  const uint FlyingDuration; // Maniascript
  const uint SparklingDuration; // Maniascript
  const uint LightTrailsDuration; // Maniascript
  const uint SkiddingDuration; // Maniascript
  const float SkiddingDistance; // Maniascript
  const float FlyingDistance; // Maniascript
  const uint HandicapNoGasDuration; // Maniascript
  const uint HandicapFullGasDuration; // Maniascript
  const uint HandicapNoBrakesDuration; // Maniascript
  const uint HandicapNoSteeringDuration; // Maniascript
  const uint HandicapNoGripDuration; // Maniascript
  const uint StuntLastTime; // Maniascript
  const ESceneVehiclePhyStuntFigure StuntLast; // Maniascript
  const uint StuntAngle; // Maniascript
  const uint StuntPoints; // Maniascript
  const uint StuntCombo; // Maniascript
  const float StuntFactor; // Maniascript
  const bool StuntStraightLanding; // Maniascript
  const bool StuntReverseLanding; // Maniascript
  const bool StuntPerfectLanding; // Maniascript
  const bool StuntMasterJump; // Maniascript
  const bool StuntMasterLanding; // Maniascript
  const bool StuntEpicLanding; // Maniascript
  const bool StuntIsInFigure; // Maniascript
  const bool StuntCurFigureMasterJump; // Maniascript
  const float StuntCurFigureMasterGauge; // Range: 0 - 1 // Maniascript
  const float StuntCurFigureEpicGauge; // Range: 0 - 1 // Maniascript
  const bool StuntCurComboChainCounter; // Maniascript
  const uint TimeLeftForStuntCombo; // Maniascript
  const uint TimeElapsedSinceLastStunt; // Maniascript
  const bool BonusModeIsJump; // Maniascript
  const bool BonusModeIsTurbo; // Maniascript
  const bool BonusModeIsMiniCar; // Maniascript
  const bool BonusModeIsBigCar; // Maniascript
  const bool BonusModeIsEmptyCars; // Maniascript
  const bool BonusModeIsSpeedyCars; // Maniascript
  const bool BonusModeIsGold; // Maniascript
  const uint BonusModeEmptyCarsStock; // Maniascript
  const uint BonusModeTurboStock; // Maniascript
  const uint BonusModeJumpStock; // Maniascript
  const uint BonusBumpCooldown; // Maniascript
  const bool BonusIsPossible; // Maniascript
  const uint BonusModeTimeTillEvent; // Maniascript
  const uint BonusModeTimeTillEndEvent; // Maniascript
  const uint BonusModeTimeTillEventWarning; // Maniascript
  const ETmBonusModeEventType BonusModeEventType; // Maniascript
  const bool BonusModeEventIsGold; // Maniascript
  const uint StuntTurboGauge; // Maniascript
  const uint StuntTurboGaugeMax; // Maniascript
  const float StuntJumpCharge; // Maniascript
  const bool StuntStickNeedHelp; // Maniascript
  const bool StuntJumpNeedHelp; // Maniascript
  void StuntStateReset(); // Maniascript
  const float StuntMasterCharge; // Maniascript
  const float StuntEpicCharge; // Maniascript
  const uint UniqueCameraRespawnCount; // Maniascript
  const uint UniqueCameraAvailableRespawnLeft; // Maniascript
  const uint TimeTillSmashRespawn; // Maniascript
  const uint TimeTillSmashGiveUp; // Maniascript
  const bool SmashNeedHelp; // Maniascript
  const int TimeBeforeDeadlyZone; // Maniascript
  const bool IsDeadlyZoneActive; // Maniascript
};

} // namespace TrackMania

namespace ShootMania {

// File extension: 'TitleCore.Gbx'
struct CShootMania : public CGameManiaTitleCore {
  CShootMania();

  CScene2d* ArenaInterfaceUIFid;
  CSmArenaResource* ArenaResourcesFid;
  CGamePlaygroundResources* const ArenaWorld;
  CSmServer* const Server;
  CSmClient* const Client;
};

// Description: "Ingame Manialink API for ShootMania."
struct CSmArenaInterfaceManialinkScripHandler : public CGameScriptHandlerPlaygroundInterface {
  const int ArenaNow; // Maniascript
  CSmScriptPlayer* const InputPlayer; // Maniascript
  CSmScriptPlayer* const GUIPlayer; // Maniascript
  const MwBuffer<CSmScriptPlayer*> Players; // Maniascript
  const MwBuffer<CGameScriptVehicle*> Vehicles; // Maniascript
  const MwBuffer<CSmArenaScore*> Scores; // Maniascript
  const MwBuffer<int> ClanScores; // Maniascript
  const MwBuffer<CSmScriptBase*> Bases; // Maniascript
  const MwBuffer<CSmScriptBlock*> Blocks; // Maniascript
  const MwBuffer<CSmScriptBlockSpawn*> BlockSpawns; // Maniascript
  const MwBuffer<CSmScriptBlockPole*> BlockPoles; // Maniascript
  const MwBuffer<CSmScriptBotPath*> BotPaths; // Maniascript
  const MwBuffer<CSmScriptObjectAnchor*> ObjectAnchors; // Maniascript
  bool HideResumePlayingButton; // Maniascript
  const MwBuffer<CSmScriptMapBase*> MapBases; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_PlayerSpawn; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_Gauge; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_Sector; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_BotPath; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_BotSpawn; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_ObjectAnchor; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_Gate; // Maniascript
};

struct CSmArenaClient : public CGamePlaygroundCommon {
  CGameCtnChallenge* const Map;
  CSmArena* const Arena;
  CSmArenaInterface* const ArenaInterface;
  float PredictionSmoothConvergenceSpeed;
  CFuncKeysReal* PredictionSmoothFromExtrapolationDuration;
  uint PredictionSimDurationMax;
  float LocalSmoothMin;
  uint LocalSmoothMinInputLag;
  float LocalSmoothMax;
  uint LocalSmoothMaxInputLag;
  float LocalSmoothConvergenceSpeed;
  float LocalSmoothCoefConvergenceSpeed;
  uint LocalSmoothCoefConvergenceDelay;
  const float LocalSmooth;
  const float LocalSmoothCoef;
  float PredictionSmooth;
  uint DbgDelaySendInputs;
  uint GameEditionAmmoGain;
};

// Description: "Scoring info for ShootMania players."
struct CSmArenaScore : public CGamePlaygroundScore {
  const uint TeamNum; // Maniascript
  uint Points; // Maniascript
  uint RoundPoints; // Maniascript
  const uint NbEliminationsInflicted; // Maniascript
  const uint NbEliminationsTaken; // Maniascript
  const uint NbRespawnsRequested; // Maniascript
  const uint DamageInflicted; // Maniascript
  const uint DamageTaken; // Maniascript
  void Reset(); // Maniascript
  void Clear(); // Maniascript
  uint NbEliminationsInflicted_Ed;
  uint NbEliminationsTaken_Ed;
  uint NbRespawnsRequested_Ed;
  uint DamageInflicted_Ed;
  uint DamageTaken_Ed;
};

// Description: "An action"
struct CSmActionInstance : public CGameAction {
  CGameActionModel* const Model;
  const uint Now; // Maniascript
  const uint Variant; // Maniascript
  const MwRefBuffer<CSmScriptPlayer*> Players; // Maniascript
  CSmScriptPlayer* const Owner; // Maniascript
  CGameScriptVehicle* const OwnerVehicle; // Maniascript
  const bool IsActive; // Maniascript
  const bool IsBound; // Maniascript
  uint Energy; // Maniascript
  uint EnergyMax; // Maniascript
  uint EnergyCost; // Maniascript
  bool EnergyReload; // Maniascript
  float AmmoGain; // Maniascript
  MwId State_EntityId1; // Maniascript
  int State_Integer1; // Maniascript
  int State_Integer2; // Maniascript
  bool State_Boolean1; // Maniascript
  const MwBuffer<CSmActionInstanceEvent*> PendingEvents; // Maniascript
  bool IsJumping; // Maniascript
  bool IsGliding; // Maniascript
  bool IsAttractor; // Maniascript
  bool IsFlying; // Maniascript
  bool IsSliding; // Maniascript
  bool IsRunning; // Maniascript
  bool IsFrozen; // Maniascript
  bool IsSneaking; // Maniascript
  bool IsFreeLooking; // Maniascript
  bool HasNoPlayerCollision; // Maniascript
  void SendRulesEvent(wstring Param1, MwBuffer<wstring>& Param2, CGameScriptEntity* Shooter, CGameScriptEntity* Victim); // Maniascript
  void SendRulesEvent2(wstring Param1, MwBuffer<wstring>& Param2, CSmScriptPlayer* Shooter, CSmScriptPlayer* Victim, CSmObject* Object); // Maniascript
  void SendRulesEvent3(wstring Param1, MwBuffer<wstring>& Param2, CSmScriptPlayer* Shooter, CSmScriptPlayer* Victim, CSmObject* Object, CGameScriptTurret* Turret); // Maniascript
  void SendRulesEvent_Vehicle(wstring Param1, MwBuffer<wstring>& Param2, CSmScriptPlayer* Shooter, CGameScriptVehicle* Victim); // Maniascript
  MwId Anim_GetModelId(wstring ModelName); // Maniascript
  MwId Anim_PlayAtLocation(MwId AnimModelId, vec3 Position, vec3 Direction); // Maniascript
  MwId Anim_PlayOnPlayer(MwId AnimModelId, CSmScriptPlayer* Player); // Maniascript
  void Anim_Stop(MwId AnimId); // Maniascript
  MwId Projectile_GetModelId(wstring ModelName); // Maniascript
  MwId Projectile_CreateAtLocation(MwId ProjectileModelId, CSmScriptPlayer* PlayerToIgnore, vec3 InitialPosition, vec3 InitialDirection, vec3 InitialVelocity); // Maniascript
  MwId Projectile_CreateOnPlayer(MwId ProjectileModelId, CSmScriptPlayer* Shooter); // Maniascript
  uint Cooldown; // Maniascript
  bool Cooldown_IsReady(); // Maniascript
  void Cooldown_Start(); // Maniascript
  MwId Shield_CreateAtLocation(vec3 Position, vec3 Direction); // Maniascript
  MwId Shield_CreateOnPlayer(CSmScriptPlayer* ShieldOwner); // Maniascript
  void Shield_Destroy(MwId ShieldId); // Maniascript
  bool Shield_Exists(MwId ShieldId); // Maniascript
  uint Shield_GetArmor(MwId ShieldId); // Maniascript
  void Shield_SetArmor(MwId ShieldId, uint ShieldArmor); // Maniascript
  bool Shield_GetIsActive(MwId ShieldId); // Maniascript
  void Shield_SetIsActive(MwId ShieldId, bool ShieldIsActive); // Maniascript
  uint Shield_GetArmorMax(MwId ShieldId); // Maniascript
  uint Shield_GetTickReload(MwId ShieldId); // Maniascript
  uint Shield_GetCooldown(MwId ShieldId); // Maniascript
  int GetPlayerAmmo(CSmScriptPlayer* Player); // Maniascript
  int GetPlayerAmmoMax(CSmScriptPlayer* Player); // Maniascript
  void Vehicle_TriggerTurbo(); // Maniascript
  void Vehicle_TriggerTurboBrake(); // Maniascript
};

struct CSmNetForm : public CGameNetForm {
  CSmNetForm();

};

struct CSmPlayer : public CGamePlayer {
  enum class ESpawnStatus {
    NotSpawned = 0,
    Spawning = 1,
    Spawned = 2,
  };
  enum class EPost {
    None = 0,
    Char = 1,
    CarDriver = 2,
    Reserved1 = 3,
    Reserved2 = 4,
    Reserved3 = 5,
    Reserved4 = 6,
    Reserved5 = 7,
    Reserved6 = 8,
  };
  CSmScriptPlayer* const ScriptAPI;
  uint EdClan;
  bool Speaking;
  float LinearHue; // Range: 0 - 1
  const vec3 LinearHueSrgb;
  const int SpawnIndex;
  uint FocusableEntitySceneUId;
  CSmArenaScore* const Score;
  const int StartTime;
  int EndTime;
  uint SpawnableObjectModelIndex;
};

struct CSmArenaInterfaceUI : public CGamePlaygroundInterface {
  CSmArenaInterfaceUI();

};

struct CSmPlayerDriver : public CMwNod {
  enum class ESmDriverBehaviour {
    Static = 0,
    Turret = 1,
    Scripted = 2,
    IA = 3,
    Patrol = 4,
    Escape = 5,
    Saunter = 6,
  };
  enum class ESmDriverPatrolMode {
    OneTrip = 0,
    BackAndForth = 1,
    Loop = 2,
  };
  enum class ESmAttackFilter {
    All = 0,
    AllPlayers = 1,
    AllBots = 2,
    AllOpposite = 3,
    OppositePlayers = 4,
    OppositeBots = 5,
    Nobody = 6,
  };
  ESmDriverBehaviour Behaviour; // Maniascript
  float AggroRadius; // Maniascript
  float ShootRadius; // Maniascript
  float TargetMinDistance; // Maniascript
  float DisengageDistance; // Maniascript
  float PathSpeedCoef; // Maniascript
  float Accuracy; // Maniascript
  int ReactionTime; // Maniascript
  int ShootPeriodMin; // Maniascript
  int ShootPeriodMax; // Maniascript
  bool RocketAnticipation; // Maniascript
  float Fov; // Maniascript
  ESmAttackFilter AttackFilter; // Maniascript
  CSmScriptPlayer* const Target; // Maniascript
  const bool IsStuck; // Maniascript
  bool IsFlying; // Maniascript
  CSmScriptPlayer* const Owner; // Maniascript
  int PathOffset; // Maniascript
  float Agressivity; // Maniascript
  bool UseOldShootingSystem; // Maniascript
  ESmDriverPatrolMode Patrol_Mode; // Maniascript
  void Patrol_Restart();
  vec3 Escape_AnchorPoint; // Maniascript
  float Escape_DistanceSafe; // Maniascript
  float Escape_DistanceMinEscape; // Maniascript
  float Escape_DistanceMaxEscape; // Maniascript
  vec3 Saunter_AnchorPoint; // Maniascript
  int Saunter_BaseChillingTime; // Maniascript
  int Saunter_ChillingTimeDelta; // Maniascript
  float Saunter_Radius; // Maniascript
  bool Scripted_ForceAimInMoveDir; // Maniascript
  CSmScriptPlayer* ForcedTarget; // Maniascript
  MwBuffer<CSmScriptPlayer*> TargetsToAvoid; // Maniascript
};

// Description: "An action event"
struct CSmActionInstanceEvent : public CScriptBaseConstEvent {
  enum class EType {
    OnHitPlayer = 0,
    OnProjectileEnd = 1,
    OnProjectileDestroyed = 2,
    OnActiveChange = 3,
    OnHitObject = 4,
    OnHitShield = 5,
    OnHitVehicle = 6,
    OnShieldEnd = 7,
    OnHitTurret = 8,
  };
  const EType Type; // Maniascript
  const MwId ProjectileModelId; // Maniascript
  const int Damage; // Maniascript
  const uint ContextId; // Maniascript
  const vec3 Position; // Maniascript
  const vec3 Direction; // Maniascript
  const vec3 Normal; // Maniascript
  CGameScriptEntity* const Victim; // Maniascript
  CSmScriptPlayer* const Player; // Maniascript
  CGameScriptVehicle* const Vehicle; // Maniascript
  CSmObject* const Object; // Maniascript
  CGameScriptTurret* const Turret; // Maniascript
  const uint Shield; // Maniascript
};

struct CSmArenaRules : public CMwNod {
  enum class EGameplay {
    Default = 0,
    Mp3Beta0 = 1,
  };
  const MwBuffer<CSmArenaScore*> Scores;
  CSmArenaRulesMode* RulesMode;
  uint RulesStateStartTime;
  uint RulesStateEndTime;
  uint RulesStateTeam1Score;
  uint RulesStateTeam2Score;
  bool FeatureArmorBar;
  bool FeatureUseTeamClans;
  bool FeatureForcedClans;
  bool FeatureUseMultiClans;
  bool FeatureStamina;
  bool FeatureWallJump;
  bool FeatureSameWallJump;
  bool FeatureRocketJump;
  bool FeatureDisableHorns;
  bool FeatureFallDamage;
  bool FeatureGuns;
  bool FeaturePvPCollisions;
  bool FeaturePvPWeapons;
  bool FeatureProtectClanmates;
  bool FeatureLaserVsBullets;
  bool FeatureLaserSkewering;
  bool FeaturePlayerTagging;
  bool FeatureBeaconsWithRecipients;
  bool FeatureInteractiveScreensIn3d;
  bool FeatureGunSpecial;
  bool FeatureAmmoBonusOnHit;
  bool FeatureAllies;
  EGameplay Gameplay;
  bool FeatureCharCanFly;
};

struct CSmScriptObjectAnchor : public CSmScriptLandmark {
  const wstring ItemName; // Maniascript
  const MwId ItemModelId; // Maniascript
};

struct CSmScriptBotPath : public CSmScriptLandmark {
  const uint Clan; // Maniascript
  const MwBuffer<vec3> Path; // Maniascript
  const bool IsFlying; // Maniascript
};

struct CSmChallengeParameters : public CGameCtnChallengeParameters {
  CSmChallengeParameters();

  void SetDefaults();
};

struct CSmScriptBotSpawn : public CSmScriptLandmark {
  const wstring ItemName; // Maniascript
  const MwId ItemModelId; // Maniascript
};

// Description: "An instance of an object."
struct CSmObject : public CGameScriptEntity {
  enum class EStatus {
    OnPlayer = 0,
    OnAnchor = 1,
    InWorld = 2,
    Unspawned = 3,
  };
  const EStatus Status; // Maniascript
  const MwId ModelId; // Maniascript
  void SetAnchor(CGameScriptMapObjectAnchor* ObjectAnchor); // Maniascript
  void SetAnchor_Deprecated(CSmScriptObjectAnchor* ObjectAnchor); // Maniascript
  void SetPlayer(CSmScriptPlayer* Player); // Maniascript
  void SetPosition(vec3 Position); // Maniascript
  void SetPositionAndVel(vec3 Position, vec3 Vel); // Maniascript
  void SetUnspawned(); // Maniascript
  CSmScriptPlayer* const Player; // Maniascript
  CSmScriptMapLandmark* const AnchorLandmark; // Maniascript
  const vec3 Position; // Maniascript
  const vec3 Vel; // Maniascript
  uint MachineState; // Maniascript
  bool Throwable; // Maniascript
  const MwId ThrowLatestPlayerId; // Maniascript
};

struct CSmAnalyzer : public CGameAnalyzer {
  const float LocalEntitySmoothCoef;
};

struct CSmArenaPhysics : public CMwNod {
  CScenePhy* const ScenePhy;
};

struct CSmArenaInterface : public CMwNod {
  CSmArenaInterfaceUI* const InterfaceUI;
};

struct CSmClient : public CMwNod {
  CSmClient();

  CSmArenaClient* const ArenaClient;
  CSmArenaRules* const Rules;
};

struct CSmArenaServer : public CMwNod {
  CSmArena* const Arena;
  uint ClientInputsMaxLatency;
  uint DbgMinInputDelay;
  uint DbgDelaySendSnapshots;
};

struct CSmArena : public CMwNod {
  CSmArenaPhysics* const ArenaPhysics;
  CSmArenaRules* const Rules;
  const MwBuffer<CSmPlayer*> Players;
  const MwBuffer<CSmObject*> Objects;
  const MwBuffer<CSmScriptBase*> Bases;
  const MwBuffer<CSmScriptLandmark*> Landmark;
  const MwBuffer<CSmScriptBlockSpawn*> BlockSpawns;
  const MwBuffer<CSmScriptBlockPole*> BlockPoles;
  const MwBuffer<CSmScriptSector*> Sectors;
  const MwBuffer<CSmScriptGauge*> Gauges;
  const MwBuffer<CSmScriptBotPath*> BotPaths;
  const MwBuffer<CSmScriptObjectAnchor*> ObjectAnchors;
  const MwBuffer<CSmScriptMapBase*> MapBases;
  const MwBuffer<CSmScriptMapGate*> MapGates;
  const MwBuffer<CSmScriptMapGauge*> MapGauges;
  const MwBuffer<CGameScriptMapLandmark*> MapLandmarks;
  const MwBuffer<CGameScriptMapSector*> MapSectors;
  const MwBuffer<CGameScriptMapSpawn*> MapPlayerSpawns;
  const MwBuffer<CGameScriptMapBotPath*> MapBotPaths;
  const MwBuffer<CGameScriptMapBotSpawn*> MapBotSpawns;
  const MwBuffer<CGameScriptMapObjectAnchor*> MapObjectAnchors;
  const MwBuffer<CGameScriptMapWaypoint*> MapWaypoints;
  void FakePlayers_AllStatic();
  void FakePlayers_AllPatrol();
  void FakePlayers_AllBackAndForth();
  void FakePlayers_AllOneTrip();
};

// Description: "Rules API for ShootMania gamemodes."
struct CSmArenaRulesMode : public CGamePlaygroundScript {
  enum class EWeapon {
    Laser = 0,
    Rocket = 1,
    Nucleus = 2,
    Arrow = 3,
    Missile = 4,
  };
  enum class EActionSlot {
    Slot_A = 0,
    Slot_B = 1,
    Slot_C = 2,
    Slot_D = 3,
    Slot_E = 4,
    Slot_F = 5,
    Slot_G = 6,
    Slot_H = 7,
  };
  enum class EActionInput {
    Weapon = 0,
    Movement = 1,
    Activable1 = 2,
    Activable2 = 3,
    Activable3 = 4,
    Activable4 = 5,
    Consumable1 = 6,
    Consumable2 = 7,
    None = 8,
  };
  enum class EGameplay {
    Default = 0,
    Mp3Beta0 = 1,
  };
  uint StartTime; // Maniascript
  uint EndTime; // Maniascript
  uint SpawnInvulnerabilityDuration; // Maniascript
  bool UseMultiClans; // Maniascript
  bool UseClans; // Maniascript
  bool UseForcedClans; // Maniascript
  bool UsePvPCollisions; // Maniascript
  bool UsePvPWeapons; // Maniascript
  bool UseInterractiveScreensIn3d; // Maniascript
  bool UseLaserVsBullets; // Maniascript
  bool UseLaserSkewering; // Maniascript
  bool UsePlayerTagging; // Maniascript
  bool UseBeaconsWithRecipients; // Maniascript
  bool UseAmmoBonusOnHit; // Maniascript
  bool UseSameWallJump; // Maniascript
  bool UseDefaultActionEvents; // Maniascript
  bool UseAllies; // Maniascript
  bool UseAutoSpawnBots; // Maniascript
  bool UseAutoRespawnBots; // Maniascript
  bool WalkOnWall; // Maniascript
  bool UseAutoDiscardBotEvents; // Maniascript
  bool DbgEnableNavMesh; // Maniascript
  bool ForceNavMapsComputation; // Maniascript
  uint GameplayVersion; // Maniascript
  EGameplay Gameplay; // Maniascript
  bool UseProtectClanmates; // Maniascript
  float OffZoneRadius; // Maniascript
  float OffZoneRadiusSpeed; // Maniascript
  MwId OffZoneCenterBlockId; // Maniascript
  MwId OffZoneCenterLandmarkId; // Maniascript
  const uint PlayersNbTotal; // Maniascript
  const uint PlayersNbAlive; // Maniascript
  const uint PlayersNbDead; // Maniascript
  const uint ClansNbTotal; // Maniascript
  const uint ClansNbAlive; // Maniascript
  const uint ClansNbDead; // Maniascript
  const MwBuffer<uint> ClansNbPlayers; // Maniascript
  const MwBuffer<uint> ClansNbPlayersAlive; // Maniascript
  const MwBuffer<CSmScriptPlayer*> Players; // Maniascript
  const MwBuffer<CSmScriptPlayer*> BotPlayers; // Maniascript
  const MwBuffer<CSmScriptPlayer*> Spectators; // Maniascript
  const MwBuffer<CSmScriptPlayer*> AllPlayers; // Maniascript
  const MwBuffer<CSmArenaRulesEvent*> PendingEvents; // Maniascript
  CSmScriptPlayer* GetPlayerFromUI(CGamePlaygroundUIConfig* UI); // Maniascript
  CSmScriptPlayer* GetPlayerFromLogin(string Login); // Maniascript
  const MwBuffer<CSmScriptBase*> Bases; // Maniascript
  const MwBuffer<CSmScriptBlock*> Blocks; // Maniascript
  const MwBuffer<CSmScriptBlockSpawn*> BlockSpawns; // Maniascript
  const MwBuffer<CSmScriptBlockPole*> BlockPoles; // Maniascript
  const MwBuffer<CSmScriptBotPath*> BotPaths; // Maniascript
  const MwBuffer<CSmScriptObjectAnchor*> ObjectAnchors; // Maniascript
  void SpawnPlayer_Deprecated(CSmScriptPlayer* Player, int ClanNum, int Armor, CSmScriptBlockSpawn* PlayerSpawn, int ActivationDate); // Maniascript
  void SpawnBotPlayer_Deprecated(CSmScriptPlayer* Player, int ClanNum, int Armor, CSmScriptLandmark* Landmark, int ActivationDate); // Maniascript
  CSmScriptPlayer* CreateBotPlayer_Deprecated(MwId ModelId, int ClanNum, int Armor, CSmScriptLandmark* Landmark, int ActivationDate); // Maniascript
  const MwBuffer<CSmScriptMapBase*> MapBases; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_PlayerSpawn; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_Gauge; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_Sector; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_BotPath; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_BotSpawn; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_ObjectAnchor; // Maniascript
  const MwBuffer<CSmScriptMapLandmark*> MapLandmarks_Gate; // Maniascript
  const MwBuffer<CSmArenaScore*> Scores; // Maniascript
  uint Clan1Score; // Maniascript
  uint Clan2Score; // Maniascript
  MwArray<int> ClanScores; // Maniascript
  void PassOn(CSmArenaRulesEvent* Event); // Maniascript
  void Discard(CSmArenaRulesEvent* Event); // Maniascript
  void SpawnPlayer(CSmScriptPlayer* Player, int ClanNum, int Armor, CGameScriptMapSpawn* PlayerSpawn, int ActivationDate); // Maniascript
  void SpawnPlayer_InTurret(CSmScriptPlayer* Player, int ClanNum, CGameScriptTurret* Turret, int ActivationDate); // Maniascript
  void SpawnPlayer_InVehicle(CSmScriptPlayer* Player, int ClanNum, CGameScriptVehicle* Vehicle, int ActivationDate); // Maniascript
  void SpawnPlayer_InVehicle2(CSmScriptPlayer* Player, int ClanNum, CGameScriptVehicle* Vehicle, int SlotIndex, int ActivationDate); // Maniascript
  void SpawnBotPlayer_AtPlayerSpawn(CSmScriptPlayer* Player, int ClanNum, int Armor, CGameScriptMapSpawn* PlayerSpawn, int ActivationDate); // Maniascript
  void SpawnBotPlayer_AtBotPath(CSmScriptPlayer* Player, int ClanNum, int Armor, CGameScriptMapBotPath* BotPath, int ActivationDate); // Maniascript
  void SpawnBotPlayer_AtBotSpawn(CSmScriptPlayer* Player, int ClanNum, int Armor, CGameScriptMapBotSpawn* BotSpawn, int ActivationDate); // Maniascript
  void SpawnBotPlayer_FromOwner(CSmScriptPlayer* Player, CSmScriptPlayer* Owner, int Armor, vec3 Offset, int ActivationDate); // Maniascript
  void UnspawnPlayer(CSmScriptPlayer* Player); // Maniascript
  void ClearScores(); // Maniascript
  void SetPlayerClan(CSmScriptPlayer* Player, int ClanNum); // Maniascript
  void SetPlayerWeapon(CSmScriptPlayer* Player, EWeapon DefaultWeapon, bool AutoSwitchWeapon); // Maniascript
  void SetPlayerReloadAllWeapons(CSmScriptPlayer* Player, bool ReloadAllWeapons); // Maniascript
  void SetPlayerAmmo(CSmScriptPlayer* Player, EWeapon Weapon, int Count); // Maniascript
  int GetPlayerAmmo(CSmScriptPlayer* Player, EWeapon Weapon); // Maniascript
  void AddPlayerAmmo(CSmScriptPlayer* Player, EWeapon Weapon, float DeltaCount); // Maniascript
  void SetPlayerAmmoMax(CSmScriptPlayer* Player, EWeapon Weapon, int Count); // Maniascript
  int GetPlayerAmmoMax(CSmScriptPlayer* Player, EWeapon Weapon); // Maniascript
  void AddArmor(CGameScriptEntity* Victim, int DeltaArmor, CGameScriptEntity* Shooter, int ShooterPoints); // Maniascript
  void RemoveArmor(CGameScriptEntity* Victim, int DeltaArmor, CGameScriptEntity* Shooter, int ShooterPoints); // Maniascript
  void AddPlayerArmor(CSmScriptPlayer* Victim, int DeltaArmor, CSmScriptPlayer* Shooter, int ShooterPoints); // Maniascript
  void RemovePlayerArmor(CSmScriptPlayer* Victim, int DeltaArmor, CSmScriptPlayer* Shooter, int ShooterPoints); // Maniascript
  int GetWeaponIndex(EWeapon Weapon); // Maniascript
  int GetWeaponNum(EWeapon Weapon); // Maniascript
  bool CanRespawnPlayer(CSmScriptPlayer* Player); // Maniascript
  void RespawnPlayer(CSmScriptPlayer* Player); // Maniascript
  void RespawnPlayerAtWaypoint(CSmScriptPlayer* Player, CGameScriptMapWaypoint* Waypoint); // Maniascript
  void RespawnPlayerAtLandmark(CSmScriptPlayer* Player, CSmScriptMapLandmark* CheckpointLandmark); // Maniascript
  CSmScriptPlayer* CreateBotPlayer(MwId ModelId, int ClanNum); // Maniascript
  void DestroyBotPlayer(CSmScriptPlayer* BotPlayer); // Maniascript
  void DestroyAllBotPlayers(); // Maniascript
  void ScriptedBot_Move(CSmScriptPlayer* BotPlayer, vec3 Goal); // Maniascript
  void ScriptedBot_MoveDelta(CSmScriptPlayer* BotPlayer, vec3 Delta); // Maniascript
  void ScriptedBot_MoveAndAim(CSmScriptPlayer* BotPlayer, vec3 Goal); // Maniascript
  void ScriptedBot_MoveDeltaAndAim(CSmScriptPlayer* BotPlayer, vec3 Delta); // Maniascript
  void ScriptedBot_Aim(CSmScriptPlayer* BotPlayer, vec3 Goal); // Maniascript
  void ScriptedBot_AimDelta(CSmScriptPlayer* BotPlayer, float DeltaYaw, float DeltaPitch); // Maniascript
  void ScriptedBot_RequestAction(CSmScriptPlayer* BotPlayer); // Maniascript
  void ScriptedBot_RequestGunTrigger(CSmScriptPlayer* BotPlayer); // Maniascript
  void ActionLoad(CSmScriptPlayer* Player, EActionSlot ActionSlot, MwId ModelId); // Maniascript
  void ActionLoad_Vehicle(CGameScriptVehicle* Vehicle, int VehicleSlotIndex, EActionSlot ActionSlot, MwId ModelId); // Maniascript
  void ActionLoad_Turret(CGameScriptTurret* Turret, EActionSlot ActionSlot, MwId ModelId); // Maniascript
  uint Action_GetCooldown(CSmScriptPlayer* Player, EActionInput ActionInput); // Maniascript
  uint Action_GetRemainingCooldown(CSmScriptPlayer* Player, EActionInput ActionInput); // Maniascript
  void ActionBind(CSmScriptPlayer* Player, EActionSlot ActionSlot, EActionInput ActionInput); // Maniascript
  void ActionSetVariant(CSmScriptPlayer* Player, EActionSlot ActionSlot, uint ActionVariant); // Maniascript
  void LoadAction(CSmScriptPlayer* Player, EActionSlot ActionSlot, MwId ModelId, uint ActionVariant); // Maniascript
  void BindAction(CSmScriptPlayer* Player, EActionSlot ActionSlot, EActionInput ActionInput); // Maniascript
  void SetNbFakePlayers(int NbClan1, int NbClan2); // Maniascript
  const MwBuffer<CSmObject*> Objects; // Maniascript
  CSmObject* ObjectCreate(MwId ModelId); // Maniascript
  void ObjectDestroy(CSmObject* Object); // Maniascript
  void ObjectDestroyAll(); // Maniascript
  void RemoveShieldArmor(uint VictimShieldId, uint Damage); // Maniascript
  void AddVehicleArmor(CGameScriptVehicle* Victim, int DeltaArmor, CSmScriptPlayer* Shooter, int ShooterPoints); // Maniascript
  void RemoveVehicleArmor(CGameScriptVehicle* Victim, int DeltaArmor, CSmScriptPlayer* Shooter, int ShooterPoints); // Maniascript
  void Replay_SaveAttackScore(CSmScriptPlayer* Player, int Score); // Maniascript
  void Replay_SaveDefenseScore(CSmScriptPlayer* Player, int Score); // Maniascript
  void Replay_SaveTeamScore(uint Team, int Score); // Maniascript
  void Replay_SavePlayerOfInterest(CSmScriptPlayer* Player); // Maniascript
  void Replay_SaveWinner(CSmScriptPlayer* Player); // Maniascript
  void Replay_SaveInterface(); // Maniascript
};

struct CSmServer : public CMwNod {
  CSmServer();

  CSmArenaServer* const ArenaServer;
  CSmArenaRules* const Rules;
};

// Description: "Event recieved by ShootMania gamemodes."
struct CSmArenaRulesEvent : public CScriptBaseEvent {
  enum class EType {
    Unknown = 0,
    OnShoot = 1,
    OnHit = 2,
    OnNearMiss = 3,
    OnArmorEmpty = 4,
    OnCapture = 5,
    OnShotDeny = 6,
    OnFallDamage = 7,
    OnCommand = 8,
    OnPlayerAdded = 9,
    OnPlayerRemoved = 10,
    OnPlayerRequestRespawn = 11,
    OnActionCustomEvent = 12,
    OnActionEvent = 13,
    OnPlayerTouchesObject = 14,
    OnPlayerThrowsObject = 15,
    OnPlayerTriggersSector = 16,
    OnPlayerTriggersWaypoint = 17,
    OnPlayerRequestActionChange = 18,
    OnVehicleArmorEmpty = 19,
    OnVehicleCollision = 20,
    OnVehicleVsVehicleCollision = 21,
    OnVehicleLanding = 22,
  };
  enum class EActionSlot {
    Slot_A = 0,
    Slot_B = 1,
    Slot_C = 2,
    Slot_D = 3,
    Slot_E = 4,
    Slot_F = 5,
    Slot_G = 6,
    Slot_H = 7,
  };
  enum class EActionInput {
    Weapon = 0,
    Movement = 1,
    Activable1 = 2,
    Activable2 = 3,
    Activable3 = 4,
    Activable4 = 5,
    Consumable1 = 6,
    Consumable2 = 7,
    None = 8,
  };
  enum class EActionSlots {
    Weapon = 0,
    Movement = 1,
    Activable1 = 2,
    Activable2 = 3,
    Activable3 = 4,
    Activable4 = 5,
    None = 6,
  };
  const EType Type; // Maniascript
  CSmScriptPlayer* const Player; // Maniascript
  int Damage; // Maniascript
  const uint VictimShield; // Maniascript
  CGameScriptEntity* const VictimEntity; // Maniascript
  CSmScriptPlayer* const Victim; // Maniascript
  CSmObject* const VictimObject; // Maniascript
  CGameScriptTurret* const VictimTurret; // Maniascript
  CGameScriptVehicle* const VictimVehicle; // Maniascript
  int ShooterPoints; // Maniascript
  CGameScriptEntity* const ShooterEntity; // Maniascript
  CSmScriptPlayer* const Shooter; // Maniascript
  CGameScriptTurret* const ShooterTurret; // Maniascript
  const uint ShooterClan; // Maniascript
  const float Height; // Maniascript
  const float MissDist; // Maniascript
  const uint WeaponNum; // Maniascript
  const bool ShooterUsedAction; // Maniascript
  const uint ShooterWeaponNum; // Maniascript
  const EActionSlot ShooterActionSlot; // Maniascript
  const wstring ShooterActionId; // Maniascript
  const bool VictimUsedAction; // Maniascript
  const uint VictimWeaponNum; // Maniascript
  const EActionSlot VictimActionSlot; // Maniascript
  const wstring VictimActionId; // Maniascript
  const EActionSlots ActionSlot; // Maniascript
  const EActionSlot Action_Slot; // Maniascript
  const EActionInput ActionInput; // Maniascript
  const wstring ActionId; // Maniascript
  const wstring Param1; // Maniascript
  const MwBuffer<wstring> Param2; // Maniascript
  CSmObject* const Object; // Maniascript
  CGameScriptMapSector* const Sector; // Maniascript
  const uint WaypointTime; // Maniascript
  CSmScriptBlockPole* const BlockPole; // Maniascript
  CSmScriptMapLandmark* const Landmark; // Maniascript
  const MwId PlayerId; // Maniascript
  CGamePlayerInfo* const User; // Maniascript
  const bool PlayerWasSpawned; // Maniascript
  const bool PlayerWasInLadderMatch; // Maniascript
  const vec3 PlayerLastPosition; // Maniascript
  const vec3 PlayerLastAimDirection; // Maniascript
  const bool GiveUp; // Maniascript
  const string CommandName; // Maniascript
  const bool CommandValueBoolean; // Maniascript
  const int CommandValueInteger; // Maniascript
  const float CommandValueReal; // Maniascript
  const wstring CommandValueText; // Maniascript
  const int ActionChange; // Maniascript
  const float LandingScore; // Maniascript
};

struct CSmEditorPluginMapType : public CGameEditorPluginMapMapType {
  CSmArenaRulesMode* const Mode; // Maniascript
  const MwBuffer<CSmScriptPlayer*> AllPlayers; // Maniascript
  const MwBuffer<CSmScriptPlayer*> Players; // Maniascript
};

// File extension: 'SmArenaResource.Gbx'
struct CSmArenaResource : public CMwNod {
  CSmArenaResource();

  CScene2d* ScreenIn3d;
  CPlugBitmap* BitmapCoolDownCutOff;
  CPlugBitmap* BitmapConsumablesIcon_Off;
  CPlugShader* ShaderCrossHairHueShift;
  CPlugGameSkin* GameSkinCrosshairs;
  CPlugSound* SoundOffZone;
  CPlugSound* SoundTeleport;
  CPlugSound* UISound_StartMatch;
  CPlugSound* UISound_EndMatch;
  CPlugSound* UISound_StartRound;
  CPlugSound* UISound_EndRound;
  CPlugSound* UISound_PhaseChange;
  CPlugSound* UISound_TieBreakPoint;
  CPlugSound* UISound_TiePoint;
  CPlugSound* UISound_VictoryPoint;
  CPlugSound* UISound_Capture;
  CPlugSound* UISound_TimeOut;
  CPlugSound* UISound_Notice;
  CPlugSound* UISound_Warning;
  CPlugSound* UISound_PlayerEliminated;
  CPlugSound* UISound_PlayerHit;
  CPlugSound* UISound_Checkpoint;
  CPlugSound* UISound_Finish;
  CPlugSound* UISound_Record;
  CPlugSound* UISound_ScoreProgress;
  CPlugSound* UISound_RankChange;
  CPlugSound* UISound_Bonus;
  CPlugSound* UISound_FirstHit;
  CPlugSound* UISound_Combo;
  CPlugSound* UISound_PlayersRemaining;
  CPlugSound* UISound_Custom1;
  CPlugSound* UISound_Custom2;
  CPlugSound* UISound_Custom3;
  CPlugSound* UISound_Custom4;
  CPlugSound* SoundUISplashVersus;
  CPlugSound* SoundUIRetractableShow;
  CPlugSound* SoundUIRetractableHide;
  CPlugSound* SoundUITimeLeftWarning;
  CPlugSound* SoundUITimeTick;
  CPlugSound* SoundUITimeOut;
  CPlugSound* SoundUIGaugeHealth;
  CPlugSound* SoundUIGaugeStamina;
  CPlugSound* SoundUIGaugeEnergy;
  CControlFrame* CardPlayerScore_Small;
  CControlFrame* CardPlayerScore_Small_Rev;
  CControlFrame* CardPlayerScore_Big;
  CControlFrame* CardPlayerScore_Big_Rev;
  CControlFrame* CardPlayerScore_Medium;
  CControlFrame* CardPlayerScore_Medium_Rev;
  CFuncEnum* GameplayIcons;
  CPlugParticleEmitterModel* LaserSight_EmitterModel_deprecated;
  CGameActionFxResources* ActionFxResources;
  CMwRefBuffer* RefBuffer;
  float AdditionalListenerDistanceNbSquares;
};

struct CSmScriptLandmark : public CMwNod {
  const string Tag; // Maniascript
  const uint Order; // Maniascript
  const vec3 Position; // Maniascript
  const vec3 DirFront; // Maniascript
};

struct CSmScriptBlock : public CSmScriptLandmark {
  CSmScriptBase* const Base; // Maniascript
};

struct CSmScriptBlockSpawn : public CSmScriptBlock {
};

struct CSmScriptBlockPole : public CSmScriptBlock {
  bool Captured; // Maniascript
  CSmScriptSector* const Sector; // Maniascript
  CSmScriptGauge* const Gauge; // Maniascript
};

struct CSmScriptBase : public CMwNod {
  uint Clan; // Maniascript
  bool IsActive; // Maniascript
  const uint NumberOfCollectors; // Maniascript
};

struct CSmScriptGauge : public CMwNod {
  uint Clan; // Maniascript
  float ValueReal; // Range: 0 - 1 // Maniascript
  uint Value; // Maniascript
  uint Max; // Maniascript
  int Speed; // Maniascript
};

struct CSmScriptSector : public CMwNod {
  const MwBuffer<MwId> PlayersIds; // Maniascript
};

struct CSmModuleScoresTable : public CGamePlaygroundModuleClientScoresTable {
};

struct CSmScriptMapBase : public CMwNod {
  uint Clan; // Maniascript
  bool IsActive; // Maniascript
  const uint NumberOfCollectors; // Maniascript
};

struct CSmScriptMapGate : public CMwNod {
  uint Clan; // Maniascript
  bool Automatic; // Maniascript
  bool ManualClosed; // Maniascript
  const bool AutoClosed; // Maniascript
  bool AutoIsActive; // Maniascript
  int AutoCloseDelay; // Maniascript
  int AutoOpenSpeed; // Maniascript
};

struct CSmScriptMapGauge : public CMwNod {
  uint Clan; // Maniascript
  float ValueReal; // Range: 0 - 1 // Maniascript
  uint Value; // Maniascript
  uint Max; // Maniascript
  int Speed; // Maniascript
  bool Captured; // Maniascript
};

struct CSmScriptMapLandmark : public CGameScriptMapLandmark {
  CSmScriptMapBase* const Base; // Maniascript
  CSmScriptMapGate* const Gate; // Maniascript
  CSmScriptMapGauge* const Gauge; // Maniascript
};

// Description: "A Shootmania player."
struct CSmScriptPlayer : public CGameScriptPlayer {
  enum class ESpawnStatus {
    NotSpawned = 0,
    Spawning = 1,
    Spawned = 2,
  };
  enum class EPost {
    None = 0,
    Char = 1,
    CarDriver = 2,
    Reserved1 = 3,
    Reserved2 = 4,
    Reserved3 = 5,
    Reserved4 = 6,
    Reserved5 = 7,
    Reserved6 = 8,
  };
  CSmArenaScore* const Score; // Maniascript
  const ESpawnStatus SpawnStatus; // Maniascript
  const int StartTime; // Maniascript
  int EndTime; // Maniascript
  const EPost Post; // Maniascript
  float AmmoGain; // Range: 0 - 10 // Maniascript
  float AmmoPower; // Range: 0.1 - 10 // Maniascript
  const bool AutoSwitchWeapon; // Maniascript
  const uint CurWeapon; // Maniascript
  const uint CurAmmo; // Maniascript
  const uint CurAmmoMax; // Maniascript
  const uint CurAmmoUnit; // Maniascript
  uint Armor; // Maniascript
  uint ArmorMax; // Maniascript
  uint ArmorGain; // Maniascript
  uint ArmorReplenishGain; // Maniascript
  float ArmorPower; // Range: 0.1 - 10 // Maniascript
  uint Stamina; // Maniascript
  const uint StaminaMaxValue; // Maniascript
  float StaminaMax; // Range: 0.1 - 3 // Maniascript
  float StaminaGain; // Range: 0 - 1 // Maniascript
  float StaminaPower; // Range: 0.1 - 1 // Maniascript
  uint Energy; // Maniascript
  float SpeedPower; // Range: 0.1 - 1 // Maniascript
  float JumpPower; // Range: 0.1 - 1 // Maniascript
  bool AllowWallJump; // Maniascript
  bool AllowProgressiveJump; // Maniascript
  bool UseAlternateWeaponVisual; // Maniascript
  bool IsHighlighted; // Maniascript
  float EnergyLevel; // Range: 0 - 1 // Maniascript
  vec3 ForceColor; // Maniascript
  const float GetLinearHue; // Range: 0 - 1 // Maniascript
  float ForceLinearHue; // Maniascript
  MwId ForceModelId; // Maniascript
  bool HasShield; // Maniascript
  const bool IsInVehicle; // Maniascript
  float ThrowSpeed; // Range: 0 - 500 // Maniascript
  const int CurrentClan; // Maniascript
  const uint IdleDuration; // Maniascript
  const vec3 Position; // Maniascript
  const float AimYaw; // Maniascript
  const float AimPitch; // Maniascript
  const vec3 AimDirection; // Maniascript
  const vec3 Velocity; // Maniascript
  const float Speed; // Maniascript
  const bool IsUnderground; // Maniascript
  const bool IsTouchingGround; // Maniascript
  const bool IsInAir; // Maniascript
  const bool IsInWater; // Maniascript
  const bool IsInOffZone; // Maniascript
  const bool IsOnTech; // Maniascript
  const bool IsOnTechGround; // Maniascript
  const bool IsOnTechLaser; // Maniascript
  const bool IsOnTechArrow; // Maniascript
  const bool IsOnTechNucleus; // Maniascript
  const bool IsOnTechArmor; // Maniascript
  const bool IsOnTechSafeZone; // Maniascript
  const bool IsOnTechTeleport; // Maniascript
  const bool IsOnTechNoWeapon; // Maniascript
  const bool IsPowerJumpActivable; // Maniascript
  const bool IsTeleportActivable; // Maniascript
  const bool IsAttractorActivable; // Maniascript
  const uint NbActiveAttractors; // Maniascript
  const bool IsRunning; // Maniascript
  const bool IsCapturing; // Maniascript
  CSmScriptBlockPole* const BlockPole; // Maniascript
  CSmScriptMapLandmark* const CapturedLandmark; // Maniascript
  const MwBuffer<CSmObject*> Objects; // Maniascript
  CGameScriptVehicle* const Vehicle; // Maniascript
  const bool IsFakePlayer; // Maniascript
  const bool IsBot; // Maniascript
  CSmPlayerDriver* const Driver; // Maniascript
};

struct CSmModuleManager : public CGamePlaygroundModuleManagerClient {
};

struct CSmOffZone : public CMwNod {
};

struct CSmActionMgr : public CGameMgrAction {
  CSmPlayer* Ed_Player;
  CSmActionInstance* const WeaponAction;
};

} // namespace ShootMania

namespace GameData {

struct CGameCtnCollector : public CMwNod {
  CGameCtnCollector();

  enum class EProdState {
    Aborted = 0,
    GameBox = 1,
    DevBuild = 2,
    Release = 3,
  };
  UnnamedEnum CollectionId;
  MwId Author;
  wstring NameE;
  const wstring Name; // Maniascript
  wstring Description;
  bool IsInternal;
  bool IsAdvanced;
  string PageName; // Maniascript
  uint CatalogPosition;
  EProdState ProdState;
  CPlugFileImg* IconFid;
  bool IconUseAutoRender;
  uint IconQuarterRotationY;
  uint InterfaceNumber; // Maniascript
  CPlugBitmap* const Icon; // Maniascript
  CMwNod* const ArticlePtr;
  const string SkinDirectory; // Maniascript
};

// File extension: 'Item.Gbx'
struct CGameItemModel : public CGameCtnCollector {
  CGameItemModel();

  enum class EnumItemType {
    Undefined = 0,
    Ornament = 1,
    PickUp = 2,
    Character = 3,
    Vehicle = 4,
    Spot = 5,
    Cannon = 6,
    Group = 7,
    Decal = 8,
    Turret = 9,
    Wagon = 10,
    Block = 11,
    EntitySpawner = 12,
  };
  enum class EnumWaypointType {
    Start = 0,
    Finish = 1,
    Checkpoint = 2,
    None = 3,
    StartFinish = 4,
    Dispenser = 5,
  };
  enum class EnumDefaultCam {
    None = 0,
    Default = 1,
    Free = 2,
    Spectator = 3,
    Behind = 4,
    Close = 5,
    Internal = 6,
    Helico = 7,
    FirstPerson = 8,
    ThirdPerson = 9,
    ThirdPersonTop = 10,
    Iso = 11,
    IsoFocus = 12,
    Dia3 = 13,
    Board = 14,
    MonoScreen = 15,
    Rear = 16,
    Debug = 17,
    _1 = 18,
    _2 = 19,
    _3 = 20,
    Alt1 = 21,
    Orbital = 22,
    Decals = 23,
    Snap = 24,
  };
  enum class EnumInventoryItemClass {
    Weapon = 0,
    Movement = 1,
    Consumable = 2,
    Armor = 3,
  };
  enum class EnumItemClipType {
    Not_a_clip = 0,
    Complex = 1,
    Rectangular = 2,
    Triangular = 3,
    Square = 4,
    Hexagonal = 5,
    Octogonal = 6,
    Circular = 7,
  };
  const EnumItemType ItemType;
  const MwBuffer<CGameActionModel*> Actions;
  CGameItemPlacementParam* DefaultPlacementParam_Head;
  CGameItemPlacementParam* DefaultPlacementParam_Content;
  CGameItemPlacementParam* DefaultPlacementParam_Dbg;
  CPlugFileImg* Icon;
  CMwNod* EntityModelEdition;
  CMwNod* EntityModel;
  CMwNod* const VisModel;
  CMwNod* VisModelCustom;
  DataRef DefaultSkinFileRef;
  DataRef ArchetypeRef;
  CMwNod* const PhyModel;
  CMwNod* PhyModelCustom;
  bool HasPath;
  bool CanFly;
  bool IsStart;
  bool IsCheckpoint;
  bool IsFinish;
  bool IsStartFinish;
  EnumItemType ItemTypeE;
  string SkinDirNameCustom;
  CPlugFileFidContainer* DefaultSkinFid;
  void InitFromArchetype();
  const MwBuffer<CMwNod*> Cameras;
  EnumDefaultCam DefaultCam;
  MwId DefaultWeaponName;
  MwArray<CPlugFileZip*> NadeoSkinsFids;
  EnumWaypointType WaypointType;
  CPlugAudioEnvironment* AudioEnvironmentInCar;
  vec3 GroundPoint;
  float PainterGroundMargin;
  float OrbitalCenterHeightFromGround;
  float OrbitalRadiusBase;
  float OrbitalPreviewAngle;
  MwBuffer<CGameItemModel*> ItemClips_Models;
  MwBuffer<wstring> ItemClips_DataRefs;
  MwBuffer<iso4> ItemClips_Locs;
  EnumItemClipType ItemClipType;
  MwBuffer<vec2> ItemClipShapePoints;
  void AddItemClipShapePoint();
  void RemoveLastItemClipShapePoint();
  void MoveUpItemClipShapePoints();
  void MoveDownItemClipShapePoints();
  void RemoveAllItemClipShapePoints();
  uint PolyGen_EdgeCount;
  float PolyGen_Radius;
  float PolyGen_AngleOffsetInDegrees;
  void GeneratePolygonForItemClipShape();
  void ComputeItemClipShapeOptimized();
  const uint ItemClipShapeOptimized_Symmetry;
  const MwBuffer<vec2> ItemClipShapeOptimized_PolarCoords;
  bool DisableLightmap;
};

// Description: ""
struct CGameModulePlaygroundPlayerStateComponentModel : public CMwNod {
  enum class Type {
    Invalid = 0,
    Gauge = 1,
    List = 2,
  };
  enum class Model {
    Invalid = 0,
    WeaponGauge = 1,
    ArmorGauge = 2,
    StaminaGauge = 3,
    WeaponList = 4,
  };
  const EType Type; // Maniascript
  string Name; // Maniascript
  vec2 Position;
  float PosX; // Maniascript
  float PosY; // Maniascript
  float ZIndex; // Maniascript
  float Scale; // Maniascript
  float Rotation; // Maniascript
};

// File extension: 'GameObjectPhyModel.Gbx'
struct CGameObjectPhyModel : public CMwNod {
  CGameObjectPhyModel();

  DataRef MoveShape;
  CPlugSurface* MoveShapeFid;
  DataRef HitShape;
  DataRef TriggerShape;
  CPlugDynaModel* DynaModel;
  CPlugDynaPointModel* DynaPointModel;
  CPlugCharPhySpecialProperty* SpecialProperties;
  uint FirePeriod;
  DataRef ActionModel;
  const MwBuffer<CGameActionModel*> Actions;
  MwBuffer<CPlugTriggerAction*> Triggers;
  enum class EGameObjectPhyModelProgam {
    None = 0,
    Target = 1,
    Turret = 2,
  };
  EGameObjectPhyModelProgam Program;
  enum class EGameObjectPhyModelPersistence {
    OnPlayerUnspawn = 0,
    OnPlayerRemoved = 1,
    NeverRemove = 2,
  };
  EGameObjectPhyModelPersistence Persistence;
  bool CanStopEnemyBullet;
  bool CanStopEnemy;
  float ThrowSpeed;
  float ThrowAngularSpeed;
  float ScaleCoefMax;
  float StaminaSpawnCoef;
  uint Armor;
  bool HasALifeTime;
  uint LifeTimeDuration;
  uint TimeBeforeDome;
  bool DontRemoveOwnerWhenDestroyed;
  bool HealEnabled;
  uint HealArmorGainPerSecond;
  bool ShieldEnabled;
  uint ShieldDomeArmor;
  bool BumperEnabled;
  uint BumperMaxInstancesSpawnable;
};

// File extension: 'GameObjectVisModel.Gbx'
struct CGameObjectVisModel : public CMwNod {
  CGameObjectVisModel();

  DataRef Mesh;
  CPlugSolid2Model* MeshShadedFid;
  CPlugAnimLocSimple* LocAnim;
  wstring SoundRef_Spawn;
  wstring SoundRef_Unspawn;
  wstring SoundRef_Grab;
  wstring SoundRef_Smashed;
  wstring SoundRef_Permanent;
  CPlugSound* Sound_Spawn;
  CPlugSound* Sound_Unspawn;
  CPlugSound* Sound_Grab;
  CPlugSound* Sound_Smashed;
  CPlugSound* Sound_Permanent;
  iso4 SoundLoc_Permanent;
  CPlugParticleEmitterModel* ParticleModel_Alive;
  vec3 ParticleModelPos_Alive;
  CPlugSolid2Model* MeshShaded;
  wstring SmashParticleRef;
  CPlugParticleEmitterModel* DestroyParticleModel;
  DataRef VisEntFx;
};

// File extension: 'Action.Gbx'
struct CGameActionModel : public CMwNod {
  CGameActionModel();

  const UnnamedEnum ActionType;
  string ActionName;
  DataRef Icon;
  wstring Name;
  const wstring Description;
  UnnamedEnum InventoryItemClass;
  CPlugAnimFile* Anim;
  bool IsAnimPartial;
  MwBuffer<CPlugCustomBulletModel*> Projectiles;
  MwBuffer<CPlugCustomBeamModel*> Beams;
  DataRef CrossHair;
  bool UseVehicleGuns;
  CPlugShieldModel* ShieldModel;
  bool IsLockModeActive;
  CPlugScriptWithSettings* Script;
  MwBuffer<CPlugBulletModel*> BulletModels_Nadeo;
  MwBuffer<CPlugBulletModel*> BulletModels;
  const uint ParticleBlockCount;
  void LogParticleBlockModelIds();
  const bool IsCustom;
};

struct CGameWaypointSpecialProperty : public CMwNod {
  CGameWaypointSpecialProperty();

  string Tag;
  uint Order;
  void LinkedCheckpointToggle();
};

// File extension: 'GameActionFxResources.Gbx'
struct CGameActionFxResources : public CMwNod {
  CGameActionFxResources();

  CSystemFidsFolder* ParticleEmitterSubModels_Continuous;
  CSystemFidsFolder* ParticleEmitterSubModels_Splash;
  CSystemFidsFolder* MeshFolder;
  CSystemFidsFolder* AudioFxLibraryFolder;
  CSystemFidsFolder* BeamEmitterSubModels;
  CMwRefBuffer* BulletModelsLibrary;
};

// File extension: 'Gate.gbx'
struct CGameGateModel : public CMwNod {
  CGameGateModel();

  CPlugSurface* Shape;
  CGameArmorModel* Armor;
  CPlugSound* GateOpenSound;
  CPlugSound* GateSound;
  CPlugSound* GateCloseSound;
};

// File extension: 'Teleporter.gbx'
struct CGameTeleporterModel : public CMwNod {
  CGameTeleporterModel();

  CGameSpawnModel* Spawn;
  CPlugSurface* TriggerShape;
  vec3 CenterPos;
};

// File extension: 'Armor.gbx'
struct CGameArmorModel : public CMwNod {
  CGameArmorModel();

  uint ArmorMax;
  uint ReplenishDelayAfterDamage;
};

// File extension: 'Spawn.gbx'
struct CGameSpawnModel : public CMwNod {
  CGameSpawnModel();

  iso4 Loc;
  bool Underground;
  float TorqueX;
  uint TorqueDuration;
  vec3 DefaultGravitySpawn;
};

// File extension: 'CaptureZone.gbx'
struct CGameCaptureZoneModel : public CMwNod {
  CGameCaptureZoneModel();

  iso4 Loc;
  float Radius;
  float Height;
};

// File extension: 'Turbine.gbx'
struct CGameTurbineModel : public CMwNod {
  CGameTurbineModel();

  iso4 Loc;
  float SilencerBubble_RadiusMute;
  float SilencerBubble_RadiusFade;
  bool SilencerBubble_OnlyPlayerSounds;
};

struct CGameGhostTMData : public CMwNod {
  CGameGhostTMData();

};

struct CGameModulePlaygroundModel : public CGameModuleModelCommon {
  DataRef Icon;
  float SizeX; // Range: 0 - 320
  float SizeY; // Range: 0 - 180
  CPlugFileText* ManialinkCode;
};

struct CGameModuleNodForPropertyList : public CMwNod {
  CGameModuleNodForPropertyList();

};

// File extension: 'Module.Gbx'
struct CGameModuleMenuModel : public CGameModuleModelCommon {
  CGameModuleMenuModel();

  CPlugFileTextScript* ManiaAppScript;
  MwBuffer<CGameModuleMenuPageModel*> Pages; // Maniascript
  CGameModuleMenuPageModel* AddPage(wstring PageUrl); // Maniascript
  void AddLink(CGameModuleMenuPageModel* ParentPage, CGameModuleMenuPageModel* ChildPage); // Maniascript
  string MenuScript; // Maniascript
};

struct CGameModuleModelCommon : public CMwNod {
  const uint LastEditionTime;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundInventoryModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundInventoryModel();

  string Title;
  uint SlotCapacity;
  MwBuffer<CGameModuleNodForPropertyList*> Categories;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundScoresTableModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundScoresTableModel();

  MwBuffer<CGameModuleNodForPropertyList*> Columns;
  bool UseTeams;
  bool DisplayTeamScores;
  string Title;
  bool UsePlayerDarkening;
  bool UseSettings;
  bool SortSpectatorsLast;
  bool SortDisconnectedLast;
  bool DisplayLocalPlayerInfo;
  bool DisplayServerName;
  bool DisplayColumnLegends;
  uint ColumnCount; // Range: 1 - 10
  uint LineCount; // Range: 1 - 10
  float ColumnMargin;
  DataRef GameModeIcon;
  DataRef SmStormBackground;
  DataRef TmStadiumBackground;
  DataRef TmCanyonBackground;
  DataRef TmValleyBackground;
  DataRef TmLagoonBackground;
  DataRef SmHeaderTeam1Bg;
  DataRef SmHeaderTeam2Bg;
  DataRef TmHeaderTeam1Bg;
  DataRef TmHeaderTeam2Bg;
  DataRef SmPlayerCardSquareQuad;
  DataRef SmPlayerCardBackgroundQuad;
  DataRef SmPlayerCardBackgroundQuadRevert;
  DataRef TmPlayerCardSquareQuad;
  DataRef TmPlayerCardBackgroundQuad;
  DataRef TmPlayerCardBackgroundQuadRevert;
  DataRef Echelon1;
  DataRef Echelon2;
  DataRef Echelon3;
  DataRef Echelon4;
  DataRef Echelon5;
  DataRef Echelon6;
  DataRef Echelon7;
  DataRef Echelon8;
  DataRef Echelon9;
  DataRef Echelon1Rev;
  DataRef Echelon2Rev;
  DataRef Echelon3Rev;
  DataRef Echelon4Rev;
  DataRef Echelon5Rev;
  DataRef Echelon6Rev;
  DataRef Echelon7Rev;
  DataRef Echelon8Rev;
  DataRef Echelon9Rev;
  string HeaderStyle;
  string PlayerInfoLocalRankStyle;
  string PlayerCardLocalRankStyle;
  float HeaderScale;
  float PlayerInfoLocalRankScale;
  float PlayerCardLocalRankScale;
  string DefaultTeam1Name;
  string DefaultTeam2Name;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundStoreModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundStoreModel();

  string Title;
  string Subtitle;
  DataRef PowerUpImageLvl1;
  DataRef PowerUpImageLvl2;
  DataRef PowerUpImageLvl3;
  DataRef PowerUpImageLvl4;
  DataRef PowerUpImageLvl5;
  MwBuffer<CGameActionModel*> Actions;
  MwBuffer<CGameItemModel*> Items;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundHudModel : public CGameModuleModelCommon {
  CGameModulePlaygroundHudModel();

  CPlugFileText* Manialink;
  DataRef Inventory;
  DataRef Store;
  DataRef Chrono;
  DataRef ScoresTable;
  DataRef SpeedMeter;
  DataRef PlayerState;
  DataRef TeamState;
  MwId SubModuleAdd(wstring ModulePath, string ModuleName); // Maniascript
  MwId SubModuleSetNameAndId(MwId ModuleId, string NewModuleName); // Maniascript
  void SubModuleRemove(MwId ModuleId); // Maniascript
  bool SubModuleIsContextActive(MwId ModuleId, MwId ContextId); // Maniascript
  void SubModuleSetContextIsActive(MwId ModuleId, MwId ContextId, bool IsActive); // Maniascript
  MwId ContextAdd(string ContextName); // Maniascript
  MwId ContextSetId(MwId ContextId, string NewContextName); // Maniascript
  void ContextRemove(MwId ContextId); // Maniascript
  const MwRefBuffer<MwId> ContextsIds; // Maniascript
  const MwBuffer<MwId> SubModuleIds; // Maniascript
  void SubModuleRetrieve(MwId ModuleId); // Maniascript
  SHudModule SubModule; // Maniascript
  const uint EditorContextIndex; // Maniascript
};

// File extension: 'Module.Gbx'
struct CGameModuleMenuPageModel : public CGameModuleModelCommon {
  CGameModuleMenuPageModel();

  CPlugFileText* Manialink;
  MwBuffer<CGameModuleNodForPropertyList*> Components;
  string ManialinkText; // Maniascript
};

// File extension: 'Editor.Gbx'
struct CGameEditorModel : public CMwNod {
  CGameEditorModel();

  enum class EEditorType {
    ActionMaker = 0,
    ChallengeEditor = 1,
    ItemEditor = 2,
    InterfaceDesigner = 3,
    MeshModeler = 4,
    ModuleStudio = 5,
    PixelArt = 6,
    EditorEditor = 7,
    VehicleAssembler = 8,
    MaterialEditor = 9,
  };
  const EEditorType EditorType;
  bool AutoGenerateHelp;
  bool AutoCreateTooltipsFromBindings;
  CGameManiaAppTextSet* MainPluginTextSet;
  MwBuffer<string> SubPluginIds;
  const MwBuffer<CGameManiaAppTextSet*> SubPluginTextSets;
};

// File extension: ''
struct CGameVehicleModel : public CMwNod {
  CGameVehicleModel();

  UnnamedType PhyModel;
  CPlugVehicleVisModel* VisModel;
};

struct CGameObjectModel : public CMwNod {
  CGameObjectModel();

  wstring ScriptId;
  CGameObjectPhyModel* Phy;
  CGameObjectVisModel* Vis;
  CGameObjectModel* SlaveShieldDome;
  CGameObjectModel* SlaveHealDome;
  wstring m_InventoryParams_InventoryName;
  wstring m_InventoryParams_InventoryDescription;
  EGameInventoryItemClass m_InventoryParams_InventoryItemClass;
  uint m_InventoryParams_InventoryOccupation;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundChronoModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundChronoModel();

  float SizeX; // Range: 0 - 320
  float SizeY; // Range: 0 - 180
  float TextSize; // Range: 0 - 180
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundSpeedMeterModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundSpeedMeterModel();

  enum class ESpeedUnit {
    Undefined = 0,
    MetersPerSecond = 1,
    KmPerHour = 2,
    MilesPerHour = 3,
  };
  float GlobalScale; // Range: 0 - 5
  uint MeterNbGauge; // Range: 0 - 3
  float MeterSize;
  float MeterClipOffset;
  float MeterOpacity; // Range: 0 - 1
  float MeterFullCircleValue; // Range: 0.001 - 1e+06
  float MeterCircleMaxAngle; // Range: 0 - 360
  float MeterCircleOffsetAngle; // Range: -360 - 360
  bool MeterShowBackground;
  bool MeterShowSpeedBar;
  string MeterBGColor;
  string MeterInnerColor;
  string MeterMiddleColor;
  string MeterOuterColor;
  ESpeedUnit SpeedForcedUnit;
  float SpeedValueScale; // Range: 0 - 5
  bool SpeedShowUnit;
  bool SpeedShowFooter;
  float SpeedUnitScale; // Range: 0 - 5
  bool SpeedShowCustomText;
  string SpeedCustomText;
  bool DistanceShowValue;
  bool DistanceShowFooter;
  DataRef GaugeBGImage;
  DataRef MeterInnerImage;
  DataRef MeterMiddleImage;
  DataRef MeterOuterImage;
  DataRef SpeedBarImage;
  DataRef FooterKMHLineImage;
  DataRef FooterKMHUnitImage;
  DataRef FooterMiHUnitImage;
  DataRef FooterMSUnitImage;
  DataRef FootLineDistanceImage;
};

struct CGameItemPlacementParam : public CMwNod {
  CGameItemPlacementParam();

  MwBuffer<vec3> Pivots_Positions;
  bool SwitchPivotManually;
  float FlyVStep;
  float FlyVOffset;
  bool GhostMode;
  float GridSnap_HStep;
  float GridSnap_VStep;
  float GridSnap_HOffset;
  float GridSnap_VOffset;
  float PivotSnap_Distance;
  bool YawOnly;
  bool NotOnObject;
  bool AutoRotation;
  vec3 Cube_Center;
  float Cube_Size;
  MwBuffer<quat> PivotRotations;
  void AddPivotPosition();
  void AddPivotRotation();
  void RemoveLastPivotPosition();
  void RemoveLastPivotRotation();
  bool HasPath;
  bool IsFreelyAnchorable;
};

// Description: ""
// File extension: 'Module.Gbx'
struct CGameModulePlaygroundPlayerStateModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundPlayerStateModel();

  bool DynamicPreview; // Maniascript
  float PreviewSpeed; // Maniascript
  MwBuffer<CGameModulePlaygroundPlayerStateComponentModel*> Components;
  MwId ComponentAddDefaultName(EModel ComponentModel); // Maniascript
  MwId ComponentAddCustomName(EModel ComponentModel, string ComponentName); // Maniascript
  MwId ComponentSetNameAndId(MwId ComponentId, string NewComponentName); // Maniascript
  void ComponentRemove(MwId ComponentId); // Maniascript
  const MwBuffer<MwId> ComponentIds; // Maniascript
  void ComponentRetrieve(MwId ComponentId); // Maniascript
  CGameModulePlaygroundPlayerStateComponentModel* Component; // Maniascript
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundTeamStateModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundTeamStateModel();

  enum class ECardAlign {
    Vertical = 0,
    Horizontal = 1,
    Custom = 2,
  };
  float GlobalScale; // Range: 0 - 100
  uint PlayerPerTeam; // Range: 1 - 1000
  bool ShowTeamNames;
  bool ShowTeamEmblems;
  bool ShowTeamScores;
  bool ShowTeamBackgrounds;
  bool UseCustomTeamBackground;
  DataRef CustomTeamBackground;
  vec2 FirstPlayerPosition;
  ECardAlign PlayerCardsAlign;
  vec2 NextPlayerPositionOffset;
  bool ShowPlayerNames;
  bool ShowPlayerAvatars;
  bool ShowPlayerEchelons;
  bool ShowPlayerManiaStars;
  bool ShowPlayerTools;
  bool ShowPlayerTags;
  bool ShowPlayerScores;
  bool ShowPlayerRoundScores;
  float PlayerGaugesHeight; // Range: 0 - 100
  bool ShowAllyArmorGauges;
  bool ShowAllyWeaponGauges;
  bool ShowAllyStaminaGauges;
  bool ShowEnemyTeam;
  bool ShowEnemyArmorGauges;
  bool ShowEnemyWeaponGauges;
  bool ShowEnemyStaminaGauges;
  bool UseCustomActiveBackground;
  DataRef CustomActiveBackground;
  bool UseCustomActiveColor;
  vec3 ActiveColor;
  float ActiveColorOpacity; // Range: 0 - 1
  bool UseCustomInactiveBackground;
  DataRef CustomInactiveBackground;
  bool UseCustomInactiveColor;
  vec3 InactiveColor;
  float InactiveColorOpacity; // Range: 0 - 1
  DataRef Team1Emblem;
  DataRef Team1Outline;
  bool Team1UseDefaultColors;
  vec3 Team1PrimaryColor;
  float Team1PrimaryColorOpacity; // Range: 0 - 1
  vec3 Team1SecondaryColor;
  float Team1SecondaryColorOpacity; // Range: 0 - 1
  DataRef Team2Emblem;
  DataRef Team2Outline;
  bool Team2UseDefaultColors;
  vec3 Team2PrimaryColor;
  float Team2PrimaryColorOpacity; // Range: 0 - 1
  vec3 Team2SecondaryColor;
  float Team2SecondaryColorOpacity; // Range: 0 - 1
  DataRef Echelon1Image;
  DataRef Echelon2Image;
  DataRef Echelon3Image;
  DataRef Echelon4Image;
  DataRef Echelon5Image;
  DataRef Echelon6Image;
  DataRef Echelon7Image;
  DataRef Echelon8Image;
  DataRef Echelon9Image;
  DataRef Echelon1RevImage;
  DataRef Echelon2RevImage;
  DataRef Echelon3RevImage;
  DataRef Echelon4RevImage;
  DataRef Echelon5RevImage;
  DataRef Echelon6RevImage;
  DataRef Echelon7RevImage;
  DataRef Echelon8RevImage;
  DataRef Echelon9RevImage;
};

struct CGameModulePlaygroundPlayerStateGaugeModel : public CGameModulePlaygroundPlayerStateComponentModel {
  CGameModulePlaygroundPlayerStateGaugeModel();

  enum class Source {
    Weapon_current = 0,
    Weapon_max = 1,
    Weapon_grading = 2,
    Armor_current = 3,
    Armor_max = 4,
    Armor_grading = 5,
    Stamina_current = 6,
    Stamina_max = 7,
    Stamina_grading = 8,
    X = 9,
    Y = 10,
    Z = 11,
    Reserved9 = 12,
    Reserved10 = 13,
    Reserved11 = 14,
    Reserved12 = 15,
    Reserved13 = 16,
    Reserved14 = 17,
    Reserved15 = 18,
    Reserved16 = 19,
    Reserved17 = 20,
    Constant = 21,
  };
  enum class DistanceUnit {
    Default = 0,
    Meter = 1,
    Kilometer = 2,
    Mile = 3,
  };
  enum class SpeedUnit {
    Default = 0,
    m_s = 1,
    km_h = 2,
    Mi_h = 3,
  };
  enum class Direction {
    Right = 0,
    Top_right = 1,
    Top = 2,
    Top_left = 3,
    Left = 4,
    Bottom_left = 5,
    Bottom = 6,
    Bottom_right = 7,
    Center = 8,
  };
  ESource CurrentValueSource;
  EDistanceUnit CurrentValueDistanceUnit;
  ESpeedUnit CurrentValueSpeedUnit;
  float CurrentValueCustom;
  ESource MaxValueSource;
  EDistanceUnit MaxValueDistanceUnit;
  ESpeedUnit MaxValueSpeedUnit;
  float MaxValueCustom;
  bool HideWhenFull;
  float HideDelay;
  bool ShowGauge;
  vec2 GaugePosition;
  float GaugeRotation;
  vec2 GaugeSize;
  ESource GradingSource;
  EDistanceUnit GradingDistanceUnit;
  ESpeedUnit GradingSpeedUnit;
  float GradingCustom;
  bool GaugeUseDefaultColor;
  vec3 GaugeCustomColor;
  bool ShowValue;
  EDirection ValuePosition;
  vec2 ValueRelativePosition;
  float ValueRotation;
  float CurrentValueSize;
  bool ShowMaxValue;
  float MaxValueSize;
  bool ValueUseDefaultColor;
  vec3 ValueCustomColor;
  bool ShowBackground;
  vec2 BackgroundRelativePosition;
  float BackgroundRotation;
  vec2 BackgroundSize;
  DataRef BackgroundImage;
  bool BackgroundUseDefaultColor;
  vec3 BackgroundCustomColor;
  bool ShowIcon;
  EDirection IconPosition;
  vec2 IconRelativePosition;
  float IconRotation;
  float IconScale;
  DataRef IconImage;
  bool IconUseDefaultColor;
  vec3 IconCustomColor;
  bool ShowIconBackground;
  float IconBackgroundScale;
  DataRef IconBackgroundImage;
  bool IconUpdateFromWeapon;
  bool IconUpdateFromStamina;
  bool IconUpdateSetCustomImages;
  DataRef WeaponLaserImage;
  DataRef WeaponNucleusImage;
  DataRef WeaponArrowImage;
  DataRef WeaponRocketImage;
  DataRef StaminaJumpImage;
  DataRef StaminaRunImage;
  DataRef StaminaAttractorImage;
  DataRef StaminaSneakImage;
  DataRef StaminaSlideImage;
  DataRef StaminaBackFlipImage;
  DataRef StaminaFrontFlipImage;
  DataRef StaminaSpotImage;
  DataRef StaminaTeleportImage;
  DataRef StaminaInteractImage;
  DataRef StaminaPowerJumpImage;
  DataRef StaminaScopeImage;
  bool ShowCustomText;
  string CustomText;
  EDirection CustomTextPosition;
  vec2 CustomTextRelativePosition;
  float CustomTextRotation;
  float CustomTextSize;
  bool CustomTextUseDefaultColor;
  vec3 CustomTextCustomColor;
};

// File extension: 'PixelArt.Gbx'
struct CGamePixelArtModel : public CMwNod {
  CGamePixelArtModel();

};

// File extension: 'BlockItem.Gbx'
struct CGameBlockItem : public CMwNod {
  CGameBlockItem();

  MwId ArchetypeBlockInfoId_GameBox;
  UnnamedEnum ArchetypeBlockInfoCollectionId;
  MwBuffer<CPlugCrystal*> BlockInfoMobilSkins_Crystals;
  MwBuffer<uint> BlockInfoMobilSkins_MobilIds;
  const MwId ArchetypeBlockInfoId;
  const MwBuffer<CPlugCrystal*> CustomizedVariants;
};

struct CGameCommonItemEntityModelEdition : public CMwNod {
  CGameCommonItemEntityModelEdition();

  enum class EnumItemType {
    Undefined = 0,
    Ornament = 1,
    PickUp = 2,
    Character = 3,
    Vehicle = 4,
    Spot = 5,
    Cannon = 6,
    Group = 7,
    Decal = 8,
    Turret = 9,
    Wagon = 10,
    Block = 11,
    EntitySpawner = 12,
  };
  enum class EnumInventoryItemClass {
    Weapon = 0,
    Movement = 1,
    Consumable = 2,
    Armor = 3,
  };
  const EnumItemType ItemType;
  CPlugCrystal* MeshCrystal;
  CPlugParticleEmitterModel* DestroyParticleModel;
  float Mass;
  CGameActionModel* PickupActionModel;
  const MwBuffer<CGameActionModel*> TriggeredActions;
  MwBuffer<CPlugTriggerAction*> Triggers;
  wstring InventoryName;
  wstring InventoryDescription;
  EnumInventoryItemClass InventoryItemClass;
  uint InventoryOccupation;
};

struct CGameCommonItemEntityModel : public CMwNod {
  CGameCommonItemEntityModel();

  CMwNod* VisModel;
  CMwNod* PhyModel;
};

struct CGameManiaAppTextSet : public CMwNod {
  CGameManiaAppTextSet();

  CPlugFileTextScript* const MainScript;
  const MwBuffer<string> LayerManialinkNames;
  const MwBuffer<CPlugFileText*> LayerManialinks;
};

struct CGameObjectPhyCompoundModel : public CMwNod {
  CGameObjectPhyCompoundModel();

};

struct SHudModule {
  MwId Id;
  string ModuleName; // Maniascript
  float PosX; // Maniascript
  float PosY; // Maniascript
  float ZIndex; // Maniascript
  float Scale; // Maniascript
  uint ContextsMask;
};

struct CGameModulePlaygroundPlayerStateListModel : public CGameModulePlaygroundPlayerStateComponentModel {
  CGameModulePlaygroundPlayerStateListModel();

  enum class Source {
    Weapon_current = 0,
    Weapon_max = 1,
    Weapon_grading = 2,
    Armor_current = 3,
    Armor_max = 4,
    Armor_grading = 5,
    Stamina_current = 6,
    Stamina_max = 7,
    Stamina_grading = 8,
    X = 9,
    Y = 10,
    Z = 11,
    Reserved9 = 12,
    Reserved10 = 13,
    Reserved11 = 14,
    Reserved12 = 15,
    Reserved13 = 16,
    Reserved14 = 17,
    Reserved15 = 18,
    Reserved16 = 19,
    Reserved17 = 20,
    Constant = 21,
  };
  enum class DistanceUnit {
    Default = 0,
    Meter = 1,
    Kilometer = 2,
    Mile = 3,
  };
  enum class SpeedUnit {
    Default = 0,
    m_s = 1,
    km_h = 2,
    Mi_h = 3,
  };
  uint ItemCount;
  vec2 ItemPositionOffset;
  float FocusScale;
  DataRef WeaponLaserImage;
  DataRef WeaponNucleusImage;
  DataRef WeaponArrowImage;
  DataRef WeaponRocketImage;
  vec2 ItemIconSize;
  bool IconUseDefaultColor;
  vec3 IconCustomColor;
  bool ShowItemValue;
  vec2 ItemValuePosition;
  float ItemValueSize;
  bool ValueUseDefaultColor;
  vec3 ValueCustomColor;
  bool ShowBackground;
  float BackgroundBorderSize;
  bool BackgroundUseDefaultColor;
  vec3 BackgroundCustomColor;
  float BackgroundOpacity; // Range: 0 - 1
};

} // namespace GameData

namespace Meta {

// userName: 'AdnTag'
struct SPlugAdnTag {
  ENPlugAdn__ETagType Type;
  uint Value;
};

struct CPlugAnimTimingFixedPeriod {
  uint cFrame;
  uint FramePeriod;
  bool Looping;
};

struct STagFromName {
  string MatchName;
  ENPlugAdn__ETagCat Cat;
  SPlugAdnTag Tag;
};

struct STagFid {
  CSystemFidFile* Fid;
  UnknownType RequiredTags;
  UnknownType Tags;
};

struct CPlugAnimClipFlags {
  float WorldSpeedKmh;
  float MinPlaySpeed;
  float MaxPlaySpeed;
  bool Looping;
  bool IsDifference;
  bool RootRotation;
  bool FootCasting;
  bool FootCentering;
  float PlaySpeed;
  bool IsPartial;
  MwId DifferenceFromClip;
  MwId VariantGroup;
  EPlugAnimClipAlignOffset AlignOffset;
};

struct CPlugAnimFileXml {
};

struct CPlugAdnPartInstance {
  CPlugAdnPart* Part;
  CPlugMetaData* Shader;
};

// userName: 'Shader'
// File extension: 'AdnShader.gbx'
struct CPlugAdnShader_Part : public CMwNod {
  CMwNod* Normal;
  CMwNod* Mask;
  CMwNod* BaseColorMotif;
  CMwNod* Zone0_Normal;
  CMwNod* Zone0_Rough;
  CMwNod* Zone1_Normal;
  CMwNod* Zone1_Rough;
  CMwNod* Zone2_Normal;
  CMwNod* Zone2_Rough;
  UnknownType BaseColor_Motif;
  uint iChannelMotif;
  GmSimi2 TcToTcMotif;
  bool IsMotifWrap;
  UnknownType BaseColor_Zone0;
  UnknownType BaseColor_Modulate_Zone0;
  float DeltaRoughness_Modulate_Zone0; // Range: -0.5 - 0.5
  float TcZoneScale_Zone0; // Range: 0 - 150
  UnknownType BaseColor_Zone1;
  UnknownType BaseColor_Modulate_Zone1;
  float DeltaRoughness_Modulate_Zone1; // Range: -0.5 - 0.5
  float TcZoneScale_Zone1; // Range: 0 - 150
  UnknownType BaseColor_Zone2;
  UnknownType BaseColor_Modulate_Zone2;
  float DeltaRoughness_Modulate_Zone2; // Range: -0.5 - 0.5
  float TcZoneScale_Zone2; // Range: 0 - 150
  UnknownType BaseColor_Metal;
  float Roughness_Metal; // Range: 0 - 1
};

// userName: 'Shader'
// File extension: 'AdnShader.gbx'
struct CPlugAdnShader_Skin : public CMwNod {
  CMwNod* BaseColor0;
  CMwNod* BaseColor1;
  CMwNod* Normal0;
  CMwNod* Rough0;
  UnknownType BaseColor1_;
  uint iChannelColor1;
};

struct CPlugAnimGraphState {
  MwId Name;
  surf BaseNode;
  surf AimNode;
  CPlugAnimRootYaw RootYaw;
};

struct CPlugAnimGraphTransition {
  UnknownType FromStates;
  UnknownType ExcludeFromStates;
  UnknownType SelectConds;
  CPlugAnimTransition Params;
  MwId ToState;
  string CondExpr;
  uint EvalPriority;
};

struct CPlugAnimNode {
};

struct SBirdPhysicsParams {
  float PitchSpeed;
  float PitchMax;
  float YawSpeed;
  float YawMax;
  float RollSpeed;
  float RollMax;
  float PitchUpSpeed;
  float RollUpSpeed;
  float OtherEmitterBirdsInfluence;
  float BirdDistanceToSpeed;
  float GroundRepulsorDistanceToSpeed;
  float RepulsorDistanceToSpeed;
  float MainEmitterDistanceToSpeed;
  float GroundAvoidDistOffset;
};

struct CPlugAnimNodeAim : public CPlugAnimNode {
  MwId PoseGrid;
};

struct SPlugSkelSocket {
  MwId Name;
  uint16 JointIndex;
  iso4 LocInJoint;
};

struct SImportParams {
  float Scale;
  bool TransformIso4MaxToGbx;
  bool GenerateAnimFile;
  bool GenerateFileForClip;
  bool GenerateFileForRig;
  bool RemoveNamespace;
};

struct SClipImportParams {
  bool Enabled;
  MwId Name;
  MwId VariantGroup;
  bool Looping;
  float WorldSpeedKmh;
  float PlaySpeed;
  float MinPlaySpeed;
  float MaxPlaySpeed;
  bool FootCasting;
  bool FootCentering;
  bool RootRotation;
  bool IsDifference;
};

struct GmTransQuat {
  vec3 Trans;
  quat Quat;
};

struct GmSurf {
  EGmSurfType GmSurfType;
};

struct GmSurfPrimitive : public GmSurf {
  uint8 MaterialId;
  uint16 MaterialIndex;
};

struct GmSurfSphere : public GmSurfPrimitive {
  float Radius;
};

struct GmSurfSphereLocated : public GmSurfPrimitive {
  vec3 Center;
  float Radius;
};

struct GmSurfEllipsoid : public GmSurfPrimitive {
  vec3 Scale;
};

struct SGmSurfMultiSphereElem {
  vec3 Pos;
  float Radius;
};

struct GmSurfMultiSphere : public GmSurfPrimitive {
  UnknownType Spheres;
};

struct GmSurfVCylinder : public GmSurfPrimitive {
  float Height;
  float Radius;
};

struct GmSurfCylinder : public GmSurfPrimitive {
  float RadiusY;
  float RadiusXZ;
};

struct GmSurfBox : public GmSurfPrimitive {
  GmBoxAligned AABB;
};

struct SGmConvexFace {
  vec4 Plane;
  uint iFaceNormal;
  uint FaceNormalDir;
  MwRefBuffer<uint> Verts;
};

struct SGmConvexEdge {
  uint Verts_0_;
  uint Verts_1_;
  uint iEdgeDir;
};

struct IGmConvexPoly {
  MwRefBuffer<vec3> Verts;
  MwRefBuffer<vec3> FaceNormals;
  MwRefBuffer<vec3> EdgeDirs;
  UnknownType Faces;
  UnknownType Edges;
  uint8 MaterialId;
};

struct GmSurfConvexPolyhedron : public GmSurfPrimitive {
  IGmConvexPoly ConvexPoly;
  GmBoxAligned AABB;
};

struct GmSurfCapsule : public GmSurfPrimitive {
  vec3 SphereCenter;
  vec3 Dir;
  float Radius;
  float Length;
};

struct GmSurfPlane : public GmSurfPrimitive {
  vec4 PlaneEq;
};

struct GmSurfMeshTri {
  uint VertIndices_0_;
  uint VertIndices_1_;
  uint VertIndices_2_;
};

struct GmSurfMesh : public GmSurf {
  MwBuffer<vec3> m_Verts;
  MwBuffer<GmSurfMeshTri> m_Tris;
};

struct GmSurfCompound : public GmSurf {
  MwBuffer<iso4> SurfLocs;
  MwBuffer<surf> Surfs;
  MwBuffer<uint16> SurfJoints;
};

struct GmSurfCompoundInstance : public GmSurf {
  surf Compound;
  MwBuffer<iso4> SurfLocs;
};

struct GmBoxAligned {
  vec3 m_Center;
  vec3 m_HalfDiag;
};

struct GmSurfCircle : public GmSurf {
  vec3 Circle_Center;
  float Circle_Radius;
  vec3 Circle_Normal;
};

struct SPlugAnimGraphStateSelectCond {
  EPlugAnimGraphStateSelectCond Cond;
  MwId Value;
};

struct CPlugAnimTransition {
  uint Duration;
  EPlugAnimTransitionType Type;
  EPlugAnimTransitionCurve Curve;
};

struct CPlugAnimRootYaw {
  EPlugAnimRootYawType Type;
  float YawSpeedDegPerSec;
  float YawDeltaDeg;
};

struct CPlugAnimNodeJump : public CPlugAnimNode {
  CPlugAnimNodeClip Start;
  CPlugAnimNodeClip Phase1;
  CPlugAnimNodeClip Phase2;
  CPlugAnimNodeClip EndLoop;
};

struct CPlugAnimNodeSequence : public CPlugAnimNode {
  UnknownType Clips;
};

struct CPlugAnimNodeProceduralAttractor : public CPlugAnimNode {
  SPlugAnimNodeProceduralAttractorParams Params;
};

struct SPlugAnimNodeLocoNode {
  CPlugAnimNodeClip Clip;
  CPlugAnimNodeAim Aim;
  CPlugAnimRootYaw RootYaw;
  EPlugAnimLocoNodeType Type;
  float YawDistMinDeg;
  float YawDistMaxDeg;
  float SpeedMinKmh;
  float SpeedMaxKmh;
};

struct SPlugAnimNodeProceduralAttractorParams {
  float Clav_XAngleFromPitch;
  float Clav_ZAngleFromPitch;
  float Neck_YAngleFromPitch;
  float Spine1_YAngleFromPitch;
  float Spine_YAngleFromPitch;
  float Head_ZAngleFromPitch;
  float ForeArm_ZAngleFromPitch;
  float Hand_ZAngleFromPitch;
  float Hips_XAngleCoef;
  float Hips_YAngleCoef;
  float Hips_ZAngleCoef;
  float Hand1_XAngle;
  float Hand2_XAngle;
  float RootYawSpeedDeg;
  float AttractorYawDistMaxDeg;
};

struct CPlugAnimNodeClip : public CPlugAnimNode {
  MwId ClipName;
  uint ClipStartTime;
};

struct CPlugAnimNodeLocoGroup : public CPlugAnimNode {
  CPlugAnimTransition Transition;
  UnknownType LocoNodes;
};

struct GmTransYaw {
  vec3 Trans;
  float Yaw;
};

struct SElem {
  wstring Name;
  int Priority;
  int Mask_Priority;
  vec2 Py_UV_Size__m_;
  vec2 Py_UV_Offset__m_;
  float Py_Rotation; // Range: -90 - 90
  float Py_Pxz_Blend_StartAngle; // Range: 0 - 90
  float Py_Pxz_Blend_EndAngle; // Range: 0 - 90
  vec2 Pxz_UV_Size__m_;
  vec2 Pxz_UV_Offset__m_;
  float Px_Pz_Blend_StartAngle; // Range: 0 - 90
  float Px_Pz_Blend_EndAngle; // Range: 0 - 90
};

struct SBinding {
  uint cRef;
  CPlugSkel* AnimRig;
  CPlugAnimFile* AnimFile;
};

struct SPlugSkelJointExpr {
  EPlugSkelJointExprType Type;
  MwId Target;
  MwId A;
  MwId B;
};

struct SPlugSkelJointExprCache {
  EPlugSkelJointExprType Type;
  uint16 Target;
  uint16 A;
  uint16 B;
};

struct GmSurfSphericalShell : public GmSurfPrimitive {
  float InnerRadius;
  float OuterRadius;
  bool SkipInToOut;
};

struct SPlugAnimRigNode {
};

struct SPlugAnimRigNode_Arm : public SPlugAnimRigNode {
  MwId JointStart;
  MwId JointEnd;
  float RollMin;
  float RollMax;
  float Roll;
  vec3 EndPos;
};

struct SCharInput {
  bool Aiming;
  bool Looking;
  bool Freezed;
};

struct SCharState {
  float AimYaw;
  float AimPitch;
  float AimingCoef;
  float AimLook;
  float CrouchCoef;
};

struct CFastBucketAlloc {
  const uint AllocatedSize;
  const uint UsedSize;
};

struct SGraphUpdateParams {
  uint Time;
  float RootYaw;
  float VelYaw;
  float WorldSpeedKmh;
};

struct SGraphState {
  uint StartTime;
  uint StateTime;
  surf Node;
};

struct SOcean {
  float PixelPerTri; // Range: 1 - 100
  MwBuffer<SOceanWaveUI> WaveUIs;
};

struct SRigImportParams {
  bool Enabled;
  MwId TakeName;
  MwId RigName;
  MwId RootNodeName;
};

struct CPlugAnimNodeBlend2d : public CPlugAnimNode {
  MwBuffer<float> Xs;
  MwBuffer<float> Ys;
  string XExpr;
  string YExpr;
  MwBuffer<CPlugAnimNodeClip> GridNodes;
};

struct SRootYaw {
  float Cur;
  float Target;
};

struct SNode {
};

struct SNodeClip : public SNode {
  float ClipTimeSec;
  SRootYaw RootYaw;
};

struct SNodeJump : public SNode {
  uint iPhase;
  SNodeClip Clip;
};

struct SNodeSequence : public SNode {
  uint iSequenceClip;
  SNodeClip Clip;
};

struct SNodeLocoGroup : public SNode {
  uint iLocoNode;
  uint iLocoNodePrev;
  SNodeClip Clip;
  SNodeClip ClipPrev;
  float ClipTransitionTime;
  float ClipWeight;
  float TurnClipStartRootYaw;
  float ClipTotalPlayingTime;
};

struct SNodeBlend2d : public SNode {
};

struct SGraphInstance {
  CPlugAnimGraph* Model;
  surf StateModel;
  surf StateInstance;
  float StateWeight;
  surf PrevStateModel;
  surf PrevStateInstance;
  surf TransitionModel;
  float TransitionTime;
};

struct SChar {
  surf Binding;
  SCharInput Input;
  UnknownType Layers;
  SCharState State;
};

struct SOceanWaveUI {
  float Amplitude; // Range: 0 - 10
  float AngleDegree; // Range: -180 - 180
  float Length; // Range: 0 - 300
  float Phase; // Range: 0 - 10
};

struct SEnt {
  CMwNod* Model;
  GmTransQuat Location;
};

struct SPlugVehicleVisStyle {
  UnknownType Color;
};

struct SMgr {
  const uint cModel;
  const uint cInstance;
  const uint cLocalChunk;
  const uint cOrphans;
};

struct SHmsNavMeshBuildParam {
  float CellSize;
  float CellHeight;
  float AgentHeight;
  float AgentRadius;
  float AgentMaxClimb;
  float RegionMinSize;
  float RegionMergeSize;
  float EdgeMaxLen;
  float EdgeMaxError;
  float DetailSampleDist;
  float DetailSampleMaxError;
  float AgentMaxSlope;
  bool VertsPerPoly;
  bool MonotonePartitioning;
  uint TileCountX;
  uint TileCountZ;
  bool PartialNavMesh;
  vec3 PartialNavMeshBBMin;
  vec3 PartialNavMeshBBMax;
};

} // namespace Meta

