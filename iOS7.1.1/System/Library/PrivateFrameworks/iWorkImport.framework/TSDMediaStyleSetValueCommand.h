/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledInfoSetStyleCommand.h>

@class TSSPropertyMap;

@interface TSDMediaStyleSetValueCommand : TSDStyledInfoSetStyleCommand {

	TSSPropertyMap* mPropertyMap;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(MediaStyleSetValueCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const MediaStyleSetValueCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithMedia:(id)arg1 property:(int)arg2 boxedValue:(id)arg3 ;
-(void)computeStyle;
-(void)dealloc;
@end

