#ifndef __LAWNAPP_H__
#define __LAWNAPP_H__

#include "ConstEnums.h"
#include "SexyAppFramework/SexyApp.h"

class Board;
class GameSelector;
class ChallengeDefinition;
class SeedChooserScreen;
class AwardScreen;
class CreditScreen;
class TodFoley;
class PoolEffect;
class ZenGarden;
class PottedPlant;
class EffectSystem;
class TodParticleSystem;
class Reanimation;
class ReanimatorCache;
class ProfileMgr;
class PlayerInfo;
class Music;
class TitleScreen;
class PopDRMComm;
class ChallengeScreen;
class StoreScreen;
class AlmanacDialog;
class TypingCheck;

namespace Sexy
{
	class Dialog;
	class Graphics;
	class ButtonWidget;
};

enum FoleyType;

using namespace Sexy;

typedef std::list<ButtonWidget*> ButtonList;
typedef std::list<Image*> ImageList;

class LevelStats
{
public:
	int								mUnusedLawnMowers;

public:
	LevelStats() { Reset(); }
	inline void						Reset() { mUnusedLawnMowers = 0; }
};

class LawnApp : public SexyApp
{
public:
	Board*							mBoard;											//+0x768
	TitleScreen*					mTitleScreen;									//+0x76C
	GameSelector*					mGameSelector;									//+0x770
	SeedChooserScreen*				mSeedChooserScreen;								//+0x774
	AwardScreen*					mAwardScreen;									//+0x778
	CreditScreen*					mCreditScreen;									//+0x77C
	ChallengeScreen*				mChallengeScreen;								//+0x780
	TodFoley*						mSoundSystem;									//+0x784
	ButtonList						mControlButtonList;								//+0x788
	ImageList						mCreatedImageList;								//+0x794
	std::string						mReferId;										//+0x7A0
	std::string						mRegisterLink;									//+0x7BC
	std::string						mMod;											//+0x7D8
	int							mRegisterResourcesLoaded;						//+0x7F4
	int							mTodCheatKeys;									//+0x7F5
	GameMode						mGameMode;										//+0x7F8
	GameScenes						mGameScene;										//+0x7FC
	int							mLoadingZombiesThreadCompleted;					//+0x800
	int							mFirstTimeGameSelector;							//+0x801
	int								mGamesPlayed;									//+0x804
	int								mMaxExecutions;									//+0x808
	int								mMaxPlays;										//+0x80C
	int								mMaxTime;										//+0x810
	int							mEasyPlantingCheat;								//+0x814
	PoolEffect*						mPoolEffect;									//+0x818
	ZenGarden*						mZenGarden;										//+0x81C
	EffectSystem*					mEffectSystem;									//+0x820
	ReanimatorCache*				mReanimatorCache;								//+0x824
	ProfileMgr*						mProfileMgr;									//+0x828
	PlayerInfo*						mPlayerInfo;									//+0x82C
	LevelStats*						mLastLevelStats;								//+0x830
	int							mCloseRequest;									//+0x834
	int								mAppCounter;									//+0x838
	Music*							mMusic;											//+0x83C
	ReanimationID					mCrazyDaveReanimID;								//+0x840
	CrazyDaveState					mCrazyDaveState;								//+0x844
	int								mCrazyDaveBlinkCounter;							//+0x848
	ReanimationID					mCrazyDaveBlinkReanimID;						//+0x84C
	int								mCrazyDaveMessageIndex;							//+0x850
	SexyString						mCrazyDaveMessageText;							//+0x854
	int								mAppRandSeed;									//+0x870
	HICON							mBigArrowCursor;								//+0x874
	PopDRMComm*						mDRM;											//+0x878
	int								mSessionID;										//+0x87C
	int								mPlayTimeActiveSession;							//+0x880
	int								mPlayTimeInactiveSession;						//+0x884
	BoardResult						mBoardResult;									//+0x888
	int							mSawYeti;										//+0x88C
	TypingCheck*					mKonamiCheck;									//+0x890
	TypingCheck*					mMustacheCheck;									//+0x894
	TypingCheck*					mMoustacheCheck;								//+0x898
	TypingCheck*					mSuperMowerCheck;								//+0x89C
	TypingCheck*					mSuperMowerCheck2;								//+0x8A0
	TypingCheck*					mFutureCheck;									//+0x8A4
	TypingCheck*					mPinataCheck;									//+0x8A8
	TypingCheck*					mDanceCheck;									//+0x8AC
	TypingCheck*					mDaisyCheck;									//+0x8B0
	TypingCheck*					mSukhbirCheck;									//+0x8B4
	int							mMustacheMode;									//+0x8B8
	int							mSuperMowerMode;								//+0x8B9
	int							mFutureMode;									//+0x8BA
	int							mPinataMode;									//+0x8BB
	int							mDanceMode;										//+0x8BC
	int							mDaisyMode;										//+0x8BD
	int							mSukhbirMode;									//+0x8BE
	TrialType						mTrialType;										//+0x8C0
	int							mDebugTrialLocked;								//+0x8C4
	int							mMuteSoundsForCutscene;							//+0x8C5

public:
	LawnApp();
	virtual ~LawnApp();

	int							KillNewOptionsDialog();
	virtual void					GotFocus();
	virtual void					LostFocus();
	virtual void					InitHook();
	virtual void					WriteToRegistry();
	virtual void					ReadFromRegistry();
	virtual void					LoadingThreadProc();
	virtual void					LoadingCompleted();
	virtual void					LoadingThreadCompleted();
	virtual void					URLOpenFailed(const std::string& theURL);
	virtual void					URLOpenSucceeded(const std::string& theURL);
	virtual int					OpenURL(const std::string& theURL, int shutdownOnOpen);
	virtual int					DebugKeyDown(int theKey);
	virtual void					HandleCmdLineParam(const std::string& theParamName, const std::string& theParamValue);
	void							ConfirmQuit();
	void							ConfirmCheckForUpdates() { ; }
	void							CheckForUpdates() { ; }
	void							DoUserDialog();
	void							FinishUserDialog(int isYes);
	void							DoCreateUserDialog();
	void							DoCheatDialog();
	void							FinishCheatDialog(int isYes);
	void							FinishCreateUserDialog(int isYes);
	void							DoConfirmDeleteUserDialog(const SexyString& theName);
	void							FinishConfirmDeleteUserDialog(int isYes);
	void							DoRenameUserDialog(const SexyString& theName);
	void							FinishRenameUserDialog(int isYes);
	void							FinishNameError(int theId);
	void							FinishRestartConfirmDialog();
	void							DoConfirmSellDialog(const SexyString& theMessage);
	void							DoConfirmPurchaseDialog(const SexyString& theMessage);
	void							FinishTimesUpDialog();
	void							KillBoard();
	void							MakeNewBoard();
	void							StartPlaying();
	int							TryLoadGame();
	void							NewGame();
	void							PreNewGame(GameMode theGameMode, int theLookForSavedGame);
	void							ShowGameSelector();
	void							KillGameSelector();
	void							ShowAwardScreen(AwardType theAwardType);
	void							KillAwardScreen();
	void							ShowSeedChooserScreen();
	void							KillSeedChooserScreen();
	void							DoHighScoreDialog();
	void							DoBackToMain();
	void							DoConfirmBackToMain();
	void							DoNewOptions(int theFromGameSelector);
	void							DoRegister();
	void							DoRegisterError();
	int							CanDoRegisterDialog();
	/*inline*/ int					WriteCurrentUserConfig();
	void							DoNeedRegisterDialog();
	void							DoContinueDialog();
	void							DoPauseDialog();
	void							FinishModelessDialogs();
	virtual Dialog*					DoDialog(int theDialogId, int isModal, const SexyString& theDialogHeader, const SexyString& theDialogLines, const SexyString& theDialogFooter, int theButtonMode);
	virtual Dialog*					DoDialogDelay(int theDialogId, int isModal, const SexyString& theDialogHeader, const SexyString& theDialogLines, const SexyString& theDialogFooter, int theButtonMode);
	virtual void					Shutdown();
	virtual void					Init();
	virtual void					Start();
	virtual Dialog*					NewDialog(int theDialogId, int isModal, const SexyString& theDialogHeader, const SexyString& theDialogLines, const SexyString& theDialogFooter, int theButtonMode);
	virtual int					KillDialog(int theDialogId);
	virtual void					ModalOpen();
	virtual void					ModalClose();
	virtual void					PreDisplayHook();
	virtual int					ChangeDirHook(const char* theIntendedPath);
	virtual int					NeedRegister();
	virtual void					UpdateRegisterInfo();
	virtual void					ButtonPress(int theId);
	virtual void					ButtonDepress(int theId);
	virtual void					UpdateFrames();
	virtual int					UpdateApp();
	/*inline*/ int					IsAdventureMode();
	/*inline*/ int					IsSurvivalMode();
	int							IsContinuousChallenge();
	/*inline*/ int					IsArtChallenge();
	int							NeedPauseGame();
	virtual void					ShowResourceError(int doExit = false);
	void							ToggleSlowMo();
	void							ToggleFastMo();
	void							PlayFoley(FoleyType theFoleyType);
	void							PlayFoleyPitch(FoleyType theFoleyType, float thePitch);
	void							PlaySample(int theSoundNum);
	void							FastLoad(GameMode theGameMode);
	static SexyString				GetStageString(int theLevel);
	/*inline*/ void					KillChallengeScreen();
	void							ShowChallengeScreen(ChallengePage thePage);
	ChallengeDefinition&			GetCurrentChallengeDef();
	void							CheckForGameEnd();
	virtual void					CloseRequestAsync();
	/*inline*/ int					IsChallengeWithoutSeedBank();
	AlmanacDialog*					DoAlmanacDialog(SeedType theSeedType = SeedType::SEED_NONE, ZombieType theZombieType = ZombieType::ZOMBIE_INVALID);
	int							KillAlmanacDialog();
	int								GetSeedsAvailable();
	Reanimation*					AddReanimation(float theX, float theY, int theRenderOrder, ReanimationType theReanimationType);
	TodParticleSystem*				AddTodParticle(float theX, float theY, int theRenderOrder, ParticleEffect theEffect);
	/*inline*/ ParticleSystemID		ParticleGetID(TodParticleSystem* theParticle);
	/*inline*/ TodParticleSystem*	ParticleGet(ParticleSystemID theParticleID);
	/*inline*/ TodParticleSystem*	ParticleTryToGet(ParticleSystemID theParticleID);
	/*inline*/ ReanimationID		ReanimationGetID(Reanimation* theReanimation);
	/*inline*/ Reanimation*			ReanimationGet(ReanimationID theReanimationID);
	/*inline*/ Reanimation*			ReanimationTryToGet(ReanimationID theReanimationID);
	void							RemoveReanimation(ReanimationID theReanimationID);
	void							RemoveParticle(ParticleSystemID theParticleID);
	StoreScreen*					ShowStoreScreen();
	void							KillStoreScreen();
	int							HasSeedType(SeedType theSeedType);
	/*inline*/ int					SeedTypeAvailable(SeedType theSeedType);
	/*inline*/ void					EndLevel();
	inline int						IsIceDemo() { return false; }
	/*inline*/ int					IsShovelLevel();
	/*inline*/ int					IsWallnutBowlingLevel();
	/*inline*/ int					IsMiniBossLevel();
	/*inline*/ int					IsSlotMachineLevel();
	/*inline*/ int					IsLittleTroubleLevel();
	/*inline*/ int					IsStormyNightLevel();
	/*inline*/ int					IsFinalBossLevel();
	/*inline*/ int					IsBungeeBlitzLevel();
	static /*inline*/ SeedType		GetAwardSeedForLevel(int theLevel);
	SexyString						GetCrazyDaveText(int theMessageIndex);
	/*inline*/ int					CanShowAlmanac();
	/*inline*/ int					IsNight();
	/*inline*/ int					CanShowStore();
	/*inline*/ int					HasBeatenChallenge(GameMode theGameMode);
	PottedPlant*					GetPottedPlantByIndex(int thePottedPlantIndex);
	static /*inline*/ int			IsSurvivalNormal(GameMode theGameMode);
	static /*inline*/ int			IsSurvivalHard(GameMode theGameMode);
	static /*inline*/ int			IsSurvivalEndless(GameMode theGameMode);
	/*inline*/ int					HasFinishedAdventure();
	/*inline*/ int					IsFirstTimeAdventureMode();
	/*inline*/ int					CanSpawnYetis();
	void							CrazyDaveEnter();
	void							UpdateCrazyDave();
	void							CrazyDaveTalkIndex(int theMessageIndex);
	void							CrazyDaveTalkMessage(const SexyString& theMessage);
	void							CrazyDaveLeave();
	void							DrawCrazyDave(Graphics* g);
	void							CrazyDaveDie();
	void							CrazyDaveStopTalking();
	void							PreloadForUser();
	int								GetNumPreloadingTasks();
	int								LawnMessageBox(int theDialogId, const SexyChar* theHeaderName, const SexyChar* theLinesName, const SexyChar* theButton1Name, const SexyChar* theButton2Name, int theButtonMode);
	virtual void					EnforceCursor();
	void							ShowCreditScreen();
	void							KillCreditScreen();
	static SexyString				Pluralize(int theCount, const SexyChar* theSingular, const SexyChar* thePlural);
	int								GetNumTrophies(ChallengePage thePage);
	/*inline*/ int					EarnedGoldTrophy();
	inline int						IsRegistered() { return false; }
	inline int						IsExpired() { return false; }
	inline int						IsDRMConnected() { return false; }
	/*inline*/ int					IsScaryPotterLevel();
	static /*inline*/ int			IsEndlessScaryPotter(GameMode theGameMode);
	/*inline*/ int					IsSquirrelLevel();
	/*inline*/ int					IsIZombieLevel();
	/*inline*/ int					CanShowZenGarden();
	static SexyString				GetMoneyString(int theAmount);
	int							AdvanceCrazyDaveText();
	/*inline*/ int					IsWhackAZombieLevel();
	void							BetaSubmit(int theAskForComments);
	void							BetaRecordLevelStats();
	void							UpdatePlayTimeStats();
	void							BetaAddFile(std::list<std::string>& theUploadFileList, std::string theFileName, std::string theShortName);
	int							CanPauseNow();
	/*inline*/ int					IsPuzzleMode();
	/*inline*/ int					IsChallengeMode();
	static /*inline*/ int			IsEndlessIZombie(GameMode theGameMode);
	void							CrazyDaveDoneHanding();
	inline SexyString				GetCurrentLevelName() { return _S("Unknown"); }
	/*inline*/ int					TrophiesNeedForGoldSunflower();
	/*inline*/ int					GetCurrentChallengeIndex();
	void							LoadGroup(const char* theGroupName, int theGroupAveMsToLoad);
	void							TraceLoadGroup(const char* theGroupName, int theGroupTime, int theTotalGroupWeigth, int theTaskWeight);
	void							CrazyDaveStopSound();
	/*inline*/ int					IsTrialStageLocked();
	/*inline*/ void					FinishZenGardenToturial();
	int							UpdatePlayerProfileForFinishingLevel();
	int							SaveFileExists();
	/*inline*/ int					CanDoPinataMode();
	/*inline*/ int					CanDoDanceMode();
	/*inline*/ int					CanDoDaisyMode();
	virtual void					SwitchScreenMode(int wantWindowed, int is3d, int force = false);
	static /*inline*/ void			CenterDialog(Dialog* theDialog, int theWidth, int theHeight);
};

SexyString							LawnGetCurrentLevelName();
int								LawnGetCloseRequest();
int								LawnHasUsedCheatKeys();
void								BetaSubmitFunc();

extern int (*gAppCloseRequest)();				//[0x69E6A0]
extern int (*gAppHasUsedCheatKeys)();			//[0x69E6A4]
extern SexyString (*gGetCurrentLevelName)();

extern int gIsPartnerBuild;
extern int gFastMo;  //0x6A9EAB
extern int gSlowMo;  //0x6A9EAA
extern LawnApp* gLawnApp;  //0x6A9EC0
extern int gSlowMoCounter;  //0x6A9EC4


#endif	// __LAWNAPP_H__