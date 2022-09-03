# CONFIG BEGIN

APPNAME = hw
APPVERSION = 1.0.0
CXX = clang++
SOURCES = src/main.cc src/ApplicationModule.cc src/ArgParser.cc src/l10n.cc
DISTDIR = dist
HEADERS = src/include/meta.hpp src/include/ApplicationModule.hpp src/include/ArgParser.hpp src/include/l10n.hpp

# CONFIG END

$(DISTDIR)/$(APPNAME):$(SOURCES) $(HEADERS) mkdir
	$(CXX) -o $(DISTDIR)/$(APPNAME) $(SOURCES) -D_VERSION_=\"$(APPVERSION)\"

.PHONY:mkdir
mkdir:clean
	mkdir $(DISTDIR)

.PHONY:clean
clean:
	rm -rf $(DISTDIR)


