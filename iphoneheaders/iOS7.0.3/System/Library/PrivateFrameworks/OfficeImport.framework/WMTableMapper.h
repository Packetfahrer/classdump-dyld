/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableStyle, WMTableColumnInfo;

@interface WMTableMapper : CMMapper {

	WDTable* mWdTable;
	WMBordersProperty* mInsideBorders;
	WMTableStyle* mStyle;
	WMTableColumnInfo* mColumnInfo;

}
+(BOOL)isTableDeleted:(id)arg1 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTable:(id)arg1 parent:(id)arg2 ;
-(id)columnInfo;
-(id)insideBorders;
-(id)copyColumnInfo;
-(void)setInsideBorders:(id)arg1 ;
-(id)copyStopArrayForRow:(unsigned)arg1 ;
@end
