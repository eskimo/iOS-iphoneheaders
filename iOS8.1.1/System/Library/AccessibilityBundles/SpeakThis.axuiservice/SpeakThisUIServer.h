/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpeakThis/SpeakThis-Structs.h>
#import <SpeakThis/AXOratorDelegate.h>
#import <SpeakThis/AXUIService.h>
#import <SpeakThis/AXSpeakOverlayViewControllerDelegate.h>

@class AXOrator, AXSpeakOverlayViewController, AXElement, NSArray, NSString, BKSProcessAssertion;

@interface SpeakThisUIServer : NSObject <AXOratorDelegate, AXUIService, AXSpeakOverlayViewControllerDelegate> {

	AXOrator* _orator;
	AXSpeakOverlayViewController* _viewController;
	AXElement* _systemApp;
	AXElement* _currentApp;
	AXElement* _currentPageTurnElement;
	int _stopType;
	BOOL _isReadingFromFrontmostApp;
	BOOL _isPausingAssistiveTechnology;
	BOOL _isWaitingForPageScroll;
	NSArray* _speakingRangeAndElements;
	NSString* _springBoardActionHandlerId;
	AXObserverRef _observer;
	/*^block*/id _readNextPageCompletion;
	BKSProcessAssertion* _assertionForFetchingMoreContent;

}

@property (nonatomic,retain) NSArray * speakingRangeAndElements;                                 //@synthesize speakingRangeAndElements=_speakingRangeAndElements - In the implementation block
@property (nonatomic,retain) NSString * springBoardActionHandlerId;                              //@synthesize springBoardActionHandlerId=_springBoardActionHandlerId - In the implementation block
@property (nonatomic,retain) AXObserverRef observer;                                             //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL isReadingFromFrontmostApp;                                     //@synthesize isReadingFromFrontmostApp=_isReadingFromFrontmostApp - In the implementation block
@property (assign,nonatomic) BOOL isPausingAssistiveTechnology;                                  //@synthesize isPausingAssistiveTechnology=_isPausingAssistiveTechnology - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForPageScroll;                                        //@synthesize isWaitingForPageScroll=_isWaitingForPageScroll - In the implementation block
@property (nonatomic,copy) id readNextPageCompletion;                                            //@synthesize readNextPageCompletion=_readNextPageCompletion - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * assertionForFetchingMoreContent;              //@synthesize assertionForFetchingMoreContent=_assertionForFetchingMoreContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_handleSpeakingStopped;
-(id)_dispatchQueueForFetches;
-(void)speedUpButtonPressed;
-(void)_finishHandlingPageScroll:(BOOL)arg1 ;
-(void)_observeNotifications:(BOOL)arg1 ;
-(unsigned)_assertionFlagsForStayingAlive;
-(void)_handleIdleTimerReset;
-(id)readNextPageCompletion;
-(void)_giveUpWaitingForPageToScroll;
-(void)rewindButtonPressed;
-(void)setIsReadingFromFrontmostApp:(BOOL)arg1 ;
-(void)fastForwardButtonPressed;
-(void)slowDownButtonPressed;
-(id)_handleSpeakFaster;
-(void)_takeAssertionIfNeeded;
-(BOOL)isWaitingForPageScroll;
-(void)setReadNextPageCompletion:(id)arg1 ;
-(void)setIsWaitingForPageScroll:(BOOL)arg1 ;
-(unsigned long long)_findIndexOfRange:(NSRange)arg1 ;
-(BOOL)isPausingAssistiveTechnology;
-(NSArray *)speakingRangeAndElements;
-(void)setSpeakingRangeAndElements:(NSArray *)arg1 ;
-(NSString *)springBoardActionHandlerId;
-(void)stopButtonPressed;
-(id)_handlePauseSpeaking;
-(BOOL)isReadingFromFrontmostApp;
-(id)_handleSpeakSlower;
-(void)_handleLockButtonPress;
-(void)_didToggleSpeakScreenSetting;
-(id)_handleToggleSpeaking;
-(id)_handleResumeSpeaking;
-(void)_pageDidScroll:(id)arg1 ;
-(void)_handleNewPage;
-(id)_systemApp;
-(BKSProcessAssertion *)assertionForFetchingMoreContent;
-(void)setSpringBoardActionHandlerId:(NSString *)arg1 ;
-(void)_reallyHideUI;
-(void)_didToggleHighlightContentSetting;
-(id)_handleShowUI;
-(id)_handleUnknownMessageIdentifier:(unsigned long long)arg1 ;
-(void)_handleSpeakThisWithOptions:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleFastForward:(/*^block*/id)arg1 ;
-(id)_handleHideUI;
-(void)_handleRewind:(/*^block*/id)arg1 ;
-(void)_appendContentFromElementsAndStrings:(id)arg1 toContentString:(id)arg2 speakingRanges:(id)arg3 startWithPageTurnElement:(BOOL)arg4 ;
-(void)setAssertionForFetchingMoreContent:(BKSProcessAssertion *)arg1 ;
-(void)_clearAssertionForFetchingMoreContent;
-(long long)_stsErrorCodeForOratorErrorCode:(long long)arg1 ;
-(void)setIsPausingAssistiveTechnology:(BOOL)arg1 ;
-(void)_fetchContentStartingWithPageTurnElement:(BOOL)arg1 shouldRefreshContent:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_readNextPageIfApplicableInForwardDirection:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)_assertionFlagsForFetchingContent;
-(id)_convertAXValueSceneReferenceRects:(id)arg1 toView:(id)arg2 fromElement:(id)arg3 ;
-(void)_frontmostAppMayHaveChanged:(BOOL)arg1 ;
-(void)_handleRateChangeSpeechIfNeeded:(BOOL)arg1 ;
-(void)_registerObserver;
-(void)dealloc;
-(id)init;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(AXObserverRef)observer;
-(void)setObserver:(AXObserverRef)arg1 ;
-(void)playButtonPressed;
-(void)pauseButtonPressed;
-(void)_updateCurrentApp;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(BOOL)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg1 ;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isSpeaking;
-(void)oratorDidFinishSpeaking:(id)arg1 ;
-(void)oratorDidPauseSpeaking:(id)arg1 ;
-(void)oratorDidResumeSpeaking:(id)arg1 ;
-(void)oratorDidStartSpeaking:(id)arg1 ;
-(void)oratorDidCancelSpeaking:(id)arg1 ;
-(void)orator:(id)arg1 willSpeakRange:(NSRange)arg2 ofContent:(id)arg3 ;
@end

