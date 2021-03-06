/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UIImageView, WiFiNetwork;

@interface APTableCell : PSTableCell {

	UIActivityIndicatorView* _spinnerView;
	UIImageView* _lockView;
	UIImageView* _barsView;
	bool _showSpinner;
	bool _labelOnly;
	bool _hidesInfoButton;
	WiFiNetwork* _network;

}

@property (nonatomic,retain) WiFiNetwork * network;              //@synthesize network=_network - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateImages;
-(void)setNetwork:(id)arg1 ;
-(void)setLabelOnly;
-(void)setHidesInfoButton:(bool)arg1 ;
-(bool)_displayCheckmark;
-(double)_rightBarsPadding;
-(bool)_displaySpinner;
-(void)_dumpCellLayout;
-(id)network;
-(void)setSpinner:(bool)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setDetailText:(id)arg1 ;
@end

