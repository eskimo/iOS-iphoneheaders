/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MediaPlayer/MPTransportControls.h>

@class MusicProspectivePlaybackInformation;

@interface MusicMiniPlayerTransportControls : MPTransportControls {

	MusicProspectivePlaybackInformation* _prospectivePlaybackInformation;

}

@property (nonatomic,retain) MusicProspectivePlaybackInformation * prospectivePlaybackInformation;              //@synthesize prospectivePlaybackInformation=_prospectivePlaybackInformation - In the implementation block
+(BOOL)buttonImagesUseBackgroundImage;
+(int)buttonType;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(BOOL)usesTintColorForControls;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setProspectivePlaybackInformation:(id)arg1 animated:(BOOL)arg2 ;
-(void)_prospectivePlaybackInformationDidChangeAnimated:(BOOL)arg1 ;
-(void)setProspectivePlaybackInformation:(id)arg1 ;
-(id)prospectivePlaybackInformation;
-(void).cxx_destruct;
@end

