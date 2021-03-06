/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPPackageWriter <NSObject>
@property (nonatomic,readonly) NSURL * documentTargetURL; 
@property (nonatomic,readonly) NSURL * relativeURLForExternalData; 
@required
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/ id)arg2;
-(id)relativeURLForExternalData;
-(id)writtenPackage;
-(BOOL)writeData:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
-(id)newComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2;
-(void)copyComponent:(id)arg1 locator:(id)arg2 completion:(/*^block*/ id)arg3;
-(BOOL)addData:(id)arg1 infoMessage:(DataInfo*)arg2 saveOperationState:(id)arg3;
-(id)documentTargetURL;
@end

