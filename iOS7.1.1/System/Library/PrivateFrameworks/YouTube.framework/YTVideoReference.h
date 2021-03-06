/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface YTVideoReference : NSObject {

	NSURL* _contentURL;
	unsigned _duration;
	int _profile;

}
-(id)contentURL;
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(id)archiveDictionary;
-(int)profile;
-(id)initFromArchiveDictionary:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 duration:(unsigned)arg2 profile:(int)arg3 ;
@end

