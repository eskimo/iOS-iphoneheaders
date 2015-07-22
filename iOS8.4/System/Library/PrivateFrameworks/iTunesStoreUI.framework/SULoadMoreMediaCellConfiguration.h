/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SULoadMoreMediaCellConfiguration : SUItemCellConfiguration {

	double _previousCellHeight;

}

@property (assign,nonatomic) double previousCellHeight;              //@synthesize previousCellHeight=_previousCellHeight - In the implementation block
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
-(id)init;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(void)setPreviousCellHeight:(double)arg1 ;
-(double)previousCellHeight;
@end
