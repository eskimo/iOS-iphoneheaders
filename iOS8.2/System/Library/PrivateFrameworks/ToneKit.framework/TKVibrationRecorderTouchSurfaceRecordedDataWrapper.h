/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {

	char _warmUpModeEnabled;
	char _displayLinkHasRefreshedAtLeastOnce;
	unsigned _maximumFramesPerSecondRate;
	void* _recordedData;
	unsigned long _recordedDataElementsCount;
	unsigned long _recordedDataCursor;
	double _vibrationPatternMaximumDuration;
	double _vibrationPatternDidStartTimestamp;
	double _warmUpModeDidStartTimestamp;

}

@property (assign,setter=_setVibrationPatternMaximumDuration:,nonatomic) double _vibrationPatternMaximumDuration;                  //@synthesize vibrationPatternMaximumDuration=_vibrationPatternMaximumDuration - In the implementation block
@property (assign,setter=_setVibrationPatternDidStartTimestamp:,nonatomic) double _vibrationPatternDidStartTimestamp;              //@synthesize vibrationPatternDidStartTimestamp=_vibrationPatternDidStartTimestamp - In the implementation block
@property (assign,setter=_setMaximumFramesPerSecondRate:,nonatomic) unsigned _maximumFramesPerSecondRate;                          //@synthesize maximumFramesPerSecondRate=_maximumFramesPerSecondRate - In the implementation block
@property (assign,setter=_setRecordedData:,nonatomic) void* _recordedData;                                                         //@synthesize recordedData=_recordedData - In the implementation block
@property (assign,setter=_setRecordedDataElementsCount:,nonatomic) unsigned long _recordedDataElementsCount;                       //@synthesize recordedDataElementsCount=_recordedDataElementsCount - In the implementation block
@property (assign,setter=_setRecordedDataCursor:,nonatomic) unsigned long _recordedDataCursor;                                     //@synthesize recordedDataCursor=_recordedDataCursor - In the implementation block
@property (assign,setter=_setWarmUpModeEnabled:,getter=_isWarmUpModeEnabled,nonatomic) char _warmUpModeEnabled;                    //@synthesize warmUpModeEnabled=_warmUpModeEnabled - In the implementation block
@property (assign,setter=_setWarmUpModeDidStartTimestamp:,nonatomic) double _warmUpModeDidStartTimestamp;                          //@synthesize warmUpModeDidStartTimestamp=_warmUpModeDidStartTimestamp - In the implementation block
@property (assign,setter=_setDisplayLinkHasRefreshedAtLeastOnce:,nonatomic) char _displayLinkHasRefreshedAtLeastOnce;              //@synthesize displayLinkHasRefreshedAtLeastOnce=_displayLinkHasRefreshedAtLeastOnce - In the implementation block
-(void)dealloc;
-(char)_isWarmUpModeEnabled;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 ;
-(void)_setVibrationPatternMaximumDuration:(double)arg1 ;
-(double)_vibrationPatternMaximumDuration;
-(void)didStopRecording;
-(void)recordNormalizedTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 ;
-(char)getNormalizedTouchLocation:(CGPoint*)arg1 touchPhase:(int*)arg2 forTimeInterval:(double)arg3 ;
-(void)_setMaximumFramesPerSecondRate:(unsigned)arg1 ;
-(void)_setWarmUpModeEnabled:(char)arg1 ;
-(void)_setWarmUpModeDidStartTimestamp:(double)arg1 ;
-(void)_updateMaximumFramesPerSecondRate:(id)arg1 ;
-(void*)_recordedData;
-(unsigned)_maximumFramesPerSecondRate;
-(void)_setRecordedData:(void*)arg1 ;
-(void)_setRecordedDataElementsCount:(unsigned long)arg1 ;
-(void)_setRecordedDataCursor:(unsigned long)arg1 ;
-(unsigned long)_recordedDataElementsCount;
-(unsigned long)_recordedDataCursor;
-(void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1 ;
-(void)_recordFinalDataWithNormalizedTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3 ;
-(double)_vibrationPatternDidStartTimestamp;
-(void)_setVibrationPatternDidStartTimestamp:(double)arg1 ;
-(char)_displayLinkHasRefreshedAtLeastOnce;
-(double)_warmUpModeDidStartTimestamp;
-(void)_setDisplayLinkHasRefreshedAtLeastOnce:(char)arg1 ;
@end

