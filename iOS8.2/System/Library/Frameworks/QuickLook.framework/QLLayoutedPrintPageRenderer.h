/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLWebViewPrintPageHelper.h>

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLWebViewPrintPageHelper {

	NSMutableArray* _nodes;
	UIWebPaginationInfo* _paginationInfo;

}
-(id)_htmlPageXPath;
-(id)pdfDataForPageAtIndex:(int)arg1 printingDone:(char*)arg2 ;
-(id)_currentNodes;
-(void)dealloc;
-(int)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
@end

