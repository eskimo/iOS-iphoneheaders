/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIAppearance.h>

@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance {

	NSDictionary* _propertiesToMatch;

}

@property (setter=_setPropertiesToMatch:,nonatomic,retain) NSDictionary * _propertiesToMatch;              //@synthesize propertiesToMatch=_propertiesToMatch - In the implementation block
+(id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(id)_appearanceObjectKeyForProperties:(id)arg1 ;
-(void)dealloc;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(NSDictionary *)_propertiesToMatch;
-(void)_setPropertiesToMatch:(id)arg1 ;
@end
