/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@interface MusicQueryDataSource : MPUCompletionQueryDataSource
-(void)dealloc;
-(id)initWithQuery:(id)arg1 entityType:(int)arg2 ;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned)arg1 ;
-(id)playbackContextForIndex:(unsigned)arg1 ;
-(id)entityCountFormat;
-(BOOL)_updateQueryPredicatesAndOrdering;
-(BOOL)queryIsNowPlayingAtIndex:(unsigned)arg1 ;
-(id)_queryForNowPlayingComparisonAtIndex:(unsigned)arg1 ;
-(void)_defaultsDidChangeNotification;
@end
