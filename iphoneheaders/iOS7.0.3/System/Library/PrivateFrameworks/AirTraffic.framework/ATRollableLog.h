/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AirTraffic/AirTraffic-Structs.h>
@class NSDate, NSString, NSFileHandle;

@interface ATRollableLog : NSObject {

	NSDate* _lastStatDate;
	NSString* _directory;
	NSString* _baseFilename;
	NSString* _generationalFilenameFormat;
	NSFileHandle* _fh;
	dispatch_source_sRef _fdWatcher;
	dispatch_queue_sRef _logQueue;
	dispatch_queue_sRef _logRequestQueue;

}

@property (retain) NSDate * lastStatDate;              //@synthesize lastStatDate=_lastStatDate - In the implementation block
@property (retain) NSFileHandle * fh;                  //@synthesize fh=_fh - In the implementation block
+(id)loggerWithFilename:(id)arg1 ;
+(id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3 ;
+(id)_generationalFormatFromBase:(id)arg1 ;
+(void)enableLogRolling;
+(id)allLogFilesForFilename:(id)arg1 ;
-(void)logLine:(id)arg1 withPrefix:(id)arg2 ;
-(id)_filenameWithGenerationNumber:(int)arg1 ;
-(id)_fullFilePathWithGenerationNumber:(int)arg1 ;
-(void)setFh:(id)arg1 ;
-(void)setLastStatDate:(id)arg1 ;
-(void)_loadUpHandle;
-(id)_fullCompressedFilePathWithGenerationNumber:(int)arg1 ;
-(id)compressFile:(id)arg1 ;
-(void)_rollLogs;
-(void)_statFileIfNecessaryForRollingCheck;
-(void)slurpDataFromFile:(id)arg1 ;
-(id)fh;
-(id)lastStatDate;
-(void)logString:(id)arg1 ;
-(void)logData:(id)arg1 ;
-(id)initWithFilename:(id)arg1 ;
@end
