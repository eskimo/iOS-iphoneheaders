/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBPlaceholder : NSObject
+(int)placeholderTypeFromTextType:(int)arg1 ;
+(int)readPlaceholderType:(int)arg1 ;
+(int)readPlaceholderSize:(int)arg1 ;
+(int)readPlaceholderOrientation:(int)arg1 ;
+(char)isBodyPlaceholder:(int)arg1 ;
+(char)isTitlePlaceholder:(int)arg1 ;
+(void)writePlaceholder:(id)arg1 toPlaceholderAtom:(PptOEPlaceholderAtom*)arg2 isMaster:(char)arg3 isNotes:(char)arg4 ;
@end

