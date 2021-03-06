/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class KNAnimatedSlideView, NSArray, KNPlaybackSession, NSMutableArray, TSUNoCopyDictionary;

@interface KNAnimatedSlideModel : NSObject {

	KNAnimatedSlideView* _ASV;
	NSArray* _infos;
	KNPlaybackSession* _session;
	NSMutableArray* _buildEvents;
	NSMutableArray* _animatedBuilds;
	TSUNoCopyDictionary* _infoToAnimatedBuildMap;
	TSUNoCopyDictionary* _animatedBuildToRendererMap;
	unsigned _numberOfAddedEvents;

}

@property (nonatomic,readonly) NSArray * animatedBuilds;                                                     //@synthesize animatedBuilds=_animatedBuilds - In the implementation block
@property (assign,nonatomic) unsigned numberOfAddedEvents;                                                   //@synthesize numberOfAddedEvents=_numberOfAddedEvents - In the implementation block
@property (getter=isFirstBuildEventAutomatic,nonatomic,readonly) char firstBuildEventAutomatic; 
-(id)initWithBuildChunks:(id)arg1 infos:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4 ;
-(id)animatedBuildForInfo:(id)arg1 aroundEvent:(int)arg2 isAtEndOfBuild:(char*)arg3 ;
-(id)rendererForAnimatedBuild:(id)arg1 ;
-(id)p_convertToBuildEvents:(id)arg1 ;
-(void)p_insertInitialMovies;
-(void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned)arg1 ignoreInitialDelay:(char)arg2 usingBlock:(/*^block*/id)arg3 ;
-(double)initialDelayForEventIndex:(unsigned)arg1 ;
-(int)p_eventNumberForInfo:(id)arg1 animationType:(int)arg2 defaultResult:(int)arg3 ;
-(NSArray *)animatedBuilds;
-(id)animatedBuildForInfo:(id)arg1 atEvent:(int)arg2 ;
-(id)actionEffectForDrawable:(id)arg1 atBeginningOfEvent:(int)arg2 ;
-(id)p_createBuildAnimationRecords:(id)arg1 info:(id)arg2 event:(int)arg3 start:(double)arg4 eventStart:(double)arg5 animateAtEndOfPreviousBuild:(char)arg6 previousAnimatedBuild:(id)arg7 movieDrawables:(id)arg8 ;
-(void)p_updateVisibilityOnAnimatedBuild:(id)arg1 ;
-(void)p_updatePreviousAndFinalAttributes;
-(void)p_setRenderer:(id)arg1 forAnimatedBuild:(id)arg2 ;
-(id)p_createMovieBuild:(id)arg1 stageIndex:(int)arg2 buildChunk:(id)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 event:(int)arg6 animateAtEndOfPreviousBuild:(char)arg7 ;
-(id)p_animatedBuildForInfo:(id)arg1 event:(int)arg2 buildIn:(char)arg3 ;
-(int)inEventForInfo:(id)arg1 ;
-(int)outEventForInfo:(id)arg1 ;
-(id)createInfoToBuildMap:(id)arg1 ;
-(void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)info:(id)arg1 isVisibleDuringEvent:(int)arg2 ;
-(id)buildChunksForEventRange:(NSRange)arg1 ;
-(double)durationForEventIndexes:(id)arg1 ;
-(NSRange)eventRangeForInfos:(id)arg1 ;
-(id)firstAnimatedBuildForInfo:(id)arg1 ;
-(id)lastAnimatedBuildForInfo:(id)arg1 ;
-(id)previousAnimatedBuildForInfo:(id)arg1 priorToBuild:(id)arg2 ;
-(id)previousBuildInForInfo:(id)arg1 priorToBuild:(id)arg2 ;
-(id)finalActionEffectForDrawable:(id)arg1 ;
-(float)maxScaleFactorForDrawable:(id)arg1 ;
-(char)isFirstBuildEventAutomatic;
-(char)p_determineVisiblityOfInfo:(id)arg1 inOverloadedEvent:(int)arg2 duringEvent:(int)arg3 ;
-(id)p_createInfoListFromRendererList:(id)arg1 ;
-(unsigned)numberOfAddedEvents;
-(void)setNumberOfAddedEvents:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)setTransition:(id)arg1 ;
-(id)transition;
-(id)eventsAtIndex:(unsigned)arg1 ;
@end

