/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMLibraryBooksDataSourceDelegate <NSObject>
@optional
-(void)dataSourceWillChangeContent:(id)arg1;
-(void)dataSource:(id)arg1 didChangeSectionAtIndex:(unsigned)arg2 forChangeType:(int)arg3;
-(void)dataSource:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(int)arg4 newIndexPath:(id)arg5;
-(void)dataSourceDidChangeContent:(id)arg1;
-(void)dataSource:(id)arg1 didReturnImage:(id)arg2 context:(id)arg3;

@required
-(id)sectionNameKeyPathForDataSource:(id)arg1;
-(id)sortDescriptorsForDataSource:(id)arg1;
-(id)predicateForDataSource:(id)arg1;

@end
