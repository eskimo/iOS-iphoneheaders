/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol ETFriendCellDelegate;
@interface ETFriendCell : PSTableCell {

	id<ETFriendCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ETFriendCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
-(void)setDelegate:(id<ETFriendCellDelegate>)arg1 ;
-(id<ETFriendCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

