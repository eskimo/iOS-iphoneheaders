/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>

@interface StarkTrackingModeButton : UIButton {

	char _updatingImages;
	int _trackingMode;

}

@property (assign,nonatomic) int trackingMode;              //@synthesize trackingMode=_trackingMode - In the implementation block
-(int)trackingMode;
-(void)setTrackingMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateImages;
@end

