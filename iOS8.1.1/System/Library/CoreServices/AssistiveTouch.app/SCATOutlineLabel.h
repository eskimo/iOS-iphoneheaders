/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor;

@interface SCATOutlineLabel : UILabel {

	UIColor* _outlineColor;
	double _outlineThickness;

}

@property (nonatomic,retain) UIColor * outlineColor;               //@synthesize outlineColor=_outlineColor - In the implementation block
@property (assign,nonatomic) double outlineThickness;              //@synthesize outlineThickness=_outlineThickness - In the implementation block
-(double)outlineThickness;
-(void)setOutlineThickness:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(UIColor *)outlineColor;
-(void)setOutlineColor:(UIColor *)arg1 ;
@end

