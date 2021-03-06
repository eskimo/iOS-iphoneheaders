/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableSet, NSArray;

@interface TIFuzzyPinyinController : PSListController {

	PSSpecifier* _fuzzyPinyinSpecifier;
	NSMutableSet* _fuzzyPinyinPairs;
	NSArray* _fuzzyPinyinPairSpecifiers;

}

@property (nonatomic,retain) PSSpecifier * fuzzyPinyinSpecifier;              //@synthesize fuzzyPinyinSpecifier=_fuzzyPinyinSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * fuzzyPinyinPairs;                 //@synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs - In the implementation block
@property (nonatomic,copy) NSArray * fuzzyPinyinPairSpecifiers;               //@synthesize fuzzyPinyinPairSpecifiers=_fuzzyPinyinPairSpecifiers - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setKeyboardPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)readFuzzyPinyinPairs;
-(void)setFuzzyPinyinPairs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)fuzzyPinyinPairs;
-(NSArray *)fuzzyPinyinPairSpecifiers;
-(void)setFuzzyPinyinPairSpecifiers:(NSArray *)arg1 ;
-(id)keyboardPreferenceValue:(id)arg1 ;
-(PSSpecifier *)fuzzyPinyinSpecifier;
-(void)setFuzzyPinyinSpecifier:(PSSpecifier *)arg1 ;
-(id)specifiers;
@end

