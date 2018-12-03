Pod::Spec.new do |s|
s.name = "YCValue"
s.authors = "anyuechao"
s.homepage = "https://github.com/anyuechao/YCValue.git"
s.summary = "YCValue"
s.version = "1.0.0"
#s.platform = :ios, "8.0"
s.source = { :git => "https://github.com/anyuechao/YCValue.git", :tag => s.version }

s.dependency 'YCCategory'

s.requires_arc     = true
s.ios.deployment_target = '8.0'
s.public_header_files = 'YCValue/YCValue.h'
s.source_files = 'YCValue/Source/**/*.{h,m}'

end
