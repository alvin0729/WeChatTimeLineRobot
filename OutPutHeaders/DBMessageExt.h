/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface DBMessageExt : XXUnknownSuperclass <WCDBCoding> {
	unsigned long msgLocalId;
	unsigned long msgFlag;
	unsigned long ConIntRes2;
	unsigned long ConIntRes3;
	NSString* msgSource;
	NSString* msgIdentify;
	NSString* ConStrRes1;
	NSString* ConStrRes2;
	NSString* ConStrRes3;
	unsigned long ConIntRes1;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* ConStrRes3;
@property(retain, nonatomic) NSString* ConStrRes2;
@property(retain, nonatomic) NSString* ConStrRes1;
@property(assign, nonatomic) unsigned long ConIntRes3;
@property(assign, nonatomic) unsigned long ConIntRes2;
@property(assign, nonatomic) unsigned long ConIntRes1;
@property(retain, nonatomic) NSString* msgIdentify;
@property(retain, nonatomic) NSString* msgSource;
@property(assign, nonatomic) unsigned long msgFlag;
@property(assign, nonatomic) unsigned long msgLocalId;
+(id)dummyObject;
-(void).cxx_destruct;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getWCDBPrimaryColumnName;
-(const WCDBIndexHelper*)getWCDBIndexArray;
-(unsigned long)getWCDBIndexArrayCount;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getFileValueTagIndexMap;
-(id)getFileValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getPackedValueTagIndexMap;
-(id)getPackedValueTypeTable;
-(const map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)getValueNameIndexMap;
-(id)getValueTable;
-(const WCDBCondition<unsigned long>*)db_ConIntRes1;
-(const WCDBCondition<NSString* >*)db_ConStrRes3;
-(const WCDBCondition<NSString* >*)db_ConStrRes2;
-(const WCDBCondition<NSString* >*)db_ConStrRes1;
-(const WCDBCondition<NSString* >*)db_msgIdentify;
-(const WCDBCondition<NSString* >*)db_msgSource;
-(const WCDBCondition<unsigned long>*)db_ConIntRes3;
-(const WCDBCondition<unsigned long>*)db_ConIntRes2;
-(const WCDBCondition<unsigned long>*)db_msgFlag;
-(const WCDBCondition<unsigned long>*)db_msgLocalId;
@end
