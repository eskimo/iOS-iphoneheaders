/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary {

	NSMutableDictionary* dict;

}
-(unsigned)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(char)arg4 hardLinkPath:(id)arg5 ;
-(id)serializeToData;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(id)initWithDictionary:(id)arg1 copyItems:(char)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

