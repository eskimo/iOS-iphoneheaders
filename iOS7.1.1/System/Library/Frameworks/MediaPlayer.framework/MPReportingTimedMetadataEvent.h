/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPReportingTrackPlaybackEvent.h>

@class NSData;

@interface MPReportingTimedMetadataEvent : MPReportingTrackPlaybackEvent {

	double _timestamp;
	NSData* _timedMetadata;

}

@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSData * timedMetadata;              //@synthesize timedMetadata=_timedMetadata - In the implementation block
-(id)timedMetadata;
-(void)setTimedMetadata:(id)arg1 ;
-(double)timestamp;
-(bool)isValid;
-(void)setTimestamp:(double)arg1 ;
-(void).cxx_destruct;
@end

