/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MRDRunAssertion, NSDictionary, MRNowPlayingArtwork;

@interface MRDNowPlayingInfoClient : NSObject {

	MRDRunAssertion* _runAssertion;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;

}

@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork;              //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
-(NSDictionary *)nowPlayingInfo;
-(void)dealloc;
-(id)init;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
@end

