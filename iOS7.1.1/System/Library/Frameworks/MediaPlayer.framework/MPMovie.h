/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPAVItem, NSURL, AVAsset;

@interface MPMovie : NSObject {

	MPAVItem* _item;
	NSURL* _url;
	long long _movieSourceType;
	double _startPlaybackTime;
	double _endPlaybackTime;
	bool _explicitlySetMovieSourceType;
	bool _movieIsUnplayable;
	double _lastKnownDuration;
	CGSize _lastKnownNaturalSize;
	unsigned long long _lastKnownType;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) long long movieMediaTypes; 
@property (assign,nonatomic) long long movieSourceType; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) double startPlaybackTime; 
@property (assign,nonatomic) double endPlaybackTime; 
+(id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithAsset:(id)arg1 error:(id*)arg2 ;
-(long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(void)setEndPlaybackTime:(double)arg1 ;
-(double)endPlaybackTime;
-(void)setStartPlaybackTime:(double)arg1 ;
-(double)startPlaybackTime;
-(id)_MPArrayQueueItem;
-(id)_initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_initWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)_sharedInit;
-(void)_durationAvailableNotification:(id)arg1 ;
-(void)_naturalSizeAvailableNotification:(id)arg1 ;
-(void)_typeAvailableNotification:(id)arg1 ;
-(void)_determineMediaType;
-(void)dealloc;
-(double)duration;
-(id)url;
-(void).cxx_destruct;
-(id)asset;
-(CGSize)naturalSize;
@end

