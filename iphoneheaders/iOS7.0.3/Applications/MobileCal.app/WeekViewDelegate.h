/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol WeekViewDelegate <NSObject>
@optional
-(void)weekViewDidLayout:(id)arg1;
-(void)weekViewDidBeginDragging:(id)arg1;
-(void)weekViewDidScroll:(id)arg1;
-(void)weekViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)weekViewDidEndDecelerating:(id)arg1;
-(void)weekView:(id)arg1 didSelectEvent:(id)arg2;
-(void)weekView:(id)arg1 receivedTapInAllDayAreaOnDate:(id)arg2;
-(void)weekViewAllDaySectionDidScroll:(id)arg1;
-(id)weekViewForWeekBefore:(id)arg1;
-(id)weekViewForWeekAfter:(id)arg1;
-(void)emptySpaceClickedOnDate:(id)arg1;
-(void)emptySpaceClick;
@end
