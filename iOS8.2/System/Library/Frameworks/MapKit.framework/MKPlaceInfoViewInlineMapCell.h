/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class UIImage, UIImageView;

@interface MKPlaceInfoViewInlineMapCell : ABContactCell {

	UIImage* _inlineMap;
	UIImageView* _inlineMapView;

}

@property (nonatomic,retain) UIImage * inlineMap;                      //@synthesize inlineMap=_inlineMap - In the implementation block
@property (nonatomic,retain) UIImageView * inlineMapView;              //@synthesize inlineMapView=_inlineMapView - In the implementation block
+(char)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(void)setInlineMap:(UIImage *)arg1 ;
-(UIImage *)inlineMap;
-(UIImageView *)inlineMapView;
-(void)setInlineMapView:(UIImageView *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end
