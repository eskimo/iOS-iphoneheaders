/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface KNAnimationRegistry : NSObject {

	NSDictionary* mClassesForTypeAndName;
	NSDictionary* mClassesForTypeAndCategory;
	NSDictionary* mClassesForTypeAndFilter;
	NSDictionary* mClassesForTypeAndObsoleteName;
	NSDictionary* mAlternateEffectIdentifiersForEffectIdentifierAndFilter;
	NSArray* mAnimationInfos;

}
+(id)localizedCategoryNameForCategory:(int)arg1 ;
+(char)p_dumpRegistry;
+(id)animationsInBundle;
+(id)categoryNameForPluginClass:(Class)arg1 ;
+(id)localizedNameForUnsupportedAnimation:(id)arg1 ;
+(id)instance;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(char)arg3 drawable:(id)arg4 ;
-(id)p_buildAlternateFilterMap;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(char)arg3 ;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 ;
-(id)distinctCategoriesForType:(int)arg1 ;
-(id)animationInfosForAnimationType:(int)arg1 category:(id)arg2 ;
-(id)allAnimationInfos;
-(char)canMapEffectIdentifier:(id)arg1 animationType:(int)arg2 toEffectIdentifier:(id)arg3 includeObsoleteNames:(char)arg4 forDrawable:(id)arg5 ;
-(id)animationInfosForAnimationType:(int)arg1 filter:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

