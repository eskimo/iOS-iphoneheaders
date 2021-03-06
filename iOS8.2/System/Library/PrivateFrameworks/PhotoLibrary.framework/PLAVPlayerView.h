/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView {

	unsigned _scaleMode;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) unsigned scaleMode;                          //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,retain,readonly) AVPlayerLayer * layer; 
+(Class)layerClass;
-(void)setScaleMode:(unsigned)arg1 ;
-(void)setScaleMode:(unsigned)arg1 duration:(double)arg2 ;
-(unsigned)scaleMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
@end

