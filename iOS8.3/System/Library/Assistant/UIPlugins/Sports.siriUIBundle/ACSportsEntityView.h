/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsDomainObjectView.h>

@class SASportsEntity;

@interface ACSportsEntityView : ACSportsDomainObjectView {

	SASportsEntity* _entity;

}

@property (nonatomic,retain) SASportsEntity * entity;              //@synthesize entity=_entity - In the implementation block
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)isSelectable;
-(void)setEntity:(SASportsEntity *)arg1 ;
-(SASportsEntity *)entity;
-(float)contentHeight;
@end

