/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface VideosDetailsTableRow : NSObject {

	NSString* _title;
	id _content;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
+(id)rowWithTitle:(id)arg1 content:(id)arg2 ;
+(id)twoColumnRowWithRows:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)content;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setContent:(id)arg1 ;
@end

