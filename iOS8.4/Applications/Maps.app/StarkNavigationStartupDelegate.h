/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol StarkNavigationStartupDelegate <NSObject>
@optional
-(char)navigationStartupSession:(id)arg1 shouldPresentError:(id)arg2;

@required
-(void)navigationStartupSession:(id)arg1 willRouteFromWaypoint:(id)arg2 toWaypoint:(id)arg3;
-(void)navigationStartupSession:(id)arg1 didFinishWithError:(id)arg2;

@end

