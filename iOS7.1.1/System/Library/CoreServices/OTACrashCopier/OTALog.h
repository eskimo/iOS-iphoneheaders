/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:18 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OTACrashCopier/OTACrashCopier-Structs.h>
@class NSDictionary;

@interface OTALog : NSObject {

	_sFILE* _stream;
	NSDictionary* metaData;
	NSDictionary* _metaData;

}

@property (readonly) _sFILE* stream;                       //@synthesize stream=_stream - In the implementation block
@property (readonly) NSDictionary * metaData;              //@synthesize metaData=_metaData - In the implementation block
+(BOOL)usesMetaData:(int)arg1 ;
-(BOOL)isFile:(id)arg1 validForSubmission:(int)arg2 ;
-(BOOL)isFile:(id)arg1 reasonableSize:(long long)arg2 ;
-(id)initWithPath:(id)arg1 forRouting:(int)arg2 ;
-(void)dealloc;
-(_sFILE*)stream;
-(id)metaData;
@end

