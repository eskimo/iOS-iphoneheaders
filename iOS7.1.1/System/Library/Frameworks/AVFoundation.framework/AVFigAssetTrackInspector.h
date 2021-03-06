/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, AVWeakReference;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {

	OpaqueFigAssetRef _figAsset;
	OpaqueFigAssetTrackRef _figAssetTrack;
	OpaqueFigSimpleMutexRef _loadingMutex;
	OpaqueFigSimpleMutexRef _validationMutex;
	OpaqueFigSemaphoreRef _playabilityValidationSemaphore;
	NSObject<OS_dispatch_queue>* _completionHandlerQueue;
	long long _playableStatus;
	int _playableResult;
	int _playabilityValidationResult;
	bool _playable;
	NSMutableArray* _loadingBatches;
	AVWeakReference* _weakReferenceToAsset;

}
-(float)preferredVolume;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(int)playabilityValidationResult;
-(bool)isSelfContained;
-(long long)totalSampleDataLength;
-(float)estimatedDataRate;
-(id)extendedLanguageTag;
-(SCD_Struct_CM4)minSampleDuration;
-(id)segments;
-(id)segmentForTrackTime:(SCD_Struct_CM4)arg1 ;
-(bool)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(bool)_loadValueOfPlayableByWaitingForAsyncValidationIfNeeded:(bool)arg1 ;
-(id)_loadingBatches;
-(OpaqueFigSemaphoreRef)_playabilityValidationSemaphore;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(unsigned)_figMediaType;
-(void)_addFigNotifications;
-(void)_removeFigNotifications;
-(long long)_loadStatusForFigAssetTrackProperty:(id)arg1 returningError:(int*)arg2 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(int)trackID;
-(bool)isPlayable;
-(id)loudnessInfo;
-(void)dealloc;
-(long long)layer;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(bool)isEnabled;
-(CGSize)dimensions;
-(id)asset;
-(id)languageCode;
-(CGSize)naturalSize;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)formatDescriptions;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(float)nominalFrameRate;
-(SCD_Struct_CM5)timeRange;
-(bool)hasProtectedContent;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)mediaType;
-(void)finalize;
@end

