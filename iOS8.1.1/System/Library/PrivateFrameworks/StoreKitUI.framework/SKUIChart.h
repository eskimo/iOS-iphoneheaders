/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSURL, NSString, NSSet;

@interface SKUIChart : NSObject {

	NSArray* _items;
	BOOL _newsstand;
	NSURL* _seeAllURL;
	BOOL _showsIndexNumbers;
	NSString* _title;
	NSSet* _unavailableItemIdentifiers;

}

@property (nonatomic,readonly) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSURL * seeAllURL;                              //@synthesize seeAllURL=_seeAllURL - In the implementation block
@property (nonatomic,readonly) BOOL showsIndexNumbers;                         //@synthesize showsIndexNumbers=_showsIndexNumbers - In the implementation block
@property (nonatomic,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (getter=isNewsstand,nonatomic,readonly) BOOL newsstand;              //@synthesize newsstand=_newsstand - In the implementation block
@property (nonatomic,copy) NSSet * unavailableItemIdentifiers;                 //@synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers - In the implementation block
-(id)description;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithCustomPageContext:(id)arg1 ;
-(void)setUnavailableItemIdentifiers:(NSSet *)arg1 ;
-(id)initWithChartPageContext:(id)arg1 ;
-(BOOL)showsIndexNumbers;
-(BOOL)isNewsstand;
-(NSSet *)unavailableItemIdentifiers;
-(NSURL *)seeAllURL;
@end

