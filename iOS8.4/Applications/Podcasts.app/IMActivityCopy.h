/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMActivity.h>

@class NSString;

@interface IMActivityCopy : IMActivity {

	NSString* _text;

}

@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
-(char)canPerformActivityItems:(id)arg1 ;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
@end
