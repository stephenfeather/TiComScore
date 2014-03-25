//
// RSA
//

@interface CSCrypto : NSObject

+(NSString *)encryptRSA:(NSString *)plainTextString key:(NSString *)key;
+(NSString *)encryptRSA:(NSString *)plainTextString;

+(void)setPublicKey:(NSString *)pemPublicKeyString tag:(NSString *)tag;
+(void)removeKey:(NSString *)tag;

+(NSString *)getX509FormattedPublicKey:(NSString *)tag;
+(NSString *)getPEMFormattedPrivateKey:(NSString *)tag;

+ (NSString *)md5:(NSString *)str;

@end
