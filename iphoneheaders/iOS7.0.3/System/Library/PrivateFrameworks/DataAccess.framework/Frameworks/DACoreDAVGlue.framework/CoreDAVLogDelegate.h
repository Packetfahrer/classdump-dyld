/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CoreDAVLogDelegate
@required
-(int)coreDAVLogLevel;
-(int)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(int)arg2;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1;
-(void)coreDAVTransmittedDataFinished;
@end
