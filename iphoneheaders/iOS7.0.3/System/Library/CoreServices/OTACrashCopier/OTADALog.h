/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OTACrashCopier/OTALog.h>

@class NSMutableDictionary;

@interface OTADALog : OTALog {

	NSMutableDictionary* _logDictionary;
	int _logType;

}

@property (retain) NSMutableDictionary * logDictionary;              //@synthesize logDictionary=_logDictionary - In the implementation block
@property (nonatomic,readonly) int logType;                          //@synthesize logType=_logType - In the implementation block
+(id)_replaceCrashKeysForLog:(id)arg1 ;
+(BOOL)isInternalInstall;
-(void)purgeLogCache;
-(BOOL)isValidForSubmission;
-(unsigned)extendedSize;
-(id)submissionExtension;
-(id)encodedRepresentation;
-(id)preferredArchiveFilenamePrefix;
-(id)preferredArchiveFilename;
-(void)setLogDictionary:(id)arg1 ;
-(int)logType;
-(void)dealloc;
-(id)logDictionary;
-(id)initWithPath:(id)arg1 ;
@end
