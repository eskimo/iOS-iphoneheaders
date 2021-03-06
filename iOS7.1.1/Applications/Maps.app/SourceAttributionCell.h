/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class UILabel, SearchResult, NSMutableAttributedString;

@interface SourceAttributionCell : ABContactCell {

	UILabel* _label;
	SearchResult* _searchResult;
	NSMutableAttributedString* _attrString;

}

@property (nonatomic,retain) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
+(id)reuseIdentifier;
-(void)setSearchResult:(id)arg1 ;
-(void)_updateTextColor;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void).cxx_destruct;
-(id)searchResult;
@end

