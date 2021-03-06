/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPDataDownloadManagerDelegate;
@class TSPObjectContext, TSPDocumentResourceDataProvider;

@interface TSPDataDownloadManager : NSObject {

	TSPObjectContext* _context;
	TSPDocumentResourceDataProvider* _docServerDataProvider;
	id<TSPDataDownloadManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TSPDataDownloadManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 ;
-(void)setDelegate:(id<TSPDataDownloadManagerDelegate>)arg1 ;
-(id)init;
-(id<TSPDataDownloadManagerDelegate>)delegate;
-(id)initWithContext:(id)arg1 ;
@end

