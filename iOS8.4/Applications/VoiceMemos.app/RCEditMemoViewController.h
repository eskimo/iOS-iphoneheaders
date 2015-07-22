/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIViewController.h>
#import <VoiceMemos/RCAVWaveformViewControllerDelegate.h>
#import <VoiceMemos/RCControlsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RCEditMemoViewControllerDelegate;
@class RCCompositionController, UILabel, UIFont, NSLayoutConstraint, NSTimer, UIButton, UIProgressView, NSString, NSDate, _RCMemoAlertContext, RCUIConfiguration, RCLayoutMetrics, RCControlsView, NSArray, RCAVWaveformViewController, RCWaveformDataSource;

@interface RCEditMemoViewController : UIViewController <RCAVWaveformViewControllerDelegate, RCControlsViewDelegate, UITextFieldDelegate> {

	RCCompositionController* _compositionController;
	UILabel* _timeDisplayLabel;
	double _timeDisplayLabelTimeValue;
	UIFont* _timeDisplayLabelFont;
	NSLayoutConstraint* _timeDisplayLabelInsetCn;
	NSLayoutConstraint* _timeDisplayLabelWidthCn;
	float _preferredTimeWidth;
	NSTimer* _playbackTimer;
	double _defaultVisibleDuration;
	UIButton* _selectionEditingModeButton;
	UIButton* _cancelTrimButton;
	UIButton* _performTrimButton;
	UIButton* _performDeleteButton;
	char _showTrimProgress;
	UIProgressView* _trimProgressView;
	NSString* _defaultRecordingLabelText;
	NSDate* _defaultRecordingDate;
	char _commitHandled;
	char _editingFinished;
	char _isNewlyCreatedRecording;
	char _hasCapturedWhileVisible;
	char _shouldPlayEndRecordingSoundEffect;
	char _animateNextLayout;
	char _screenUpdatesDisabled;
	char _isInSelectionEditingMode;
	int _timeDisplayType;
	_RCMemoAlertContext* _presentedAlertContext;
	int _controlsConfiguration;
	id<RCEditMemoViewControllerDelegate> _memoControllerDelegate;
	RCUIConfiguration* _UIConfiguration;
	RCLayoutMetrics* _layoutMetrics;
	RCControlsView* _controlsView;
	unsigned _dismissOptions;
	/*^block*/id _endTrimReloadDataSourceBlock;
	NSArray* _trimmingProgressConstraints;
	RCAVWaveformViewController* _waveformViewController;
	UILabel* _recordingNameLabel;
	UILabel* _recordingDateLabel;

}

@property (nonatomic,readonly) RCCompositionController * compositionController;                               //@synthesize compositionController=_compositionController - In the implementation block
@property (assign,nonatomic,__weak) id<RCEditMemoViewControllerDelegate> memoControllerDelegate;              //@synthesize memoControllerDelegate=_memoControllerDelegate - In the implementation block
@property (nonatomic,readonly) RCWaveformDataSource * activeWaveformDataSource; 
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;                                               //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                                                 //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,readonly) char canDismissForIdleEvent; 
@property (assign,nonatomic) char screenUpdatesDisabled; 
@property (nonatomic,retain) RCControlsView * controlsView;                                                   //@synthesize controlsView=_controlsView - In the implementation block
@property (assign,nonatomic) int controlsConfiguration;                                                       //@synthesize controlsConfiguration=_controlsConfiguration - In the implementation block
@property (assign,nonatomic) unsigned dismissOptions;                                                         //@synthesize dismissOptions=_dismissOptions - In the implementation block
@property (nonatomic,copy) id endTrimReloadDataSourceBlock;                                                   //@synthesize endTrimReloadDataSourceBlock=_endTrimReloadDataSourceBlock - In the implementation block
@property (nonatomic,retain) NSArray * trimmingProgressConstraints;                                           //@synthesize trimmingProgressConstraints=_trimmingProgressConstraints - In the implementation block
@property (nonatomic,readonly) RCAVWaveformViewController * waveformViewController;                           //@synthesize waveformViewController=_waveformViewController - In the implementation block
@property (nonatomic,retain) UILabel * recordingNameLabel;                                                    //@synthesize recordingNameLabel=_recordingNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * recordingDateLabel;                                                    //@synthesize recordingDateLabel=_recordingDateLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canDismissForIdleEvent;
-(void)prepareToDismissWithDismissHandler:(/*^block*/id)arg1 ;
-(void)_RCSavedRecordingsModelDidChangeNotification:(id)arg1 ;
-(void)_NSCurrentLocaleDidChangeNotification:(id)arg1 ;
-(RCControlsView *)controlsView;
-(unsigned)dismissOptions;
-(id)initWithCompositionController:(id)arg1 memoControllerDelegate:(id)arg2 ;
-(void)setDismissOptions:(unsigned)arg1 ;
-(void)replacePlaceholderViewCompositionControllerWithController:(id)arg1 ;
-(void)setMemoControllerDelegate:(id<RCEditMemoViewControllerDelegate>)arg1 ;
-(void)_updateTrimModeButtons;
-(id)_previewWaveformDataSource;
-(void)_UIApplicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_setTimeDisplayTextWithTimeValue:(double)arg1 ;
-(void)_recordingNameLabelAction:(id)arg1 ;
-(void)_performTrimByKeepingSelectedRange;
-(void)_performTrimByDeletingSelectedRange;
-(void)_cancelTrim;
-(void)_reloadRecordingAttributesAnimated:(char)arg1 ;
-(void)_updateCanPreviewOrCaptureOrTrim;
-(void)_updateForChangedAVTimes;
-(void)setRecordingNameText:(id)arg1 animate:(char)arg2 ;
-(void)setRecordingDateText:(id)arg1 animate:(char)arg2 ;
-(char)_isSaveRequiredBeforeDismiss;
-(char)_hasActiveRecordingSession;
-(id)recordingNameText;
-(void)_prepareToDismissByFinishingActiveCaptureSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_prepareToDismissByPresentingSaveAlertWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_editRecordingNameWithAlertTitle:(id)arg1 message:(id)arg2 confirmationTitle:(id)arg3 cancelTitle:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_reloadWaveformDataSourceAndPreviewAssetWithInitialTime:(double)arg1 ;
-(void)_beginOrResumeCaptureSession;
-(void)_pauseCaptureSession;
-(void)_cancelEditNameAlert;
-(void)_beginSelectionEditingMode;
-(void)_endSelectionEditingMode;
-(SCD_Struct_RC0)_selectedTimeRange;
-(UILabel *)recordingNameLabel;
-(void)_redoCaptureFragmentWithCompositionControllerRedoInfo:(id)arg1 ;
-(void)_endCaptureSessionWithStopSoundEffect:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_undoCaptureFragment;
-(id)_undoActionNameForTrimMode:(int)arg1 isUndo:(char)arg2 ;
-(void)_redoTrimWithMode:(int)arg1 undoSelectedTimeRange:(SCD_Struct_RC0)arg2 redoInitialTime:(double)arg3 compositionControllerRedoInfo:(id)arg4 ;
-(void)_undoTrimWithMode:(int)arg1 undoSelectedTimeRange:(SCD_Struct_RC0)arg2 redoInitialTime:(double)arg3 ;
-(void)_beginCaptureSessionAtTimeRange:(SCD_Struct_RC0)arg1 isOverdub:(char)arg2 withStartSoundEffect:(char)arg3 ;
-(char)_assetHasNonZeroDuration;
-(UILabel *)recordingDateLabel;
-(void)setTrimmingProgressConstraints:(NSArray *)arg1 ;
-(void)setTimeDisplayType:(int)arg1 ;
-(id)endTrimReloadDataSourceBlock;
-(void)setEndTrimReloadDataSourceBlock:(id)arg1 ;
-(void)_setIsInSelectionEditingMode:(char)arg1 ;
-(char)_isSelectionTrimmableByKeepingSelectedRange;
-(void)_trimByKeepingSelectedTimeRange:(char)arg1 asCopy:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)_isSelectionTrimmableByDeletingSelectedRange;
-(void)_withAccessSession_trimByKeepingSelectedTimeRange:(char)arg1 asCopy:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateTrimProgress:(float)arg1 ;
-(void)setRecordingNameText:(id)arg1 ;
-(void)setRecordingDateText:(id)arg1 ;
-(id)recordingDateText;
-(void)setControlsHidden:(char)arg1 ;
-(char)controlsHidden;
-(RCWaveformDataSource *)activeWaveformDataSource;
-(id<RCEditMemoViewControllerDelegate>)memoControllerDelegate;
-(void)setControlsView:(RCControlsView *)arg1 ;
-(NSArray *)trimmingProgressConstraints;
-(void)setRecordingNameLabel:(UILabel *)arg1 ;
-(void)setRecordingDateLabel:(UILabel *)arg1 ;
-(void)_beginSelectionEditingModeAction;
-(void)commitEditing;
-(void)_updateNavigationItemAnimated:(char)arg1 ;
-(void)dealloc;
-(id)navigationItem;
-(double)_duration;
-(char)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)updateViewConstraints;
-(void)dismiss;
-(double)_currentTime;
-(id)_previewController;
-(void)rc_runAutomatedDebuggingTestsWithCompletion:(/*^block*/id)arg1 ;
-(id)activeCaptureSession;
-(RCAVWaveformViewController *)waveformViewController;
-(void)setScreenUpdatesDisabled:(char)arg1 ;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(char)screenUpdatesDisabled;
-(void)setActiveCaptureSession:(id)arg1 ;
-(void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1 ;
-(void)audioWaveformControllerDidChangeAVTimes:(id)arg1 ;
-(void)audioWaveformControllerDidChangeAVState:(id)arg1 ;
-(RCUIConfiguration *)UIConfiguration;
-(RCLayoutMetrics *)layoutMetrics;
-(void)_pausePreviewing;
-(void)_beginOrResumePreviewing;
-(RCCompositionController *)compositionController;
-(void)_applyUIConfiguration;
-(void)setControlsConfiguration:(int)arg1 ;
-(void)setControlsConfiguration:(int)arg1 animate:(char)arg2 ;
-(void)controlsViewDidChooseStartRecording:(id)arg1 ;
-(void)controlsViewDidChoosePauseRecording:(id)arg1 ;
-(void)controlsViewDidChoosePausePlaying:(id)arg1 ;
-(void)controlsViewDidChooseStartPlaying:(id)arg1 ;
-(void)controlsViewDidChooseDone:(id)arg1 ;
-(int)controlsConfiguration;
@end
