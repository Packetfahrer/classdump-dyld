/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXLegend : NSObject
+(id)chdLegendFromXmlLegendElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdLegendPositionFromXmlLegendPositionElement:(xmlNode*)arg1 ;
+(void)setDefaultLegendBounds:(id)arg1 legendPosition:(int)arg2 ;
+(id)chdLegendEntryFromXmlLegendEntryElement:(xmlNode*)arg1 defaultFont:(id)arg2 state:(id)arg3 ;
@end
