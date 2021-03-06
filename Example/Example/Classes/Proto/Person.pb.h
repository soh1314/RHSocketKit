// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class Person;
@class PersonBuilder;



@interface PersonRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define Person_id @"id"
#define Person_name @"name"
#define Person_email @"email"
@interface Person : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasName_:1;
  BOOL hasEmail_:1;
  SInt32 id;
  NSString* name;
  NSString* email;
}
- (BOOL) hasId;
- (BOOL) hasName;
- (BOOL) hasEmail;
@property (readonly) SInt32 id;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSString* email;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PersonBuilder*) builder;
+ (PersonBuilder*) builder;
+ (PersonBuilder*) builderWithPrototype:(Person*) prototype;
- (PersonBuilder*) toBuilder;

+ (Person*) parseFromData:(NSData*) data;
+ (Person*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromInputStream:(NSInputStream*) input;
+ (Person*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PersonBuilder : PBGeneratedMessageBuilder {
@private
  Person* resultPerson;
}

- (Person*) defaultInstance;

- (PersonBuilder*) clear;
- (PersonBuilder*) clone;

- (Person*) build;
- (Person*) buildPartial;

- (PersonBuilder*) mergeFrom:(Person*) other;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (SInt32) id;
- (PersonBuilder*) setId:(SInt32) value;
- (PersonBuilder*) clearId;

- (BOOL) hasName;
- (NSString*) name;
- (PersonBuilder*) setName:(NSString*) value;
- (PersonBuilder*) clearName;

- (BOOL) hasEmail;
- (NSString*) email;
- (PersonBuilder*) setEmail:(NSString*) value;
- (PersonBuilder*) clearEmail;
@end


// @@protoc_insertion_point(global_scope)
